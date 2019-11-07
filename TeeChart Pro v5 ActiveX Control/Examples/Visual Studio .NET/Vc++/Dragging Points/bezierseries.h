#if !defined(AFX_BEZIERSERIES_H__87B7412D_B840_4F54_B3A6_F96C2CB03162__INCLUDED_)
#define AFX_BEZIERSERIES_H__87B7412D_B840_4F54_B3A6_F96C2CB03162__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPointer;
class CPen1;
class CBrush1;

/////////////////////////////////////////////////////////////////////////////
// CBezierSeries wrapper class

class CBezierSeries : public COleDispatchDriver
{
public:
	CBezierSeries() {}		// Calls COleDispatchDriver default constructor
	CBezierSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBezierSeries(const CBezierSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CPointer GetPointer();
	BOOL GetStairs();
	void SetStairs(BOOL bNewValue);
	BOOL GetInvertedStairs();
	void SetInvertedStairs(BOOL bNewValue);
	CPen1 GetLinePen();
	long GetLineBrush();
	void SetLineBrush(long nNewValue);
	BOOL GetClickableLine();
	void SetClickableLine(BOOL bNewValue);
	long GetLineHeight();
	void SetLineHeight(long nNewValue);
	BOOL GetDark3D();
	void SetDark3D(BOOL bNewValue);
	CBrush1 GetBrush();
	BOOL GetColorEachLine();
	void SetColorEachLine(BOOL bNewValue);
	CPen1 GetOutline();
	long GetTransparency();
	void SetTransparency(long nNewValue);
	long GetNumBezierPoints();
	void SetNumBezierPoints(long nNewValue);
	long GetBezierStyle();
	void SetBezierStyle(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BEZIERSERIES_H__87B7412D_B840_4F54_B3A6_F96C2CB03162__INCLUDED_)