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

unit sppngimagelist;

interface

uses
  Windows, Classes, SysUtils, Controls, Graphics, CommCtrl, ImgList, spPngImage;

type
  TspPngImageList = class;

  TspPngImageItem = class(TCollectionItem)
   private
    FPngImage: TspPngImage;
    FName: string;
    procedure SetPngImage(const Value: TspPngImage);
  protected
    procedure AssignTo(Dest: TPersistent); override;
    function GetDisplayName: string; override;
  public
    constructor Create(Collection: TCollection); override;
    destructor Destroy; override;
    procedure Assign(Source: TPersistent); override;
  published
    property Name: string read FName write FName;
    property PngImage: TspPngImage read FPngImage write SetPngImage;
  end;

  TspPngImageItems = class(TCollection)
  private
    function GetItem(Index: Integer): TspPngImageItem;
    procedure SetItem(Index: Integer; Value:  TspPngImageItem);
  protected
    function GetOwner: TPersistent; override;
  public
    FPngImageList: TspPngImageList;
    constructor Create(APNGImageList: TspPngImageList);
    property Items[Index: Integer]:  TspPngImageItem read GetItem write SetItem; default;
  end;

  TspPngImageList = class(TCustomImageList)
  private
    FPngImages: TspPngImageItems;
    function GetPngWidth: Integer;
    function GetPngHeight: Integer;
    procedure SetPngWidth(Value: Integer);
    procedure SetPngHeight(Value: Integer);
    procedure SetPngImages(Value: TspPngImageItems);
  protected
    procedure DoDraw(Index: Integer; Canvas: TCanvas; X, Y: Integer; Style: Cardinal; Enabled: Boolean = True); override;
    procedure InsertBitMap(Index: Integer);
    procedure DeleteBitMap(Index: Integer);
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
  published
    property PngImages: TspPngImageItems read FPngImages write SetPngImages;
    property PngWidth: Integer read GetPngWidth write SetPngWidth;
    property PngHeight: Integer read GetPngHeight write SetPngHeight;
  end;

  TspPngImageView = class(TGraphicControl)
  private
    FAutoSize: Boolean;
    FPngImageList: TspPngImageList;
    FImageIndex: Integer;
    FCenter: Boolean;
    procedure SetAutoSize(Value: Boolean);
    procedure SetImageIndex(Value: Integer);
    procedure SetCenter(Value: Boolean); 
  protected
    procedure AdjustBounds;
    procedure Loaded; override;
    procedure Notification(AComponent: TComponent; Operation: TOperation); override;
    procedure Paint; override;
  public
    constructor Create(AOwner: TComponent); override;
  published
    property AutoSize: Boolean read FAutoSize write SetAutoSize default True;
    property PngImageList: TspPngImageList
      read FPngImageList write FPngImageList;
    property ImageIndex: Integer read FImageIndex write SetImageIndex;
    property Align;
    property Anchors;
    property Center: Boolean read FCenter write SetCenter default False;
    property Constraints;
    property DragCursor;
    property DragKind;
    property DragMode;
    property Enabled;
    property PopupMenu;
    property ShowHint;
    property Visible;
    property OnClick;
    property OnContextPopup;
    property OnDblClick;
    property OnDragDrop;
    property OnDragOver;
    property OnEndDock;
    property OnEndDrag;
    property OnMouseDown;
    property OnMouseMove;
    property OnMouseUp;
    property OnStartDock;
    property OnStartDrag;
  end;

implementation

procedure TspPngImageItem.AssignTo(Dest: TPersistent);
begin
  inherited AssignTo(Dest);
  if (Dest is TspPngImageItem)
  then
    TspPngImageItem(Dest).PngImage := PngImage;
end;

constructor TspPngImageItem.Create(Collection: TCollection);
begin
  inherited Create(Collection);
  FPngImage := TspPngImage.Create;
  FName := Format('PngImage%d', [Index]);
  TspPngImageItems(Self.Collection).FPngImageList.InsertBitmap(Index);
end;

destructor TspPngImageItem.Destroy;
begin
  FPngImage.Free;
  if TspPngImageItems(Self.Collection).FPngImageList.Count > Index
  then
    TspPngImageItems(Self.Collection).FPngImageList.DeleteBitmap(Index);
  inherited Destroy;
end;

procedure TspPngImageItem.Assign(Source: TPersistent);
begin
  if Source is TspPngImageItem
  then
    begin
      PngImage.Assign(TspPngImageItem(Source).PngImage);
      Name := TspPngImageItem(Source).Name;
   end
  else
    inherited Assign(Source);
end;

function TspPngImageItem.GetDisplayName: string;
begin
  if Length(FName) = 0
  then Result := inherited GetDisplayName
  else Result := FName;
end;

procedure TspPngImageItem.SetPngImage(const Value: TspPngImage);
begin
  FPngImage.Assign(Value);
  Changed(True);
end;

constructor TspPngImageItems.Create;
begin
  inherited Create(TspPngImageItem);
  FPngImageList := APngImageList;
end;


function TspPngImageItems.GetOwner: TPersistent;
begin
  Result := FPngImageList;
end;

function TspPngImageItems.GetItem(Index: Integer): TspPngImageItem;
begin
  Result := TspPngImageItem(inherited GetItem(Index));
end;

procedure TspPngImageItems.SetItem;
begin
  inherited SetItem(Index, Value);
end;

constructor TspPngImageList.Create(AOwner: TComponent);
begin
  inherited;
  FPngImages := TspPngImageItems.Create(Self);
end;

destructor TspPngImageList.Destroy;
begin
  FPngImages.Free;
  FPngImages := nil;
  inherited;
end;

function TspPngImageList.GetPngWidth: Integer;
begin
  Result := Width;
end;

function TspPngImageList.GetPngHeight: Integer;
begin
  Result := Height;
end;

procedure TspPngImageList.SetPngWidth(Value: Integer);
begin
  if Width <> Value
  then
    begin
      Width := Value;
      if not (csLoading in ComponentState)
      then
        FPngImages.Clear;
    end;
end;

procedure TspPngImageList.SetPngHeight(Value: Integer);
begin
  if Height <> Value
  then
    begin
      Height := Value;
      if not (csLoading in ComponentState)
      then
      FPngImages.Clear;
    end;
end;


procedure TspPngImageList.SetPngImages(Value: TspPngImageItems);
begin
  FPngImages.Assign(Value);
end;

procedure TspPngImageList.DoDraw(Index: Integer; Canvas: TCanvas; X, Y: Integer; Style: Cardinal; Enabled: Boolean);

procedure MakeImageBlended(Image: TspPngImage; Amount: Byte = 127);

  procedure ForceAlphachannel(BitTransparency: Boolean; TransparentColor: TColor);
  var
     Assigner: TBitmap;
     Temp: TspPngImage;
     X, Y: Integer;
     Line: sppngimage.PByteArray;
     Current: TColor;
  begin
  Temp := TspPngImage.Create;
  try
    Assigner := TBitmap.Create;
    try
      Assigner.Width := Image.Width;
      Assigner.Height := Image.Height;
      Temp.Assign(Assigner);
    finally
      Assigner.Free;
     end;
    Temp.InitAlpha;
    for Y := 0 to Image.Height - 1
    do begin
       Line := Temp.AlphaScanline[Y];
       for X := 0 to Image.Width - 1
       do begin
          Current := Image.Pixels[X, Y];
          Temp.Pixels[X, Y] := Current;
          if BitTransparency and (Current = TransparentColor)
          then Line^[X] := 0
          else Line^[X] := Amount;
          end;
       end;
    Image.Assign(Temp);
  finally
    Temp.Free;
   end;
  end;

var
   X, Y: Integer;
   Line: sppngimage.PByteArray;
   Forced: Boolean;
   TransparentColor: TColor;
   BitTransparency: Boolean;
begin
  BitTransparency := Image.TransparencyMode = bsptmBit;
  TransparentColor := Image.TransparentColor;
  if not (Image.Header.ColorType in [COLOR_RGBALPHA, COLOR_GRAYSCALEALPHA])
  then
    begin
      Forced := Image.Header.ColorType in [COLOR_GRAYSCALE, COLOR_PALETTE];
      if Forced
      then
        ForceAlphachannel(BitTransparency, TransparentColor)
      else
        Image.InitAlpha;
    end
  else
   Forced := False;

  if not Forced and (Image.Header.ColorType in [COLOR_RGBALPHA, COLOR_GRAYSCALEALPHA])
  then
     for Y := 0 to Image.Height - 1 do
     begin
       Line := Image.AlphaScanline[Y];
       for X := 0 to Image.Width - 1 do
         if BitTransparency and (Image.Pixels[X, Y] = TransparentColor)
         then
           Line^[X] := 0
         else
           Line^[X] := Round(Line^[X] / 256 * (Amount + 1));
     end;
end;

procedure DrawPNG(Png: TspPngImage; Canvas: TCanvas; const Rect: TRect; AEnabled: Boolean);
var
  PngCopy: TspPngImage;
begin
  if not AEnabled
  then
   begin
     PngCopy := TspPngImage.Create;
     try
       PngCopy.Assign(Png);
       MakeImageBlended(PngCopy);
       PngCopy.Draw(Canvas, Rect);
     finally
       PngCopy.Free;
      end;
    end
  else
    Png.Draw(Canvas, Rect);
end;


var
  PaintRect: TRect;
  Png: TspPngImageItem;
begin
  PaintRect := Rect(X, Y, X + Width, Y + Height);
  Png := TspPngImageItem(FPngImages.Items[Index]);
  if Png <> nil
  then
    DrawPNG(Png.PngImage, Canvas, PaintRect, Enabled);
end;

procedure TspPngImageList.InsertBitMap(Index: Integer);
var
  B: TBitMap;
begin
  B := TBitMap.Create;
  B.Monochrome := True;
  B.Width := Width;
  B.height := Height;
  Insert(Index, B, nil);
  B.Free;
end;

procedure TspPngImageList.DeleteBitMap(Index: Integer);
begin
  Delete(Index);
end;

constructor TspPngImageView.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  ControlStyle := ControlStyle - [csOpaque] + [csReplicatable];
  Width := 50;
  Height := 50;
  FPngImageList := nil;
  FAutoSize := True;
  FImageIndex := -1;
  FCenter := False;
end;

procedure TspPngImageView.Paint;
begin
  if (FPngImageList <> nil) and
     (FPngImageList.Count > 0) and
     (FImageIndex >= 0) and
     (FImageIndex < FPngImageList.Count) and
     (FPngImageList.Width > 0) and
     (FPngImageList.Height > 0)
  then
    begin
      if FCenter
      then
        FPngImageList.Draw(Canvas,
        Width div 2 - FPngImageList.Width div 2,
        Height div 2 - FPngImageList.Height div 2,
        FImageIndex, Enabled)
      else
        FPngImageList.Draw(Canvas, 0, 0, FImageIndex, Enabled);
     end;

  if csDesigning in ComponentState
  then
    with Canvas do
    begin
      Pen.Style := psDash;
      Brush.Style := bsClear;
      Rectangle(0, 0, Width, Height);
    end;
end;

procedure TspPngImageView.Loaded;
begin
  inherited Loaded;
  AdjustBounds;
end;

procedure TspPngImageView.AdjustBounds;
begin
  if FAutoSize and (FPngImageList <> nil)
  then
    begin
      Width := FPngImageList.Width;
      Height := FPngImageList.Height;
    end;
end;

procedure TspPngImageView.SetAutoSize(Value: Boolean);
begin
  if FAutoSize <> Value then
  begin
    FAutoSize := Value;
    AdjustBounds;
  end;
end;

procedure TspPngImageView.Notification(AComponent: TComponent;
  Operation: TOperation);
begin
  inherited Notification(AComponent, Operation);
  if (Operation = opRemove) and (AComponent = FPngImageList) then
    FPngImageList := nil;
end;

procedure TspPngImageView.SetImageIndex(Value: Integer);
begin
  if Value >= -1
  then
    FImageIndex := Value;
  if FPngImageList <> nil
  then
    begin
      if FAutoSize then AdjustBounds;
      RePaint;
    end;
end;

procedure TspPngImageView.SetCenter;
begin
  if FCenter <> Value then
  begin
    FCenter := Value;
    RePaint;
  end;
end;

end.
