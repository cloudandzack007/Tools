{*******************************************************************}
{                                                                   }
{       Almediadev Visual Component Library                         }
{       DynamicSkinForm                                             }
{       Version 9.37                                                }
{                                                                   }
{       Copyright (c) 2000-2008 Almediadev                          }
{       ALL RIGHTS RESERVED                                         }
{                                                                   }
{       Home:  http://www.almdev.com                                }
{       Support: support@almdev.com                                 }
{                                                                   }
{*******************************************************************}

unit spEffBmp;

{$P+,S-,W-,R-}
{$WARNINGS OFF}
{$HINTS OFF}

interface


uses Graphics, Windows;

type

  TFColor = record
    b, g, r: Byte;
  end;

  PFColor = ^TFColor;

  TLine = array[0..0] of TFColor;
  PLine = ^TLine;

  TspEffectBmp = class(TObject)
  private
    procedure SetPixel(x,y: Integer; Clr: Integer);
    function GetPixel(x,y: Integer): Integer;
    procedure SetLine(y: Integer; Line: Pointer);
    function GetLine(y:Integer): Pointer;
  public
    Handle, Width, Height, Size: Integer;
    Bits: Pointer;
    BmpHeader: TBITMAPINFOHEADER;
    BmpInfo: TBITMAPINFO;
    constructor Create(cx, cy: Integer);
    constructor CreateFromhWnd(hBmp: Integer);
    constructor CreateCopy(hBmp: TspEffectBmp);
    destructor  Destroy; override;
    property Pixels[x,y: Integer]: Integer read GetPixel write SetPixel;
    property ScanLines[y:Integer]: Pointer read GetLine write SetLine;
    procedure GetScanLine(y: Integer; Line:Pointer);
    procedure Resize(Dst: TspEffectBmp);
    procedure Draw(hDC, x, y: Integer);
    procedure Stretch(hDC, x, y, cx, cy: Integer);
    procedure DrawRect(hDC, hx, hy, x, y, cx, cy: Integer);
    procedure CopyRect(BMP: TspEffectBmp; Rct:TRect; StartX, StartY: Integer);
    procedure MorphRect(BMP: TspEffectBmp; Kf: Double; Rct: TRect;
                        StartX, StartY: Integer);
    procedure Morph(BMP: TspEffectBmp; Kf: Double);
    procedure MorphHGrad(BMP: TspEffectBMP; Kf: Double);
    procedure MorphVGrad(BMP: TspEffectBMP; Kf: Double);
    procedure MorphGrad(BMP: TspEffectBMP; Kf: Double);
    procedure MorphLeftGrad(BMP: TspEffectBMP; Kf: Double);
    procedure MorphRightGrad(BMP: TspEffectBMP; Kf: Double);
    procedure MorphLeftSlide(BMP: TspEffectBMP; Kf: Double);
    procedure MorphRightSlide(BMP: TspEffectBMP; Kf: Double);
    procedure MorphPush(BMP: TspEffectBMP; Kf: Double);
    procedure ChangeBrightness(Kf: Double);
    procedure ChangeDarkness(Kf: Double);
    procedure GrayScale;
    procedure SplitBlur(Amount: Integer);
    procedure Mosaic(ASize: Integer);
    procedure Invert;
    procedure AddColorNoise(Amount: Integer);
    procedure AddMonoNoise(Amount: Integer);
    procedure Rotate90_1(Dst: TspEffectBmp);
    procedure Rotate90_2(Dst: TspEffectBmp);
    procedure FlipVert(Dst: TspEffectBmp);
    procedure Wave(XDIV, YDIV, RatioVal: Integer);
    procedure MaskAntialiasing(Msk: TspEffectBmp; Amount: Integer);
    procedure MaskBlur(Msk: TspEffectBmp; Amount: Integer);
    procedure MaskFillColor(Msk: TspEffectBmp; C: TColor; kf: Double);
  end;

  PEfBmp = ^TspEffectBmp;

implementation

uses Forms;

procedure CheckRGB(var r, g, b: Integer);
begin
  if r > 255 then r := 255 else if r < 0 then r := 0;
  if g > 255 then g := 255 else if g < 0 then g := 0;
  if b > 255 then b := 255 else if b < 0 then b := 0;
end;

procedure TspEffectBmp.SetPixel(x, y: Integer; Clr:Integer);
begin
  CopyMemory(
    Pointer(Integer(Bits) + (y * (Width mod 4)) + (((y * Width) + x) * 3)), @Clr, 3);
end;

function TspEffectBmp.GetPixel(x,y:Integer):Integer;
begin
  CopyMemory(
    @Result,
    Pointer(Integer(Bits) + (y * (Width mod 4)) + (((y * Width) + x) * 3)), 3);
end;

procedure TspEffectBmp.SetLine(y:Integer;Line:Pointer);
begin
  CopyMemory(
    Pointer(Integer(Bits) + (y*(Width mod 4)) + ((y * Width) * 3)), Line, Width * 3);
end;

function TspEffectBmp.GetLine(y:Integer):Pointer;
begin
  Result := Pointer(Integer(Bits) + (y * (Width mod 4)) + ((y * Width) * 3));
end;

procedure TspEffectBmp.GetScanLine(y:Integer;Line:Pointer);
begin
  CopyMemory(
    Line,
    Pointer(Integer(Bits) + (y * (Width mod 4)) + ((y * Width) * 3)), Width * 3);
end;

constructor TspEffectBmp.Create(cx,cy:Integer);
begin
  Width := cx;
  Height := cy;
  Size := ((Width * 3) + (Width mod 4)) * Height;
  with BmpHeader do
  begin
    biSize := SizeOf(BmpHeader);
    biWidth := Width;
    biHeight := -Height;
    biPlanes := 1;
    biBitCount := 24;
    biCompression := BI_RGB;
  end;
  BmpInfo.bmiHeader := BmpHeader;
  Handle := CreateDIBSection(0, BmpInfo, DIB_RGB_COLORS, Bits, 0, 0);
end;

constructor TspEffectBmp.CreateFromhWnd(hBmp:Integer);
var
  Bmp: TBITMAP;
  hDC: Integer;
begin
  hDC := CreateDC('DISPLAY', nil, nil, nil);
  SelectObject(hDC, hBmp);
  GetObject(hBmp, SizeOf(Bmp), @Bmp);
  Width := Bmp.bmWidth;
  Height := Bmp.bmHeight;
  Size := ((Width * 3) + (Width mod 4)) * Height;

  with BmpHeader do
  begin
    biSize := SizeOf(BmpHeader);
    biWidth := Width;
    biHeight := -Height;
    biPlanes := 1;
    biBitCount := 24;
    biCompression := BI_RGB;
  end;

  BmpInfo.bmiHeader := BmpHeader;
  Handle := CreateDIBSection(0, BmpInfo, DIB_RGB_COLORS, Bits, 0, 0);
  GetDIBits(hDC, hBmp, 0, Height, Bits, BmpInfo, DIB_RGB_COLORS);
  DeleteDC(hDC);
end;

constructor TspEffectBmp.CreateCopy(hBmp:TspEffectBmp);
begin
  BmpHeader := hBmp.BmpHeader;
  BmpInfo := hBmp.BmpInfo;
  Width := hBmp.Width;
  Height := hBmp.Height;
  Size := ((Width * 3) + (Width mod 4)) * Height;
  Handle := CreateDIBSection(0, BmpInfo, DIB_RGB_COLORS, Bits, 0 , 0);
  CopyMemory(Bits, hBmp.Bits, Size);
end;

procedure TspEffectBmp.Stretch(hDC,x,y,cx,cy:Integer);
begin
  StretchDiBits(hDC,
                x, y, cx, cy,
                0, 0, Width, Height,
                Bits,
                BmpInfo,
                DIB_RGB_COLORS,
                SRCCOPY);
end;

procedure TspEffectBmp.Draw(hDC,x,y:Integer);
begin
  SetDIBitsToDevice(hDC,
                    x, y, Width, Height,
                    0, 0, 0, Height,
                    Bits,
                    BmpInfo,
                    DIB_RGB_COLORS);
end;

procedure TspEffectBmp.DrawRect(hDC,hx,hy,x,y,cx,cy:Integer);
begin
  StretchDiBits(hDC,
                hx, hy + cy - 1, cx,-cy + 1,
                x, Height - y, cx, -cy + 1,
                Bits,
                BmpInfo,
                DIB_RGB_COLORS,
                SRCCOPY);
end;

procedure TspEffectBmp.Resize(Dst:TspEffectBmp);
var
  xCount, yCount, x,y: Integer;
  xScale, yScale: Double;
begin
  xScale := (Dst.Width-1) / Width;
  yScale := (Dst.Height-1) / Height;

  for y := 0 to Height-1 do
  for x := 0 to Width-1 do
    begin
      for yCount := 0 to Round(yScale) do
      for xCount := 0 to Round(xScale) do
        Dst.Pixels[Round(xScale * x) + xCount, Round(yScale * y) + yCount] := Pixels[x,y];
    end;
end;

procedure TspEffectBmp.Morph(BMP: TspEffectBmp; Kf: Double);
var
  x, y, r, g, b: Integer;
  Line, L: PLine;
begin
  if (BMP.Width <> Width) or (BMP.Height <> Height) then Exit;
  if kf < 0 then kf := 0;
  if kf > 1 then kf := 1;
  GetMem(Line, Width * 3);
  for y := 0 to Height - 1 do
  begin
    GetScanLine(y,Line);
    L := BMP.ScanLines[y];
    for x := 0 to Width - 1 do
    begin
      r := Round(Line^[x].r * (1 - kf) + L^[x].r * kf);
      g := Round(Line^[x].g * (1 - kf) + L^[x].g * kf);
      b := Round(Line^[x].b * (1 - kf) + L^[x].b * kf);
      CheckRGB(r, g, b);
      Line^[x].r := r;
      Line^[x].g := g;
      Line^[x].b := b;
    end;
    ScanLines[y] := Line;
  end;

  FreeMem(Line, Width * 3);
end;

procedure TspEffectBmp.MorphRect(BMP: TspEffectBmp; Kf: Double;
                                 Rct: TRect;
                                 StartX, StartY: Integer);
var
  x,y, x1,y1, r, g, b : Integer;
  Line, L: PLine;
begin
  if kf < 0 then kf := 0;
  if kf > 1 then kf := 1;
  GetMem(Line,Width*3);
  y1 := StartY;
  for y := Rct.Top to Rct.Bottom - 1 do
  begin
    GetScanLine(y,Line);
    L := BMP.ScanLines[y1];
    x1 := StartX;
    for x := Rct.Left to Rct.Right - 1 do
    begin
      r := Round(Line^[x].r * (1 - kf) + L^[x1].r * kf);
      g := Round(Line^[x].g * (1 - kf) + L^[x1].g * kf);
      b := Round(Line^[x].b * (1 - kf) + L^[x1].b * kf);
      CheckRGB(r, g, b);
      Line^[x].r := r;
      Line^[x].g := g;
      Line^[x].b := b;
      Inc(x1);
    end;
    ScanLines[y] := Line;
    Inc(y1);
  end;
  FreeMem(Line, Width * 3);
end;

procedure TspEffectBmp.CopyRect(BMP: TspEffectBmp; Rct: TRect;
                                StartX, StartY:Integer);
var
  x,y,x1,y1: Integer;
  Line, L: PLine;
begin
  GetMem(Line,Width*3);
  y1 := StartY;
  if Rct.Right > Width - 1 then Rct.Right := Width - 1;
  if Rct.Bottom > Height - 1 then Rct.Bottom := Height - 1;
  for y := Rct.Top to Rct.Bottom do
  begin
    GetScanLine(y,Line);
    L := BMP.ScanLines[y1];
    x1 := StartX;
    for x := Rct.Left to Rct.Right do
    begin
      Line^[x] := L^[x1];
      Inc(x1);
    end;
    ScanLines[y] := Line;
    Inc(y1);
  end;
  FreeMem(Line, Width * 3);
end;

procedure TspEffectBmp.MorphHGrad;
var
  x, y, r, g, b: Integer;
  Line, L: PLine;
  kf1: Double;
  step: Double;
  f : Double;
  p1, p2: Integer;
  Offset: Integer;
begin
  if (BMP.Width <> Width) or (BMP.Height <> Height) then Exit;
  GetMem(Line,Width * 3);

  Offset := Round(Width * kf);

  f := (Width - Offset) div 2;

  if f <> 0
  then
    Step := 1 / f
  else
    Step := 1;

  p1 := Width div 2 - Offset div 2;
  if p1 < 0 then p1 := 0;
  p2 := Width div 2 + Offset div 2;
  if p2 > Width - 1 then p2 := Width - 1;

  for y := 0 to Height - 1 do
  begin
    GetScanLine(y, Line);
    L := BMP.ScanLines[y];
    for x := p1 to p2 do
    begin
      Line^[x].r := L^[x].r;
      Line^[x].g := L^[x].g;
      Line^[x].b := L^[x].b;
     end;
     ScanLines[y] := Line;
   end;

  for y := 0 to Height - 1 do
  begin
    GetScanLine(y,Line);
    L := BMP.ScanLines[y];
    kf1 := 0;
    for x := p1 downto 0 do
    begin
      r := Round(Line^[x].r * kf1 + L^[x].r * (1 - kf1));
      g := Round(Line^[x].g * kf1 + L^[x].g * (1 - kf1));
      b := Round(Line^[x].b * kf1 + L^[x].b * (1 - kf1));
      CheckRGB(r, g, b);
      Line^[x].r := r;
      Line^[x].g := g;
      Line^[x].b := b;
      kf1 := kf1 + Step;
      if kf1 > 1 then kf1 := 1;
     end;
     ScanLines[y] := Line;
   end;

   for y := 0 to Height - 1 do
   begin
     GetScanLine(y,Line);
     L := BMP.ScanLines[y];
     kf1 := 0;
     for x := p2 to Width - 1 do
     begin
       r := Round(Line^[x].r * kf1 + L^[x].r * (1 - kf1));
       g := Round(Line^[x].g * kf1 + L^[x].g * (1 - kf1));
       b := Round(Line^[x].b * kf1 + L^[x].b * (1 - kf1));
       CheckRGB(r, g, b);
       Line^[x].r := r;
       Line^[x].g := g;
       Line^[x].b := b;
       kf1 := kf1 + Step;
       if kf1 > 1 then kf1 := 1;
     end;
     ScanLines[y] := Line;
   end;

  FreeMem(Line, Width * 3);
end;

procedure TspEffectBmp.MorphVGrad;
var
  x, y, r, g, b: Integer;
  Line, L: PLine;
  kf1: Double;
  step: Double;
  f : Double;
  p1, p2: Integer;
  Offset: Integer;
begin
  if (BMP.Width <> Width) or (BMP.Height <> Height) then Exit;
  GetMem(Line, Width * 3);

  Offset := Round(Height * kf);

  f := (Height - 1 - Offset) div 2;

  if f <> 0
  then
    Step := 1 / f
  else
    Step := 0;

  p1 := Height div 2 - Offset div 2;
  if p1 < 0 then p1 := 0;
  p2 := Height div 2 + Offset div 2;
  if p2 > Height - 1 then p2 := Height - 1;

  for y := p1 to p2 do
  begin
    GetScanLine(y, Line);
    L := BMP.ScanLines[y];
    for x := 0 to Width - 1 do
    begin
      Line^[x].r := L^[x].r;
      Line^[x].g := L^[x].g;
      Line^[x].b := L^[x].b;
     end;
     ScanLines[y] := Line;
   end;

  kf1 := 0;
  for y := p1 downto 0 do
  begin
    GetScanLine(y,Line);
    L := BMP.ScanLines[y];
    for x := 0 to Width - 1 do
    begin
      r := Round(Line^[x].r * kf1 + L^[x].r * (1 - kf1));
      g := Round(Line^[x].g * kf1 + L^[x].g * (1 - kf1));
      b := Round(Line^[x].b * kf1 + L^[x].b * (1 - kf1));
      CheckRGB(r, g, b);
      Line^[x].r := r;
      Line^[x].g := g;
      Line^[x].b := b;
     end;
     ScanLines[y] := Line;
     kf1 := kf1 + Step;
     if kf1 > 1 then kf1 := 1;
   end;

   kf1 := 0;
   for y := p2 to Height - 1 do
   begin
     GetScanLine(y,Line);
     L := BMP.ScanLines[y];
     for x := 0 to Width - 1 do
     begin
       r := Round(Line^[x].r * kf1 + L^[x].r * (1 - kf1));
       g := Round(Line^[x].g * kf1 + L^[x].g * (1 - kf1));
       b := Round(Line^[x].b * kf1 + L^[x].b * (1 - kf1));
       CheckRGB(r, g, b);
       Line^[x].r := r;
       Line^[x].g := g;
       Line^[x].b := b;
     end;
     ScanLines[y] := Line;
     kf1 := kf1 + Step;
     if kf1 > 1 then kf1 := 1;
   end;

  FreeMem(Line, Width * 3);
end;

procedure TspEffectBmp.MorphGrad;
begin
  if Width >= Height
  then MorphHGrad(BMP, kf)
  else MorphVGrad(BMP, kf);
end;

procedure TspEffectBmp.MorphLeftGrad;
var
  x, y, r, g, b: Integer;
  Line, L: PLine;
  kf1: Double;
  step: Double;
  f : Integer;
begin
  if (BMP.Width <> Width) or (BMP.Height <> Height) then Exit;

  GetMem(Line, Width * 3);

  f := Round(Width * kf);
  if f < 1 then f := 1;
  if f > Width - 1 then f := Width - 1;

  if f > 0
  then
    Step := 1 / f
  else
    Step := 1;

  for y := 0 to Height - 1 do
  begin
    GetScanLine(y,Line);
    L := BMP.ScanLines[y];
    kf1 := 0;
    for x := 0 to f do
    begin
      r := Round(Line^[x].r * kf1 + L^[x].r * (1 - kf1));
      g := Round(Line^[x].g * kf1 + L^[x].g * (1 - kf1));
      b := Round(Line^[x].b * kf1 + L^[x].b * (1 - kf1));
      CheckRGB(r, g, b);
      Line^[x].r := r;
      Line^[x].g := g;
      Line^[x].b := b;
      kf1 := kf1 + Step;
      if kf1 > 1 then kf1 := 1;
     end;
     ScanLines[y] := Line;
   end;

  FreeMem(Line, Width * 3);
end;

procedure TspEffectBmp.MorphRightGrad;
var
  x, y, r, g, b: Integer;
  Line, L: PLine;
  kf1: Double;
  step: Double;
  f : Integer;
begin
  if (BMP.Width <> Width) or (BMP.Height <> Height) then Exit;

  GetMem(Line, Width * 3);

  f := Width - Round(Width * kf);
  if f < 0 then f := 0;
  if f > Width - 1 then f := Width - 1;

  if Width - f > 0
  then
    Step := 1 / (Width - f)
  else
    Step := 1;

  for y := 0 to Height - 1 do
  begin
    GetScanLine(y,Line);
    L := BMP.ScanLines[y];
    kf1 := 0;
    for x := Width - 1 downto f do
    begin
      r := Round(Line^[x].r * kf1 + L^[x].r * (1 - kf1));
      g := Round(Line^[x].g * kf1 + L^[x].g * (1 - kf1));
      b := Round(Line^[x].b * kf1 + L^[x].b * (1 - kf1));
      CheckRGB(r, g, b);
      Line^[x].r := r;
      Line^[x].g := g;
      Line^[x].b := b;
      kf1 := kf1 + Step;
      if kf1 > 1 then kf1 := 1;
     end;
     ScanLines[y] := Line;
   end;
  FreeMem(Line, Width * 3);
end;

procedure TspEffectBmp.MorphPush(BMP: TspEffectBMP; Kf: Double);
var
  x, y, x1: Integer;
  Line, L: PLine;
  f : Integer;
begin
  if (BMP.Width <> Width) or (BMP.Height <> Height) then Exit;

  GetMem(Line, Width * 3);

  f := Round(Width * kf);
  if f < 0
  then f := 0
  else if f > Width - 1 then f := Width - 1;

  for y := 0 to Height - 1 do
  begin
    GetScanLine(y,Line);
    L := BMP.ScanLines[y];
    for x := Width - 1 downto f do
    begin
      x1 := x - f - 1;
      if x1 < 0 then x1 := 0;
      Line^[x].r := Line^[x1].r;
      Line^[x].g := Line^[x1].g;
      Line^[x].b := Line^[x1].b;
     end;
     ScanLines[y] := Line;
   end;           

  for y := 0 to Height - 1 do
  begin
    GetScanLine(y,Line);
    L := BMP.ScanLines[y];
    x1 := Width - f - 1;
    if x1 < 0 then x1 := 0;
    for x := 0 to f do
    begin
      Line^[x].r := L^[x1].r;
      Line^[x].g := L^[x1].g;
      Line^[x].b := L^[x1].b;
      inc(x1);
      if x1 > Width - 1 then x1 := Width - 1;
    end;
    ScanLines[y] := Line;
  end;

  FreeMem(Line, Width * 3);
end;

procedure TspEffectBmp.MorphLeftSlide;
var
  x, y, x1: Integer;
  Line, L: PLine;
  f : Integer;
begin
  if (BMP.Width <> Width) or (BMP.Height <> Height) then Exit;

  GetMem(Line, Width * 3);

  f := Round(Width * kf);
  if f < 1 then f := 1;
  if f > Width - 1 then f := Width - 1;
  for y := 0 to Height - 1 do
  begin
    GetScanLine(y,Line);
    L := BMP.ScanLines[y];
    x1 := Width - 1 - f;
    if x1 < 0 then x1 := 0;
    for x := 0 to f - 1 do
    begin
      inc(x1);
      if x1 > Width -1 then x1 := Width - 1;
      Line^[x].r := L^[x1].r;
      Line^[x].g := L^[x1].g;
      Line^[x].b := L^[x1].b;
    end;
    ScanLines[y] := Line;
  end;

  FreeMem(Line, Width * 3);
end;

procedure TspEffectBmp.MorphRightSlide;
var
  x, y, x1: Integer;
  Line, L: PLine;
  f : Integer;
begin
  if (BMP.Width <> Width) or (BMP.Height <> Height) then Exit;

  GetMem(Line, Width * 3);

  f := Round(Width * kf);
  if f < 1 then f := 1;
  if f > Width - 1 then f := Width - 1;

  for y := 0 to Height - 1 do
  begin
    GetScanLine(y,Line);
    L := BMP.ScanLines[y];
    x1 := Width - 1 - f;
    if x1 < 0 then x1 := 0;
    for x := 0 to f - 1 do
    begin
      inc(x1);
      if x1 > Width -1 then x1 := Width - 1;
      Line^[x1].r := L^[x].r;
      Line^[x1].g := L^[x].g;
      Line^[x1].b := L^[x].b;
    end;
    ScanLines[y] := Line;
  end;

  FreeMem(Line, Width * 3);
end;

destructor TspEffectBmp.Destroy;
begin
  DeleteObject(Handle);
  inherited;
end;

procedure TspEffectBmp.ChangeBrightness(Kf: Double);
var
  x, y, r, g, b: Integer;
  Line: PLine;
begin
  if Kf < 0 then Kf := 0 else if Kf > 1 then Kf := 1;
  GetMem(Line, Width * 3);
  for y := 0 to Height - 1 do
  begin
    GetScanLine(y, Line);
    for x := 0 to Width - 1 do
    begin
      r := Round(Line^[x].r * (1 - Kf) + 255 * Kf);
      g := Round(Line^[x].g * (1 - Kf) + 255 * Kf);
      b := Round(Line^[x].b * (1 - Kf) + 255 * Kf);
      CheckRGB(r, g, b);
      Line^[x].r := r;
      Line^[x].g := g;
      Line^[x].b := b;
    end;
    ScanLines[y] := Line;
  end;
  FreeMem(Line, Width * 3);
end;

procedure TspEffectBmp.Invert;
var
  x, y, r, g, b: Integer;
  Line: PLine;
begin
  GetMem(Line, Width * 3);
  for y := 0 to Height - 1 do
  begin
    GetScanLine(y, Line);
    for x := 0 to Width - 1 do
    begin
      r := not Line^[x].r;
      g := not Line^[x].g;
      b := not Line^[x].b;
      CheckRGB(r, g, b);
      Line^[x].r := r;
      Line^[x].g := g;
      Line^[x].b := b;
    end;
    ScanLines[y] := Line;
  end;
  FreeMem(Line, Width * 3);
end;


procedure TspEffectBmp.ChangeDarkness(Kf: Double);
var
  x, y, r, g, b: Integer;
  Line: PLine;
begin
  if Kf < 0 then Kf := 0 else if Kf > 1 then Kf := 1;
  GetMem(Line, Width * 3);
  for y := 0 to Height - 1 do
  begin
    GetScanLine(y, Line);
    for x := 0 to Width - 1 do
    begin
      r := Round(Line^[x].r * (1 - Kf));
      g := Round(Line^[x].g * (1 - Kf));
      b := Round(Line^[x].b * (1 - Kf));
      CheckRGB(r, g, b);
      Line^[x].r := r;
      Line^[x].g := g;
      Line^[x].b := b;
    end;
    ScanLines[y] := Line;
  end;
  FreeMem(Line, Width * 3);
end;

procedure TspEffectBmp.GrayScale;
var
  x, y: Integer;
  Line: PLine;
  Gray: Byte;
begin
  GetMem(Line, Width * 3);
  for y := 0 to Height - 1 do
  begin
    GetScanLine(y, Line);
    for x := 0 to Width - 1 do
    begin
      Gray := Round(Line^[x].r * 0.3 + Line^[x].g * 0.59 + Line^[x].b * 0.11);
      if Gray > 255 then Gray := 255 else if Gray < 0 then Gray := 0;
      Line^[x].r := Gray;
      Line^[x].g := Gray;
      Line^[x].b := Gray;
    end;
    ScanLines[y] := Line;
  end;
  FreeMem(Line, Width * 3);
end;

procedure TspEffectBmp.SplitBlur(Amount: Integer);
var
  cx, x, y: Integer;
  L, L1, L2: PLine;
  Buf: array[0..3] of TFColor;
  Tmp: TFColor;
begin
  if Amount = 0 then Exit;
  for y := 0 to Height-1 do
  begin
    L := ScanLines[y];
    if y - Amount < 0
    then L1:=ScanLines[y]
    else L1:=ScanLines[y - Amount];
    if y + Amount < Height
    then L2:=ScanLines[y + Amount]
    else L2:=ScanLines[Height - y];
    for x := 0 to Width - 1 do
    begin
      if x - Amount < 0 then cx := x else cx := x - Amount;
      Buf[0] := L1[cx];
      Buf[1] := L2[cx];
      if x + Amount < Width then cx := x + Amount else cx := Width - x;
      Buf[2] := L1^[cx];
      Buf[3] := L2^[cx];
      Tmp.r := (Buf[0].r + Buf[1].r + Buf[2].r + Buf[3].r) div 4;
      Tmp.g := (Buf[0].g + Buf[1].g + Buf[2].g + Buf[3].g) div 4;
      Tmp.b := (Buf[0].b + Buf[1].b + Buf[2].b + Buf[3].b) div 4;
      L^[x] := Tmp;
    end;
  end;
end;

procedure TspEffectBmp.Mosaic(ASize: Integer);
var
  x, y, i, j : Integer;
  L1, L2: PLine;
  r, g, b : Byte;
begin
  y := 0;
  repeat
    L1 := Scanlines[y];
    x := 0;
    repeat
      j := 1;
      repeat
      L2 := Scanlines[y];
      x := 0;
      repeat
        r := L1[x].r;
        g := L1[x].g;
        b := L1[x].b;
        i:=1;
       repeat
       L2[x].r := r;
       L2[x].g := g;
       L2[x].b := b;
       inc(x);
       inc(i);
       until (x >= Width) or (i > ASize);
      until x >= Width;
      inc(j);
      inc(y);
      until ( y >= Height) or (j > ASize);
    until (y >= Height) or (x >= Width);
  until y >= Height;
end;


procedure TspEffectBmp.AddMonoNoise(Amount:Integer);
var
  x,y,r,g,b,z: Integer;
  Line: PLine;
begin
  GetMem(Line, Width * 3);
  for y := 0 to Height - 1 do
  begin
    GetScanLine(y,Line);
    for x:=0 to Width-1 do
    begin
      z := Random(Amount) - Amount div 2;
      r := Line^[x].r + z;
      g := Line^[x].g + z;
      b := Line^[x].b + z;
      CheckRGB(r, g, b);
      Line^[x].r := r;
      Line^[x].g := g;
      Line^[x].b := b;
    end;
    ScanLines[y] := Line;
  end;
  FreeMem(Line, Width * 3);
end;

procedure TspEffectBmp.AddColorNoise(Amount:Integer);
var
  x,y,r,g,b: Integer;
  Line: PLine;
begin
  GetMem(Line, Width * 3);
  for y := 0 to Height - 1 do
  begin
    GetScanLine(y,Line);
    for x:=0 to Width-1 do
    begin
      r := Line^[x].r + (Random(Amount) - (Amount div 2));
      g := Line^[x].g + (Random(Amount) - (Amount div 2));
      b := Line^[x].b + (Random(Amount) - (Amount div 2));
      CheckRGB(r, g, b);
      Line^[x].r := r;
      Line^[x].g := g;
      Line^[x].b := b;
    end;
    ScanLines[y] := Line;
  end;
  FreeMem(Line, Width * 3);
end;

procedure TspEffectBmp.Rotate90_1(Dst: TspEffectBmp);
var
  x, y: Integer;
begin
  for y := 0 to Height - 1 do
  for x := 0 to Width - 1 do
    Dst.Pixels[y, Width - 1 - x] := Pixels[x, y];
end;

procedure TspEffectBmp.Rotate90_2(Dst: TspEffectBmp);
var
  x, y: Integer;
begin
  for y := 0 to Height - 1 do
  for x := 0 to Width - 1 do
    Dst.Pixels[Height - 1 - y, x] := Pixels[x, y];
end;

procedure TspEffectBmp.FlipVert;
var
  x, y: Integer;
begin
  for y := 0 to Height - 1 do
  for x := 0 to Width - 1 do
    Dst.Pixels[x, Height - 1 - y] := Pixels[x, y];
end;

procedure TspEffectBmp.Wave;
var
  Tmp: TspEffectBmp;
  i, j, XSrc, YSrc: Integer;
begin
  if (YDiv = 0)or (XDiv =0 ) then Exit;
  Tmp := TspEffectBmp.CreateCopy(Self);
  for i := 0 to Width - 1 do
  for j := 0 to Height - 1 do
  begin
    XSrc := Round(i + RatioVal * Sin(j / YDiv));
    YSrc := Round(j + RatioVal * Sin(i / XDiv));
    if XSrc < 0 then XSrc := 0 else if XSrc >= Tmp.Width then XSrc := Tmp.Width - 1;
    if YSrc < 0 then YSrc := 0 else if YSrc >= Tmp.Height then YSrc := Tmp.Height - 1;
    Pixels[i,j] := Tmp.Pixels[XSrc,YSrc];
  end;
  Tmp.Free;
end;

procedure TspEffectBmp.MaskAntialiasing(Msk: TspEffectBmp; Amount: Integer);
var
  Lin, Lin1, Lin2, MskLine, MLin1, MLin2: PLine;
  cx, x, y: Integer;
  MBuf, Buf: array[0..3] of TFColor;
  r, g, b: Integer;
begin
  if Amount = 0 then Exit;
  if (Width = 0) or (Height = 0) then Exit;
  if (Width <> Msk.Width) or (Height > Msk.Height) then Exit;

  for y := 0 to Height-1 do
  begin
    Lin := ScanLines[y];

    if y - Amount < 0
    then Lin1 := ScanLines[y]
    else Lin1 := ScanLines[y - Amount];

    if y + Amount < Height
    then Lin2 := ScanLines[y + Amount]
    else Lin2 := ScanLines[Height - y];


    if y - Amount < 0
    then MLin1 := Msk.ScanLines[y]
    else MLin1 := Msk.ScanLines[y - Amount];

    if y + Amount < Msk.Height
    then MLin2 := Msk.ScanLines[y + Amount]
    else MLin2 := Msk.ScanLines[Height - y];


    MskLine := Msk.ScanLines[y];

    for x := 0 to Width - 1 do
    if not ((MskLine^[x].r = 255) and (MskLine^[x].g = 255)  and (MskLine^[x].b = 255))
    then
    begin
      if x - Amount < 0 then cx := x else cx := x - Amount;
      Buf[0] := Lin1^[cx];
      Buf[1] := Lin2^[cx];
      if x + Amount < Width then cx := x + Amount else cx := Width - x;
      Buf[2] := Lin1^[cx];
      Buf[3] := Lin2^[cx];
      //
      if x - Amount < 0 then cx := x else cx := x - Amount;
      MBuf[0] := MLin1^[cx];
      MBuf[1] := MLin2^[cx];
      if x + Amount < Width then cx := x + Amount else cx := Width - x;
      MBuf[2] := MLin1^[cx];
      MBuf[3] := MLin2^[cx];
      //
      if ((MBuf[0].r = 255) and (MBuf[0].g = 255) and (MBuf[0].b = 255)) or
         ((MBuf[1].r = 255) and (MBuf[1].g = 255) and (MBuf[1].b = 255)) or
         ((MBuf[2].r = 255) and (MBuf[2].g = 255) and (MBuf[2].b = 255)) or
         ((MBuf[3].r = 255) and (MBuf[3].g = 255) and (MBuf[3].b = 255))
      then
        begin
          r := (Buf[0].r + Buf[1].r + Buf[2].r + Buf[3].r) div 4;
          g := (Buf[0].g + Buf[1].g + Buf[2].g + Buf[3].g) div 4;
          b := (Buf[0].b + Buf[1].b + Buf[2].b + Buf[3].b) div 4;
          CheckRGB(r, g, b);
          Lin^[x].r := r;
          Lin^[x].g := g;
          Lin^[x].b := b;
        end;
    end;
  end;
end;

procedure TspEffectBmp.MaskBlur(Msk: TspEffectBmp; Amount: Integer);
var
  Lin, Lin1, Lin2, MskLine: PLine;
  cx, x, y: Integer;
  Buf: array[0..3] of TFColor;
  r, g, b: Integer;
begin
  if Amount = 0 then Exit;
  if (Width = 0) or (Height = 0) then Exit;
  if (Width <> Msk.Width) or (Height > Msk.Height) then Exit;

  for y := 0 to Height-1 do
  begin
    Lin := ScanLines[y];

    if y - Amount < 0
    then Lin1 := ScanLines[y]
    else Lin1 := ScanLines[y - Amount];

    if y + Amount < Height
    then Lin2 := ScanLines[y + Amount]
    else Lin2 := ScanLines[Height - y];

    MskLine := Msk.ScanLines[y];

    for x := 0 to Width - 1 do
    if not ((MskLine^[x].r = 255) and (MskLine^[x].g = 255)  and (MskLine^[x].b = 255))
    then
    begin
      if x - Amount < 0 then cx := x else cx := x - Amount;
      Buf[0] := Lin1^[cx];
      Buf[1] := Lin2^[cx];
      if x + Amount < Width then cx := x + Amount else cx := Width - x;
      Buf[2] := Lin1^[cx];
      Buf[3] := Lin2^[cx];
      r := (Buf[0].r + Buf[1].r + Buf[2].r + Buf[3].r) div 4;
      g := (Buf[0].g + Buf[1].g + Buf[2].g + Buf[3].g) div 4;
      b := (Buf[0].b + Buf[1].b + Buf[2].b + Buf[3].b) div 4;
      CheckRGB(r, g, b);
      Lin^[x].r := r;
      Lin^[x].g := g;
      Lin^[x].b := b;
    end;
  end;
end;

procedure TspEffectBmp.MaskFillColor(Msk: TspEffectBmp; C: TColor; kf: Double);
var
  Lin, MskLine: PLine;
  x, y: Integer;
  r, g, b: Integer;
  cr, cg, cb: Integer;
begin
  if (Width = 0) or (Height = 0) then Exit;
  if (Width <> Msk.Width) or (Height > Msk.Height) then Exit;
  cr := GetRValue(ColorToRGB(C));
  cg := GetGValue(ColorToRGB(C));
  cb := GetBValue(ColorToRGB(C));
  for y := 0 to Height - 1 do
  begin
    Lin := ScanLines[y];
    MskLine := Msk.ScanLines[y];
    for x := 0 to Width - 1 do
    if not ((MskLine^[x].r = 255) and (MskLine^[x].g = 255)  and (MskLine^[x].b = 255))
    then
      begin
        r := Round(Lin^[x].r * (1 - kf) + cr * kf);
        g := Round(Lin^[x].g * (1 - kf) + cg * kf);
        b := Round(Lin^[x].b * (1 - kf) + cb * kf);
        CheckRGB(r, g, b);
        Lin^[x].r := r;
        Lin^[x].g := g;
        Lin^[x].b := b;
      end;
  end;
end;

end.

