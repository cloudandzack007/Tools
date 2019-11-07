// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "axis.h"

// Dispatch interfaces referenced by this interface
#include "pen.h"
#include "axislabels.h"
#include "axistitle.h"


/////////////////////////////////////////////////////////////////////////////
// CAxis properties

/////////////////////////////////////////////////////////////////////////////
// CAxis operations

BOOL CAxis::GetAutomatic()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAxis::SetAutomatic(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CAxis::GetAutomaticMaximum()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAxis::SetAutomaticMaximum(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CAxis::GetAutomaticMinimum()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAxis::SetAutomaticMinimum(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CPen1 CAxis::GetAxisPen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

long CAxis::GetAxisType()
{
	long result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL CAxis::GetExactDateTime()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAxis::SetExactDateTime(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CPen1 CAxis::GetGridPen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

double CAxis::GetIncrement()
{
	double result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CAxis::SetIncrement(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL CAxis::GetInverted()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAxis::SetInverted(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CAxisLabels CAxis::GetLabels()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAxisLabels(pDispatch);
}

BOOL CAxis::GetLogarithmic()
{
	BOOL result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAxis::SetLogarithmic(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

double CAxis::GetMaximum()
{
	double result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CAxis::SetMaximum(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double CAxis::GetMinimum()
{
	double result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CAxis::SetMinimum(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long CAxis::GetMinorTickCount()
{
	long result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CAxis::SetMinorTickCount(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CAxis::GetMinorTickLength()
{
	long result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CAxis::SetMinorTickLength(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CPen1 CAxis::GetMinorTicks()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

long CAxis::GetPosition()
{
	long result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CAxis::GetTickInnerLength()
{
	long result;
	InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CAxis::SetTickInnerLength(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CAxis::GetTickLength()
{
	long result;
	InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CAxis::SetTickLength(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x19, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CAxis::GetTickOnLabelsOnly()
{
	BOOL result;
	InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAxis::SetTickOnLabelsOnly(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CPen1 CAxis::GetTicks()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

CPen1 CAxis::GetTicksInner()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

CAxisTitle CAxis::GetTitle()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAxisTitle(pDispatch);
}

long CAxis::GetTitleSize()
{
	long result;
	InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CAxis::SetTitleSize(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CAxis::GetVisible()
{
	BOOL result;
	InvokeHelper(0x20, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAxis::SetVisible(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x20, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void CAxis::AdjustMaxMin()
{
	InvokeHelper(0x30, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long CAxis::CalcXPosValue(double SomeValue)
{
	long result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x28, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		SomeValue);
	return result;
}

long CAxis::CalcYPosValue(double SomeValue)
{
	long result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x29, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		SomeValue);
	return result;
}

long CAxis::CalcXSizeValue(double SomeValue)
{
	long result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x2a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		SomeValue);
	return result;
}

long CAxis::CalcYSizeValue(double SomeValue)
{
	long result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x2b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		SomeValue);
	return result;
}

double CAxis::CalcPosPoint(long SomeValue)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2c, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		SomeValue);
	return result;
}

BOOL CAxis::Clicked(long XCoord, long YCoord)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x33, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		XCoord, YCoord);
	return result;
}

void CAxis::CustomDraw(long APosLabels, long APosTitle, long APosAxis, BOOL GridVisible)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_BOOL;
	InvokeHelper(0x2e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 APosLabels, APosTitle, APosAxis, GridVisible);
}

BOOL CAxis::IsDateTime()
{
	BOOL result;
	InvokeHelper(0x34, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

double CAxis::MaxXValue()
{
	double result;
	InvokeHelper(0x36, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CAxis::MaxYValue()
{
	double result;
	InvokeHelper(0x37, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CAxis::MinXValue()
{
	double result;
	InvokeHelper(0x38, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CAxis::MinYValue()
{
	double result;
	InvokeHelper(0x39, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

void CAxis::Scroll(double Offset, BOOL CheckLimits)
{
	static BYTE parms[] =
		VTS_R8 VTS_BOOL;
	InvokeHelper(0x32, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Offset, CheckLimits);
}

void CAxis::SetMinMax(double AMin, double AMax)
{
	static BYTE parms[] =
		VTS_R8 VTS_R8;
	InvokeHelper(0x35, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 AMin, AMax);
}

BOOL CAxis::GetGridCentered()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAxis::SetGridCentered(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

double CAxis::GetPositionPercent()
{
	double result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CAxis::SetPositionPercent(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double CAxis::GetStartPosition()
{
	double result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CAxis::SetStartPosition(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double CAxis::GetEndPosition()
{
	double result;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CAxis::SetEndPosition(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long CAxis::GetLogarithmicBase()
{
	long result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CAxis::SetLogarithmicBase(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void CAxis::CustomDrawMinMax(long APosLabels, long APosTitle, long APosAxis, BOOL GridVisible, double AMinimum, double AMaximum, long AStartPosition, long AEndPosition)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_BOOL VTS_R8 VTS_R8 VTS_I4 VTS_I4;
	InvokeHelper(0x3a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 APosLabels, APosTitle, APosAxis, GridVisible, AMinimum, AMaximum, AStartPosition, AEndPosition);
}

CPen1 CAxis::GetMinorGrid()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

BOOL CAxis::GetOtherside()
{
	BOOL result;
	InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAxis::SetOtherside(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

double CAxis::MaxVisibleSeriesValue(BOOL AllSeries, long SeriesIndex)
{
	double result;
	static BYTE parms[] =
		VTS_BOOL VTS_I4;
	InvokeHelper(0x22, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		AllSeries, SeriesIndex);
	return result;
}

double CAxis::MinVisibleSeriesValue(BOOL AllSeries, long SeriesIndex)
{
	double result;
	static BYTE parms[] =
		VTS_BOOL VTS_I4;
	InvokeHelper(0x23, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		AllSeries, SeriesIndex);
	return result;
}

double CAxis::CalcIncrement()
{
	double result;
	InvokeHelper(0x24, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}
