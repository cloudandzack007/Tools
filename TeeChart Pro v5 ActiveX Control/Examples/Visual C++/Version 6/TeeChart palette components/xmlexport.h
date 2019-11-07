#if !defined(AFX_XMLEXPORT_H__8B9B527A_D1C1_465A_B78D_FF66B4C820D4__INCLUDED_)
#define AFX_XMLEXPORT_H__8B9B527A_D1C1_465A_B78D_FF66B4C820D4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CXMLExport wrapper class

class CXMLExport : public COleDispatchDriver
{
public:
	CXMLExport() {}		// Calls COleDispatchDriver default constructor
	CXMLExport(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CXMLExport(const CXMLExport& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetIncludeHeader();
	void SetIncludeHeader(BOOL bNewValue);
	BOOL GetIncludeLabels();
	void SetIncludeLabels(BOOL bNewValue);
	BOOL GetIncludeIndex();
	void SetIncludeIndex(BOOL bNewValue);
	VARIANT GetSeries();
	void SetSeries(const VARIANT& newValue);
	void SaveToFile(LPCTSTR FileName);
	VARIANT SaveToStream();
	CString AsString();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XMLEXPORT_H__8B9B527A_D1C1_465A_B78D_FF66B4C820D4__INCLUDED_)
