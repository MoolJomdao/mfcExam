#pragma once
#include "afxdialogex.h"


// CDlgClss 대화 상자

class CDlgClss : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgClss)

public:
	CDlgClss(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDlgClss();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DlgClss };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
