// CDlgClss.cpp: 구현 파일
//

#include "pch.h"
#include "gProject.h"
#include "afxdialogex.h"
#include "CDlgClss.h"


// CDlgClss 대화 상자

IMPLEMENT_DYNAMIC(CDlgClss, CDialogEx)

CDlgClss::CDlgClss(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DlgClss, pParent)
{

}

CDlgClss::~CDlgClss()
{
}

void CDlgClss::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgClss, CDialogEx)
END_MESSAGE_MAP()


// CDlgClss 메시지 처리기
