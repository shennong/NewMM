// ServGenDlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"
#include "Page1.h"
//#include "Page2.h"
//#include "Page3.h"


// CServGenDlg �Ի���
class CServGenDlg : public CDialog
{
// ����
public:
	CServGenDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_SERVGEN_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonGen();
	afx_msg void OnBnClickedButtonReadme();
	afx_msg void OnBnClickedButtonVerinfo();
	
	
	
	CString m_strTitle;	//����


	
	CPage1 m_page1;
	//CPage2 m_page2;
	//CPage3 m_page3;
	CDialog* pDialog[3];

	CTabCtrl m_Tab;
	int m_CurSelTab;
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
