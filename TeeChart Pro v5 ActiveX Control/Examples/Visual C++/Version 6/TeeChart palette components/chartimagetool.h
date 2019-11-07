#if !defined(AFX_CHARTIMAGETOOL_H__000FFF1D_01C3_4779_B9B6_17AFF1F484E6__INCLUDED_)
#define AFX_CHARTIMAGETOOL_H__000FFF1D_01C3_4779_B9B6_17AFF1F484E6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CChartImageTool wrapper class

class CChartImageTool : public COleDispatchDriver
{
public:
	CChartImageTool() {}		// Calls COleDispatchDriver default constructor
	CChartImageTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CChartImageTool(const CChartImageTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetSeries();
	void SetSeries(const VARIANT& newValue);
	void ImageLoad(LPCTSTR FileName);
	void ImageClear();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHARTIMAGETOOL_H__000FFF1D_01C3_4779_B9B6_17AFF1F484E6__INCLUDED_)