#if !defined(AFX_TEEPANELSLIST_H__A05F3669_4DC3_4A2D_968E_671B452B7DF6__INCLUDED_)
#define AFX_TEEPANELSLIST_H__A05F3669_4DC3_4A2D_968E_671B452B7DF6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CTeePanelsList wrapper class

class CTeePanelsList : public COleDispatchDriver
{
public:
	CTeePanelsList() {}		// Calls COleDispatchDriver default constructor
	CTeePanelsList(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTeePanelsList(const CTeePanelsList& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void Delete(long Index);
	void Clear();
	long GetCount();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEEPANELSLIST_H__A05F3669_4DC3_4A2D_968E_671B452B7DF6__INCLUDED_)
