#if !defined(AFX_PYRAMIDSERIES_H__4A96B372_B7D6_4A8F_A11D_75ABDDBD1BE2__INCLUDED_)
#define AFX_PYRAMIDSERIES_H__4A96B372_B7D6_4A8F_A11D_75ABDDBD1BE2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CPyramidSeries wrapper class

class CPyramidSeries : public COleDispatchDriver
{
public:
	CPyramidSeries() {}		// Calls COleDispatchDriver default constructor
	CPyramidSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPyramidSeries(const CPyramidSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetSizePercent();
	void SetSizePercent(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PYRAMIDSERIES_H__4A96B372_B7D6_4A8F_A11D_75ABDDBD1BE2__INCLUDED_)
