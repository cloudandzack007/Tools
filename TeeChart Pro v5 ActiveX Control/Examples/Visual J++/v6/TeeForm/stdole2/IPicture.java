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

// VTable-only interface IPicture
/** @com.interface(iid=7BF80980-BF32-101A-8BBB-00AA00300CAB, thread=AUTO) */
public interface IPicture extends IUnknown
{
  /** @com.method(vtoffset=0, addFlagsVtable=4)
      @com.parameters([type=I4] return) */
  public int getHandle();

  /** @com.method(vtoffset=1, addFlagsVtable=4)
      @com.parameters([type=I4] return) */
  public int getHPal();

  /** @com.method(vtoffset=2, addFlagsVtable=4)
      @com.parameters([type=I2] return) */
  public short getType();

  /** @com.method(vtoffset=3, addFlagsVtable=4)
      @com.parameters([type=I4] return) */
  public int getWidth();

  /** @com.method(vtoffset=4, addFlagsVtable=4)
      @com.parameters([type=I4] return) */
  public int getHeight();

  // prcWBounds UNMAPPABLE: Demasiados direccionamientos.
  //  public void Render(int hdc, int x, int y, int cx, int cy, int xSrc, int ySrc, int cxSrc, int cySrc, UNMAPPABLE prcWBounds);

  /** @com.method(vtoffset=6, addFlagsVtable=4)
      @com.parameters([in,type=I4] phpal) */
  public void setHPal(int phpal);

  /** @com.method(vtoffset=7, addFlagsVtable=4)
      @com.parameters([type=I4] return) */
  public int getCurDC();

  /** @com.method(vtoffset=8, addFlagsVtable=4)
      @com.parameters([in,type=I4] hdcIn, [out,size=1,type=ARRAY] phdcOut, [out,size=1,type=ARRAY] phbmpOut) */
  public void SelectPicture(int hdcIn, int[] phdcOut, int[] phbmpOut);

  /** @com.method(vtoffset=9, addFlagsVtable=4)
      @com.parameters([type=BOOLEAN] return) */
  public boolean getKeepOriginalFormat();

  /** @com.method(vtoffset=10, addFlagsVtable=4)
      @com.parameters([in,type=BOOLEAN] pfkeep) */
  public void setKeepOriginalFormat(boolean pfkeep);

  /** @com.method(vtoffset=11, addFlagsVtable=4)
      @com.parameters() */
  public void PictureChanged();

  // pstm UNMAPPABLE: Demasiados direccionamientos.
  //  public void SaveAsFile(UNMAPPABLE pstm, boolean fSaveMemCopy, int[] pcbSize);

  /** @com.method(vtoffset=13, addFlagsVtable=4)
      @com.parameters([type=I4] return) */
  public int getAttributes();

  /** @com.method(vtoffset=14, addFlagsVtable=4)
      @com.parameters([in,type=I4] hdc) */
  public void SetHdc(int hdc);


  public static final com.ms.com._Guid iid = new com.ms.com._Guid((int)0x7bf80980, (short)0xbf32, (short)0x101a, (byte)0x8b, (byte)0xbb, (byte)0x0, (byte)0xaa, (byte)0x0, (byte)0x30, (byte)0xc, (byte)0xab);
}
