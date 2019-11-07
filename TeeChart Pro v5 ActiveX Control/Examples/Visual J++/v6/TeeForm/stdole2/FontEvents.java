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

// Dispatch-only interface FontEvents
/** @com.interface(iid=4EF6100A-AF88-11D0-9846-00C04FC29993, thread=AUTO, type=DISPATCH) */
public interface FontEvents extends IUnknown
{
  /** @com.method(dispid=9, type=METHOD, name="FontChanged", returntype=VOID)
      @com.parameters([in,type=STRING] PropertyName) */
  public void FontChanged(String PropertyName);


  public static final com.ms.com._Guid iid = new com.ms.com._Guid((int)0x4ef6100a, (short)0xaf88, (short)0x11d0, (byte)0x98, (byte)0x46, (byte)0x0, (byte)0xc0, (byte)0x4f, (byte)0xc2, (byte)0x99, (byte)0x93);
}
