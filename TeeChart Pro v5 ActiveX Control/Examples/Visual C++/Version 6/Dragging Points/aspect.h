#if !defined(AFX_ASPECT_H__E8F5DDAF_278A_4646_BD78_E2EFE7863405__INCLUDED_)
#define AFX_ASPECT_H__E8F5DDAF_278A_4646_BD78_E2EFE7863405__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CTeeOpenGL;

/////////////////////////////////////////////////////////////////////////////
// CAspect wrapper class

class CAspect : public COleDispatchDriver
{
public:
	CAspect() {}		// Calls COleDispatchDriver default constructor
	CAspect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CAspect(const CAspect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetApplyZOrder();
	void SetApplyZOrder(BOOL bNewValue);
	long GetChart3DPercent();
	void SetChart3DPercent(long nNewValue);
	long GetHeight3D();
	BOOL GetView3D();
	void SetView3D(BOOL bNewValue);
	long GetWidth3D();
	long GetRotation();
	void SetRotation(long nNewValue);
	long GetElevation();
	void SetElevation(long nNewValue);
	long GetZoom();
	void SetZoom(long nNewValue);
	BOOL GetZoomText();
	void SetZoomText(BOOL bNewValue);
	long GetHorizOffset();
	void SetHorizOffset(long nNewValue);
	long GetVertOffset();
	void SetVertOffset(long nNewValue);
	long GetTilt();
	void SetTilt(long nNewValue);
	BOOL GetOrthogonal();
	void SetOrthogonal(BOOL bNewValue);
	long GetPerspective();
	void SetPerspective(long nNewValue);
	CTeeOpenGL GetOpenGL();
	long GetOrthoAngle();
	void SetOrthoAngle(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ASPECT_H__E8F5DDAF_278A_4646_BD78_E2EFE7863405__INCLUDED_)
