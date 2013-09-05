// ServGenDlg.h : 头文件
//

#pragma once
#include "afxcmn.h"
#include "Page1.h"
//#include "Page2.h"
//#include "Page3.h"


// CServGenDlg 对话框
class CServGenDlg : public CDialog
{
// 构造
public:
	CServGenDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_SERVGEN_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonGen();
	afx_msg void OnBnClickedButtonReadme();
	afx_msg void OnBnClickedButtonVerinfo();
	
	
	
	CString m_strTitle;	//标题


	
	CPage1 m_page1;
	//CPage2 m_page2;
	//CPage3 m_page3;
	CDialog* pDialog[3];

	CTabCtrl m_Tab;
	int m_CurSelTab;
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
