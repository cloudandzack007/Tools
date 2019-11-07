// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "seriestextsource.h"

// Dispatch interfaces referenced by this interface
#include "seriestextfields.h"
#include "seriestextfield.h"

/////////////////////////////////////////////////////////////////////////////
// CSeriesTextSource

IMPLEMENT_DYNCREATE(CSeriesTextSource, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CSeriesTextSource properties

/////////////////////////////////////////////////////////////////////////////
// CSeriesTextSource operations

void CSeriesTextSource::SetChart(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void CSeriesTextSource::SetChartLink(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void CSeriesTextSource::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CSeriesTextSource::Close()
{
	InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CSeriesTextSource::Load()
{
	InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CSeriesTextSource::LoadAsStream(const VARIANT& AStream)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &AStream);
}

void CSeriesTextSource::LoadFromFile(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

void CSeriesTextSource::LoadFromURL(LPCTSTR URL)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 URL);
}

void CSeriesTextSource::Open()
{
	InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL CSeriesTextSource::GetActive()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CSeriesTextSource::SetActive(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CSeriesTextSource::GetHeaderLines()
{
	long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSeriesTextSource::SetHeaderLines(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CSeriesTextFields CSeriesTextSource::GetFields()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSeriesTextFields(pDispatch);
}

CString CSeriesTextSource::GetFieldSeparator()
{
	CString result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CSeriesTextSource::SetFieldSeparator(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CSeriesTextSource::GetFileName()
{
	CString result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CSeriesTextSource::SetFileName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

VARIANT CSeriesTextSource::GetSeries()
{
	VARIANT result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void CSeriesTextSource::SetSeries(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

CSeriesTextField CSeriesTextSource::AddField(LPCTSTR AName, long AIndex)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		AName, AIndex);
	return CSeriesTextField(pDispatch);
}
