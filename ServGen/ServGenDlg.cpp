// ServGenDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "ServGen.h"
#include "ServGenDlg.h"
#include "ReadmeDlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CServGenDlg 对话框


CServGenDlg::CServGenDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CServGenDlg::IDD, pParent)

{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CServGenDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_TAB1, m_Tab);
}

BEGIN_MESSAGE_MAP(CServGenDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP

	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &CServGenDlg::OnTcnSelchangeTab1)
END_MESSAGE_MAP()


// CServGenDlg 消息处理程序

BOOL CServGenDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	m_strTitle=_T("X-GEN ");
	
	m_strTitle.Append(TEXT("2013.07.19"));
	
	this->SetWindowText(m_strTitle);

	//为Tab Control增加两个页面
	m_Tab.InsertItem(0,TEXT("生成"));
	m_Tab.InsertItem(1,TEXT("N/A"));
	m_Tab.InsertItem(2,TEXT("N/A"));

	//创建两个对话框
	m_page1.Create(IDD_DIALOG1,&m_Tab);
	//m_page2.Create(IDD_DIALOG2,&m_Tab);
	//m_page3.Create(IDD_DIALOG3,&m_Tab);

	m_page1.m_pMainDlg=this;

	//设定在Tab内显示的范围
	CRect rc;
	m_Tab.GetClientRect(rc);
	rc.top+=20;
	rc.bottom-=0;
	rc.left+=0;
	rc.right-=0;
	m_page1.MoveWindow(&rc);
	//m_page2.MoveWindow(&rc);
	//m_page3.MoveWindow(&rc);

	//把对话框对象指针保存起来
	pDialog[0]=&m_page1;
	//pDialog[1]=&m_page2;
	//pDialog[2]=&m_page3;

	//显示初始页面
	pDialog[0]->ShowWindow(SW_SHOW);
	//pDialog[1]->ShowWindow(SW_HIDE);
	//pDialog[2]->ShowWindow(SW_HIDE);

	//保存当前选择
	m_CurSelTab = 0;
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CServGenDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CServGenDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CServGenDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}





void CServGenDlg::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO:

	/*
	//把当前的页面隐藏起来
	pDialog[m_CurSelTab]->ShowWindow(SW_HIDE);

	//得到新的页面索引

	m_CurSelTab = m_Tab.GetCurSel();

	//把新的页面显示出来

	pDialog[m_CurSelTab]->ShowWindow(SW_SHOW);
	*pResult = 0;
	*/
}
