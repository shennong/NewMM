#pragma once


// CPage2 �Ի���

class CPage2 : public CDialog
{
	DECLARE_DYNAMIC(CPage2)

public:
	CPage2(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPage2();

// �Ի�������
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString m_strDNS;
	CString m_strPort;
	afx_msg void OnBnClickedButtonGen();
	afx_msg void OnBnClickedButtonVerinfo();
	afx_msg void OnBnClickedButtonDllupdate();
};
