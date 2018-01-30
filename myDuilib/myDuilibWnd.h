#ifndef __MYDUILIB_WND_HEAD__
#define __MYDUILIB_WND_HEAD__


class CMyDuilibWnd : public WindowImplBase
{
public:
	CMyDuilibWnd();
	~CMyDuilibWnd();

	virtual CDuiString GetSkinFolder();
	virtual CDuiString GetSkinFile();
	virtual LPCTSTR GetWindowClassName(void) const;
	virtual LRESULT OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	virtual void InitWindow();
	virtual LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);
//	virtual LRESULT HandleCustomMessage(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	virtual void OnClick(DuiLib::TNotifyUI& msg);
	virtual void Notify(TNotifyUI& msg);

	DUI_DECLARE_MESSAGE_MAP();

};




#endif