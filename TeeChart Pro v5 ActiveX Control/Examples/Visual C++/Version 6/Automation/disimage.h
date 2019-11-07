#if !defined(AFX_DISIMAGE_H__07B444C5_F238_11D1_B7B6_9E2743A13A06__INCLUDED_)
#define AFX_DISIMAGE_H__07B444C5_F238_11D1_B7B6_9E2743A13A06__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CDISImage wrapper class

class CDISImage : public CWnd
{
protected:
	DECLARE_DYNCREATE(CDISImage)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xd4a97620, 0x8e8f, 0x11cf, { 0x93, 0xcd, 0x0, 0xaa, 0x0, 0xc0, 0x8f, 0xdf } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	CString GetPicturePath();
	void SetPicturePath(LPCTSTR lpszNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DISIMAGE_H__07B444C5_F238_11D1_B7B6_9E2743A13A06__INCLUDED_)
