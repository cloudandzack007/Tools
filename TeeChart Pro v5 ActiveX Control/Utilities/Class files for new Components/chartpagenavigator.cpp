// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "chartpagenavigator.h"

/////////////////////////////////////////////////////////////////////////////
// CChartPageNavigator

IMPLEMENT_DYNCREATE(CChartPageNavigator, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CChartPageNavigator properties

/////////////////////////////////////////////////////////////////////////////
// CChartPageNavigator operations

void CChartPageNavigator::SetChart(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void CChartPageNavigator::SetChartLink(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void CChartPageNavigator::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CChartPageNavigator::EnableButtons()
{
	InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}