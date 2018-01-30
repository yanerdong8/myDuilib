#include "StdAfx.h"
#include "myDuilibWnd.h"

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE /*hPrevInstance*/, LPSTR /*lpCmdLine*/, int nCmdShow)
{
	CPaintManagerUI::SetInstance(hInstance);
#ifdef _DEBUG
	CPaintManagerUI::SetResourcePath(CPaintManagerUI::GetInstancePath() + _T("..\\Release\\skin"));
#else
	CPaintManagerUI::SetResourcePath(CPaintManagerUI::GetInstancePath() + _T("skin"));
#endif

	HRESULT Hr = ::CoInitialize(NULL);
	if (FAILED(Hr)) return 0;

	CMyDuilibWnd* pFrame = new CMyDuilibWnd();
	if (pFrame == NULL) return 0;
	pFrame->Create(NULL, _T("myDuilib"), UI_WNDSTYLE_FRAME, 0L, 0, 0, 800, 572);
	pFrame->CenterWindow();
	::ShowWindow(*pFrame, SW_SHOW);

	CPaintManagerUI::MessageLoop();

	::CoUninitialize();
	return 0;
}