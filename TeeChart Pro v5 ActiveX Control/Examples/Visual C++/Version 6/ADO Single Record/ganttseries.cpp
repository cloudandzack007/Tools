// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "ganttseries.h"

// Dispatch interfaces referenced by this interface
#include "Pointer.h"
#include "pen.h"
#include "valuelist.h"


/////////////////////////////////////////////////////////////////////////////
// CGanttSeries properties

/////////////////////////////////////////////////////////////////////////////
// CGanttSeries operations

CPointer CGanttSeries::GetPointer()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPointer(pDispatch);
}

BOOL CGanttSeries::GetDark3D()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CGanttSeries::SetDark3D(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CPen1 CGanttSeries::GetConnectingPen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

CValueList CGanttSeries::GetEndValues()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CValueList(pDispatch);
}

CValueList CGanttSeries::GetStartValues()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x20, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CValueList(pDispatch);
}

CValueList CGanttSeries::GetNextTask()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x21, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CValueList(pDispatch);
}

long CGanttSeries::AddGantt(double AStart, double AEnd, double AY, LPCTSTR SomeLabel)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_BSTR;
	InvokeHelper(0x22, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		AStart, AEnd, AY, SomeLabel);
	return result;
}

long CGanttSeries::AddGanttColor(double AStart, double AEnd, double AY, LPCTSTR AXLabel, unsigned long Value)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_BSTR VTS_I4;
	InvokeHelper(0x23, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		AStart, AEnd, AY, AXLabel, Value);
	return result;
}
