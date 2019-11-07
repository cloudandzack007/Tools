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

// VTable-only interface IFont
/** @com.interface(iid=BEF6E002-A874-101A-8BBA-00AA00300CAB, thread=AUTO) */
public interface IFont extends IUnknown
{
  /** @com.method(vtoffset=0, addFlagsVtable=4)
      @com.parameters([type=STRING] return) */
  public String getName();

  /** @com.method(vtoffset=1, addFlagsVtable=4)
      @com.parameters([in,type=STRING] pname) */
  public void setName(String pname);

  /** @com.method(vtoffset=2, addFlagsVtable=4)
      @com.parameters([type=CURRENCY] return) */
  public long getSize();

  /** @com.method(vtoffset=3, addFlagsVtable=4)
      @com.parameters([in,type=CURRENCY] psize) */
  public void setSize(long psize);

  /** @com.method(vtoffset=4, addFlagsVtable=4)
      @com.parameters([type=BOOLEAN] return) */
  public boolean getBold();

  /** @com.method(vtoffset=5, addFlagsVtable=4)
      @com.parameters([in,type=BOOLEAN] pbold) */
  public void setBold(boolean pbold);

  /** @com.method(vtoffset=6, addFlagsVtable=4)
      @com.parameters([type=BOOLEAN] return) */
  public boolean getItalic();

  /** @com.method(vtoffset=7, addFlagsVtable=4)
      @com.parameters([in,type=BOOLEAN] pitalic) */
  public void setItalic(boolean pitalic);

  /** @com.method(vtoffset=8, addFlagsVtable=4)
      @com.parameters([type=BOOLEAN] return) */
  public boolean getUnderline();

  /** @com.method(vtoffset=9, addFlagsVtable=4)
      @com.parameters([in,type=BOOLEAN] punderline) */
  public void setUnderline(boolean punderline);

  /** @com.method(vtoffset=10, addFlagsVtable=4)
      @com.parameters([type=BOOLEAN] return) */
  public boolean getStrikethrough();

  /** @com.method(vtoffset=11, addFlagsVtable=4)
      @com.parameters([in,type=BOOLEAN] pstrikethrough) */
  public void setStrikethrough(boolean pstrikethrough);

  /** @com.method(vtoffset=12, addFlagsVtable=4)
      @com.parameters([type=I2] return) */
  public short getWeight();

  /** @com.method(vtoffset=13, addFlagsVtable=4)
      @com.parameters([in,type=I2] pweight) */
  public void setWeight(short pweight);

  /** @com.method(vtoffset=14, addFlagsVtable=4)
      @com.parameters([type=I2] return) */
  public short getCharset();

  /** @com.method(vtoffset=15, addFlagsVtable=4)
      @com.parameters([in,type=I2] pcharset) */
  public void setCharset(short pcharset);

  /** @com.method(vtoffset=16, addFlagsVtable=4)
      @com.parameters([type=I4] return) */
  public int getHFont();

  /** @com.method(vtoffset=17, addFlagsVtable=4)
      @com.parameters([out,size=1,type=ARRAY] ppfont) */
  public void Clone(stdole2.IFont[] ppfont);

  /** @com.method(vtoffset=18, addFlagsVtable=4)
      @com.parameters([in,iid=BEF6E002-A874-101A-8BBA-00AA00300CAB,thread=AUTO,type=OBJECT] pfontOther) */
  public void IsEqual(stdole2.IFont pfontOther);

  /** @com.method(vtoffset=19, addFlagsVtable=4)
      @com.parameters([in,type=I4] cyLogical, [in,type=I4] cyHimetric) */
  public void SetRatio(int cyLogical, int cyHimetric);

  /** @com.method(vtoffset=20, addFlagsVtable=4)
      @com.parameters([in,type=I4] hFont) */
  public void AddRefHfont(int hFont);

  /** @com.method(vtoffset=21, addFlagsVtable=4)
      @com.parameters([in,type=I4] hFont) */
  public void ReleaseHfont(int hFont);


  public static final com.ms.com._Guid iid = new com.ms.com._Guid((int)0xbef6e002, (short)0xa874, (short)0x101a, (byte)0x8b, (byte)0xba, (byte)0x0, (byte)0xaa, (byte)0x0, (byte)0x30, (byte)0xc, (byte)0xab);
}
