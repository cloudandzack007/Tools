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

// Dispatch-only interface Picture
/** @com.interface(iid=7BF80981-BF32-101A-8BBB-00AA00300CAB, thread=AUTO, type=DISPATCH) */
public interface Picture extends IUnknown
{

  /** @com.method(dispid=0, name="Handle", type=PROPGET)
      @com.parameters([type=I4] return) */
  public int getHandle();


  /** @com.method(dispid=2, name="hPal", type=PROPGET)
      @com.parameters([type=I4] return) */
  public int getHPal();


  /** @com.method(dispid=2, name="hPal", type=PROPPUT)
      @com.parameters([in,type=I4] newValue) */
  public void setHPal(int newValue);


  /** @com.method(dispid=3, name="Type", type=PROPGET)
      @com.parameters([type=I2] return) */
  public short getType();


  /** @com.method(dispid=4, name="Width", type=PROPGET)
      @com.parameters([type=I4] return) */
  public int getWidth();


  /** @com.method(dispid=5, name="Height", type=PROPGET)
      @com.parameters([type=I4] return) */
  public int getHeight();

  // prcWBounds UNMAPPABLE: Demasiados direccionamientos.
  //  public void Render(int hdc, int x, int y, int cx, int cy, int xSrc, int ySrc, int cxSrc, int cySrc, UNMAPPABLE prcWBounds);


  public static final com.ms.com._Guid iid = new com.ms.com._Guid((int)0x7bf80981, (short)0xbf32, (short)0x101a, (byte)0x8b, (byte)0xbb, (byte)0x0, (byte)0xaa, (byte)0x0, (byte)0x30, (byte)0xc, (byte)0xab);
}
