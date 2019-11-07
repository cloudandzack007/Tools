//
// Auto-generated using JActiveX.EXE 5.00.2918
//   ("D:\Apps\Microsoft Visual Studio\VJ98\jactivex.exe" /wfc  /w /xi /X:rkc /l "C:\TEMP\jvcF.tmp" /nologo /d "D:\data\TeeChart Installer source\TeeChart Pro v5 ActiveX\Examples\Visual J++\v6\TeeForm" "c:\output\TeeChart5.ocx")
//
// WARNING: Do not remove the comments that include "@com" directives.
// This source file must be compiled by a @com-aware compiler.
// If you are using the Microsoft Visual J++ compiler, you must use
// version 1.02.3920 or later. Previous versions will not issue an error
// but will not generate COM-enabled class files.
//

package stdole2;

import com.ms.com.*;
import com.ms.com.IUnknown;
import com.ms.com.Variant;
import teechart5.*;

/** @com.class(classid=0BE35204-8F91-11CE-9DE3-00AA004BB851,DynamicCasts) 
    @com.interface(iid=7BF80981-BF32-101A-8BBB-00AA00300CAB, thread=AUTO, type=DISPATCH) */
public class StdPicture implements IUnknown,com.ms.com.NoAutoScripting,stdole2.Picture,stdole2.IPicture
{

  /** @com.method(dispid=0, name="Handle", type=PROPGET)
      @com.parameters([type=I4] return) */
  public native int getHandle();


  /** @com.method(dispid=2, name="hPal", type=PROPGET)
      @com.parameters([type=I4] return) */
  public native int getHPal();


  /** @com.method(dispid=2, name="hPal", type=PROPPUT)
      @com.parameters([in,type=I4] newValue) */
  public native void setHPal(int newValue);


  /** @com.method(dispid=3, name="Type", type=PROPGET)
      @com.parameters([type=I2] return) */
  public native short getType();


  /** @com.method(dispid=4, name="Width", type=PROPGET)
      @com.parameters([type=I4] return) */
  public native int getWidth();


  /** @com.method(dispid=5, name="Height", type=PROPGET)
      @com.parameters([type=I4] return) */
  public native int getHeight();

  // prcWBounds UNMAPPABLE: Demasiados direccionamientos.
  //  public native void Render(int hdc, int x, int y, int cx, int cy, int xSrc, int ySrc, int cxSrc, int cySrc, UNMAPPABLE prcWBounds);


  public static final com.ms.com._Guid iid = new com.ms.com._Guid((int)0x7bf80981, (short)0xbf32, (short)0x101a, (byte)0x8b, (byte)0xbb, (byte)0x0, (byte)0xaa, (byte)0x0, (byte)0x30, (byte)0xc, (byte)0xab);
  // getHandle UNMAPPABLE: El nombre es una palabra clave o provoca un conflicto con otro miembro.
  //  /** @com.method()
  //      @hidden */
  //  public native int getHandle();

  // getHPal UNMAPPABLE: El nombre es una palabra clave o provoca un conflicto con otro miembro.
  //  /** @com.method()
  //      @hidden */
  //  public native int getHPal();

  // getType UNMAPPABLE: El nombre es una palabra clave o provoca un conflicto con otro miembro.
  //  /** @com.method()
  //      @hidden */
  //  public native short getType();

  // getWidth UNMAPPABLE: El nombre es una palabra clave o provoca un conflicto con otro miembro.
  //  /** @com.method()
  //      @hidden */
  //  public native int getWidth();

  // getHeight UNMAPPABLE: El nombre es una palabra clave o provoca un conflicto con otro miembro.
  //  /** @com.method()
  //      @hidden */
  //  public native int getHeight();

  // Render UNMAPPABLE: El nombre es una palabra clave o provoca un conflicto con otro miembro.
  //  /** @com.method()
  //      @hidden */
  //  public native void Render(int hdc, int x, int y, int cx, int cy, int xSrc, int ySrc, int cxSrc, int cySrc, UNMAPPABLE prcWBounds);

  // setHPal UNMAPPABLE: El nombre es una palabra clave o provoca un conflicto con otro miembro.
  //  /** @com.method()
  //      @hidden */
  //  public native void setHPal(int phpal);

  /** @com.method()
      @hidden */
  public native int getCurDC();

  /** @com.method()
      @hidden */
  public native void SelectPicture(int hdcIn, int[] phdcOut, int[] phbmpOut);

  /** @com.method()
      @hidden */
  public native boolean getKeepOriginalFormat();

  /** @com.method()
      @hidden */
  public native void setKeepOriginalFormat(boolean pfkeep);

  /** @com.method()
      @hidden */
  public native void PictureChanged();

  // pstm UNMAPPABLE: Demasiados direccionamientos.
  //  /** @com.method()
  //      @hidden */
  //  public native void SaveAsFile(UNMAPPABLE pstm, boolean fSaveMemCopy, int[] pcbSize);

  /** @com.method()
      @hidden */
  public native int getAttributes();

  /** @com.method()
      @hidden */
  public native void SetHdc(int hdc);


  public static final com.ms.com._Guid clsid = new com.ms.com._Guid((int)0xbe35204, (short)0x8f91, (short)0x11ce, (byte)0x9d, (byte)0xe3, (byte)0x0, (byte)0xaa, (byte)0x0, (byte)0x4b, (byte)0xb8, (byte)0x51);
}
