#pragma once
#include "afxwin.h"


// CReadmeDlg �Ի���
enum
{
	SHOW_UPDATE,
	SHOW_VERINFO,

	SHOW_UPDATEB,
	SHOW_VERINFOB,

	SHOW_UPDATEC,
	SHOW_VERINFOC,

};

class CReadmeDlg : public CDialog
{
	DECLARE_DYNAMIC(CReadmeDlg)

public:
	CReadmeDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CReadmeDlg();

// �Ի�������
	enum { IDD = IDD_DIALOG_README };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog(void);
	DECLARE_MESSAGE_MAP()
public:
	
	CString m_strReadMe;
	CEdit m_editReadMe;
	DWORD dwFlag;
};
