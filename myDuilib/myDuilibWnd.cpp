#include "stdafx.h"
#include "myDuilibWnd.h"
#include "ControlEx.h"
#include "resource.h"


DUI_BEGIN_MESSAGE_MAP(CMyDuilibWnd, CNotifyPump)
DUI_ON_MSGTYPE(DUI_MSGTYPE_CLICK, OnClick)
DUI_END_MESSAGE_MAP()

CMyDuilibWnd::CMyDuilibWnd()
{

}

CMyDuilibWnd::~CMyDuilibWnd()
{

}


DuiLib::CDuiString CMyDuilibWnd::GetSkinFolder()
{
	return _T("skin\\myDuilibWnd\\");
}

DuiLib::CDuiString CMyDuilibWnd::GetSkinFile()
{
	return _T("myDuilibWnd.xml");
}



LPCTSTR CMyDuilibWnd::GetWindowClassName(void) const
{
	return _T("CMyDuilibWnd");
}

void CMyDuilibWnd::Notify(TNotifyUI& msg)
{
	__super::Notify(msg);
}

LRESULT CMyDuilibWnd::HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	return DuiLib::WindowImplBase::HandleMessage(uMsg, wParam, lParam);
}


LRESULT CMyDuilibWnd::OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
{
	::PostQuitMessage(1L);
	return __super::OnClose(uMsg, wParam, lParam, bHandled);
}

void CMyDuilibWnd::InitWindow()
{
	__super::InitWindow();
	HICON hIcon1 = LoadIcon(DuiLib::CPaintManagerUI::GetInstance(), MAKEINTRESOURCE(IDI_SMALL));
	HICON hIcon2 = LoadIcon(DuiLib::CPaintManagerUI::GetInstance(), MAKEINTRESOURCE(IDI_BIG));
	::SendMessage((HWND)GetHWND(), WM_SETICON, ICON_BIG, (LPARAM)hIcon2);
	::SendMessage((HWND)GetHWND(), WM_SETICON, ICON_SMALL, (LPARAM)hIcon1);
	CLabelUI *pTitleText = static_cast<CLabelUI *>(m_PaintManager.FindControl(_T("titleText")));
	if (pTitleText != NULL)
	{
		pTitleText->SetText(_T("∑¢∆±÷˙ ÷"));
	}

	CLabelUI *pTextName = static_cast<CLabelUI *>(m_PaintManager.FindControl(_T("TextName")));
	if (pTextName != NULL)
	{
		pTextName->SetFont(0);
	}
}

// LRESULT CMyDuilibWnd::HandleCustomMessage(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
// {
// 	return 0;
// }

void CMyDuilibWnd::OnClick(DuiLib::TNotifyUI& msg)
{
	__super::OnClick(msg);
}

