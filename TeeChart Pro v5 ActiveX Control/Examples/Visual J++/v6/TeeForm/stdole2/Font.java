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

// Dispatch-only interface Font
/** @com.interface(iid=BEF6E003-A874-101A-8BBA-00AA00300CAB, thread=AUTO, type=DISPATCH) */
public interface Font extends IUnknown
{

  /** @com.method(dispid=0, name="Name", type=PROPGET)
      @com.parameters([type=STRING] return) */
  public String getName();


  /** @com.method(dispid=0, name="Name", type=PROPPUT)
      @com.parameters([in,type=STRING] newValue) */
  public void setName(String newValue);


  /** @com.method(dispid=2, name="Size", type=PROPGET)
      @com.parameters([type=CURRENCY] return) */
  public long getSize();


  /** @com.method(dispid=2, name="Size", type=PROPPUT)
      @com.parameters([in,type=CURRENCY] newValue) */
  public void setSize(long newValue);


  /** @com.method(dispid=3, name="Bold", type=PROPGET)
      @com.parameters([type=BOOLEAN] return) */
  public boolean getBold();


  /** @com.method(dispid=3, name="Bold", type=PROPPUT)
      @com.parameters([in,type=BOOLEAN] newValue) */
  public void setBold(boolean newValue);


  /** @com.method(dispid=4, name="Italic", type=PROPGET)
      @com.parameters([type=BOOLEAN] return) */
  public boolean getItalic();


  /** @com.method(dispid=4, name="Italic", type=PROPPUT)
      @com.parameters([in,type=BOOLEAN] newValue) */
  public void setItalic(boolean newValue);


  /** @com.method(dispid=5, name="Underline", type=PROPGET)
      @com.parameters([type=BOOLEAN] return) */
  public boolean getUnderline();


  /** @com.method(dispid=5, name="Underline", type=PROPPUT)
      @com.parameters([in,type=BOOLEAN] newValue) */
  public void setUnderline(boolean newValue);


  /** @com.method(dispid=6, name="Strikethrough", type=PROPGET)
      @com.parameters([type=BOOLEAN] return) */
  public boolean getStrikethrough();


  /** @com.method(dispid=6, name="Strikethrough", type=PROPPUT)
      @com.parameters([in,type=BOOLEAN] newValue) */
  public void setStrikethrough(boolean newValue);


  /** @com.method(dispid=7, name="Weight", type=PROPGET)
      @com.parameters([type=I2] return) */
  public short getWeight();


  /** @com.method(dispid=7, name="Weight", type=PROPPUT)
      @com.parameters([in,type=I2] newValue) */
  public void setWeight(short newValue);


  /** @com.method(dispid=8, name="Charset", type=PROPGET)
      @com.parameters([type=I2] return) */
  public short getCharset();


  /** @com.method(dispid=8, name="Charset", type=PROPPUT)
      @com.parameters([in,type=I2] newValue) */
  public void setCharset(short newValue);


  public static final com.ms.com._Guid iid = new com.ms.com._Guid((int)0xbef6e003, (short)0xa874, (short)0x101a, (byte)0x8b, (byte)0xba, (byte)0x0, (byte)0xaa, (byte)0x0, (byte)0x30, (byte)0xc, (byte)0xab);
}
