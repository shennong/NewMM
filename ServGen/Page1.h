#pragma once
#include "ReadmeDlg.h"
#include "afxwin.h"
// CPage1 对话框

class CServGenDlg;

class CPage1 : public CDialog
{
	DECLARE_DYNAMIC(CPage1)

public:
	CPage1(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CPage1();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	CString m_strDNS;
	CString m_strPort;
	CServGenDlg* m_pMainDlg;
	afx_msg void OnBnClickedButtonGen();
	afx_msg void OnBnClickedButtonReadme();
	afx_msg void OnBnClickedButtonVerinfo();
	CButton m_CheckCmd;

	afx_msg void OnBnClickedRadioDirect();
	afx_msg void OnBnClickedRadioPreconfig();
	afx_msg void OnBnClickedRadioProxy();
	CString m_strProxyName;
	CString m_strProxyUsername;
	CString m_strProxyPassword;
	afx_msg void OnBnClickedButtonGenB();
	afx_msg void OnBnClickedButtonVerinfoB();
	afx_msg void OnBnClickedButtonReadmeB();
	afx_msg void OnBnClickedButtonGenC();
	afx_msg void OnBnClickedButtonVerinfoC();
	afx_msg void OnBnClickedButtonReadmeC();
};
