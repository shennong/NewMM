#pragma once


// CPage3 �Ի���

class CPage3 : public CDialog
{
	DECLARE_DYNAMIC(CPage3)

public:
	CPage3(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPage3();

// �Ի�������
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	CString m_strDNS;
	CString m_strPort;
	afx_msg void OnBnClickedButtonGen();
	afx_msg void OnBnClickedButtonUpdate();
	afx_msg void OnBnClickedButtonVerinfo();

	afx_msg void OnBnClickedRadioDirect();
	afx_msg void OnBnClickedRadioPreconfig();
	afx_msg void OnBnClickedRadioProxy();
	CString m_strProxyName;
	CString m_strProxyUsername;
	CString m_strProxyPassword;
	afx_msg void OnBnClickedButtonSvcUpdate();
};
