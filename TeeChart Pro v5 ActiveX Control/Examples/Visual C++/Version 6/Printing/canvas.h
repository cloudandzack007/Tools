#if !defined(AFX_CANVAS_H__2808CA3A_4803_4449_B0CA_6A4B150A60DB__INCLUDED_)
#define AFX_CANVAS_H__2808CA3A_4803_4449_B0CA_6A4B150A60DB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CBrush1;
class CPen1;
class CChartFont;
class CTeePoint3D;

/////////////////////////////////////////////////////////////////////////////
// CCanvas wrapper class

class CCanvas : public COleDispatchDriver
{
public:
	CCanvas() {}		// Calls COleDispatchDriver default constructor
	CCanvas(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCanvas(const CCanvas& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CBrush1 GetBrush();
	CPen1 GetPen();
	void LineTo(long X, long Y);
	void MoveTo(long X, long Y);
	void Rectangle(long Left, long Top, long Right, long Bottom);
	CChartFont GetFont();
	void Arc(long X1, long Y1, long X2, long Y2, long X3, long Y3, long X4, long Y4);
	void Ellipse(long X1, long Y1, long X2, long Y2);
	void TextOut(long X, long Y, LPCTSTR Text);
	long TextHeight(LPCTSTR SomeText);
	long TextWidth(LPCTSTR SomeText);
	void ClipRectangle(long Left, long Top, long Right, long Bottom);
	void UnClipRectangle();
	void RotateLabel(long X, long Y, LPCTSTR St, long RotDegree);
	BOOL IsScreenHighColor();
	long GetTop();
	long GetLeft();
	long GetWidth();
	long GetHeight();
	long GetBackMode();
	void SetBackMode(long nNewValue);
	unsigned long GetBackColor();
	void SetBackColor(unsigned long newValue);
	BOOL GetSupportsFullRotation();
	BOOL GetUseBuffer();
	void SetUseBuffer(BOOL bNewValue);
	void Pie3D(long XCenter, long YCenter, long XRadius, long YRadius, long Z0, long Z1, double StartAngle, double EndAngle, BOOL DarkSides, BOOL DrawSides);
	void LineWithZ(long X0, long Y0, long X1, long Y1, long Z);
	void MoveTo3D(long X, long Y, long Z);
	void LineTo3D(long X, long Y, long Z);
	void Plane3D(long X0, long Y0, long X1, long Y1, long Z0, long Z1);
	void ZLine3D(long X, long Y, long Z0, long Z1);
	void RotateLabel3D(long X, long Y, long Z, LPCTSTR St, long RotDegree);
	long GetTextAlign();
	void SetTextAlign(long nNewValue);
	void VertLine3D(long X, long Top, long Bottom, long Z);
	void HorizLine3D(long Left, long Right, long Y, long Z);
	void Cylinder(BOOL Vertical, long Left, long Top, long Right, long Bottom, long Z0, long Z1, BOOL DarkCover);
	void Cube(long Left, long Right, long Top, long Bottom, long Z0, long Z1, BOOL DarkSides);
	void EllipseWithZ(long X1, long Y1, long X2, long Y2, long Z);
	void PlaneWithZ(long X1, long Y1, long X2, long Y2, long X3, long Y3, long X4, long Y4, long Z);
	void PlaneFour3D(long X1, long Y1, long X2, long Y2, long X3, long Y3, long X4, long Y4, long Z0, long Z1);
	void RectangleWithZ(long Left, long Top, long Right, long Bottom, long Z);
	void RectangleZ(long Left, long Top, long Bottom, long Z0, long Z1);
	void TextOut3D(long X, long Y, long Z, LPCTSTR Text);
	void TriangleWithZ(long X1, long Y1, long X2, long Y2, long X3, long Y3, long Z);
	void Frame3D(long Left, long Top, long Right, long Bottom, unsigned long TopColor, unsigned long BottomColor, long Width);
	void EraseBackground(long Left, long Top, long Right, long Bottom);
	void GradientFill(long Left, long Top, long Right, long Bottom, unsigned long StartColor, unsigned long EndColor, long Direction);
	void Line(long X0, long Y0, long X1, long Y1);
	void RectangleY(long Left, long Top, long Right, long Z0, long Z1);
	void Pixels3D(long X, long Y, long Z, unsigned long Value);
	long GetHandleDC();
	void Cone(BOOL Vertical, long Left, long Top, long Right, long Bottom, long Z0, long Z1, BOOL Dark3D, long ConePercent);
	void Sphere(long X, long Y, long Z, double Radius);
	void Arrow(BOOL Filled, long X0, long Y0, long X1, long Y1, long HeadWidth, long HeadHeight, long Z);
	void Draw(long X, long Y, LPUNKNOWN Image);
	CTeePoint3D GetRotationCenter();
	long GetChartXCenter();
	long GetChartYCenter();
	void GrayScale(BOOL Inverted);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CANVAS_H__2808CA3A_4803_4449_B0CA_6A4B150A60DB__INCLUDED_)
