#if !defined(AFX_MAPPOLYGONLIST_H__45479579_160D_48B0_B5B4_12B236217659__INCLUDED_)
#define AFX_MAPPOLYGONLIST_H__45479579_160D_48B0_B5B4_12B236217659__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CMapPolygon;

/////////////////////////////////////////////////////////////////////////////
// CMapPolygonList wrapper class

class CMapPolygonList : public COleDispatchDriver
{
public:
	CMapPolygonList() {}		// Calls COleDispatchDriver default constructor
	CMapPolygonList(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMapPolygonList(const CMapPolygonList& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long Add();
	CMapPolygon GetPolygon(long Index);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAPPOLYGONLIST_H__45479579_160D_48B0_B5B4_12B236217659__INCLUDED_)
