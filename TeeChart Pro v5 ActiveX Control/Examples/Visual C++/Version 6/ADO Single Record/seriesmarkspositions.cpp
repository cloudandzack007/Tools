// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "seriesmarkspositions.h"

// Dispatch interfaces referenced by this interface
#include "SeriesMarkPosition.h"


/////////////////////////////////////////////////////////////////////////////
// CSeriesMarksPositions properties

/////////////////////////////////////////////////////////////////////////////
// CSeriesMarksPositions operations

CSeriesMarkPosition CSeriesMarksPositions::GetPosition(long Index)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, parms,
		Index);
	return CSeriesMarkPosition(pDispatch);
}

void CSeriesMarksPositions::Automatic(long Index)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index);
}
