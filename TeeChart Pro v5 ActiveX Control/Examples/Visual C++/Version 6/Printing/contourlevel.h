#if !defined(AFX_CONTOURLEVEL_H__9E0933FE_6278_4D3E_B13F_EA26852FED7D__INCLUDED_)
#define AFX_CONTOURLEVEL_H__9E0933FE_6278_4D3E_B13F_EA26852FED7D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CContourLevel wrapper class

class CContourLevel : public COleDispatchDriver
{
public:
	CContourLevel() {}		// Calls COleDispatchDriver default constructor
	CContourLevel(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CContourLevel(const CContourLevel& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
	double GetUpToValue();
	void SetUpToValue(double newValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTOURLEVEL_H__9E0933FE_6278_4D3E_B13F_EA26852FED7D__INCLUDED_)