// AZDLL.h : main header file for the FRDLL DLL
//

#if !defined(AFX_FRDLL_H__14A81EB8_7FF3_4DE0_AD4B_AA3F55CF62B0__INCLUDED_)
#define AFX_FRDLL_H__14A81EB8_7FF3_4DE0_AD4B_AA3F55CF62B0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CFRDLLApp
// See FRDLL.cpp for the implementation of this class
//

#define FEALEN 7096

class CFRDLLApp : public CWinApp
{
public:
	CFRDLLApp();
    ~CFRDLLApp();
	//char *FRGetCode();
//	long FRCreateTemplate(const char* pcImageFile, const char* pcTemplateFile);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFRDLLApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CFRDLLApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FRDLL_H__14A81EB8_7FF3_4DE0_AD4B_AA3F55CF62B0__INCLUDED_)
