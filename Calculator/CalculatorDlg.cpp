
// CalculatorDlg.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "Calculator.h"
#include "CalculatorDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CCalculatorDlg 대화 상자



CCalculatorDlg::CCalculatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATOR_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, tot_edit);
}

BEGIN_MESSAGE_MAP(CCalculatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CCalculatorDlg::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT1, &CCalculatorDlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON2, &CCalculatorDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CCalculatorDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CCalculatorDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CCalculatorDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CCalculatorDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CCalculatorDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CCalculatorDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CCalculatorDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CCalculatorDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON12, &CCalculatorDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTONp, &CCalculatorDlg::OnBnClickedButtonp)
	ON_BN_CLICKED(IDC_BUTTONm, &CCalculatorDlg::OnBnClickedButtonm)
	ON_BN_CLICKED(IDC_BUTTONmu, &CCalculatorDlg::OnBnClickedButtonmu)
	ON_BN_CLICKED(IDC_BUTTONd, &CCalculatorDlg::OnBnClickedButtond)
	ON_BN_CLICKED(IDC_BUTTONc, &CCalculatorDlg::OnBnClickedButtonc)
	ON_BN_CLICKED(IDC_BUTTON11, &CCalculatorDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON13, &CCalculatorDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTONre, &CCalculatorDlg::OnBnClickedButtonre)
	ON_BN_CLICKED(IDC_BUTTONce, &CCalculatorDlg::OnBnClickedButtonce)
	ON_BN_CLICKED(IDC_BUTTONpe, &CCalculatorDlg::OnBnClickedButtonpe)
	ON_BN_CLICKED(IDC_BUTTONexp, &CCalculatorDlg::OnBnClickedButtonexp)
	ON_BN_CLICKED(IDC_BUTTONrec, &CCalculatorDlg::OnBnClickedButtonrec)
	ON_BN_CLICKED(IDC_BUTTONroot, &CCalculatorDlg::OnBnClickedButtonroot)
END_MESSAGE_MAP()


// CCalculatorDlg 메시지 처리기

BOOL CCalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CCalculatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 애플리케이션의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CCalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CCalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

double total = 0;
CString csnum;
char op = 'n';
int count = 0;
int sign = 0;

void CCalculatorDlg::OnBnClickedButton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	CString snum;
	tot_edit.GetWindowTextW(snum);
	snum += "0";
	tot_edit.SetWindowTextW(snum);
	csnum += '0';
}


void CCalculatorDlg::OnEnChangeEdit1()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CCalculatorDlg::OnBnClickedButton2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString snum;
	tot_edit.GetWindowTextW(snum);
	snum += "1";
	tot_edit.SetWindowTextW(snum);
	csnum += '1';
}



void CCalculatorDlg::OnBnClickedButton3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString snum;
	tot_edit.GetWindowTextW(snum);
	snum += "2";
	tot_edit.SetWindowTextW(snum);
	csnum += '2';
}

void CCalculatorDlg::OnBnClickedButton4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString snum;
	tot_edit.GetWindowTextW(snum);
	snum += "3";
	tot_edit.SetWindowTextW(snum);
	csnum += '3';
}


void CCalculatorDlg::OnBnClickedButton5()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString snum;
	tot_edit.GetWindowTextW(snum);
	snum += "4";
	tot_edit.SetWindowTextW(snum);
	csnum += '4';
}


void CCalculatorDlg::OnBnClickedButton6()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString snum;
	tot_edit.GetWindowTextW(snum);
	snum += "5";
	tot_edit.SetWindowTextW(snum);
	csnum += '5';
}


void CCalculatorDlg::OnBnClickedButton7()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString snum;
	tot_edit.GetWindowTextW(snum);
	snum += "6";
	tot_edit.SetWindowTextW(snum);
	csnum += '6';
}


void CCalculatorDlg::OnBnClickedButton8()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString snum;
	tot_edit.GetWindowTextW(snum);
	snum += "7";
	tot_edit.SetWindowTextW(snum);
	csnum += '7';
}


void CCalculatorDlg::OnBnClickedButton9()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString snum;
	tot_edit.GetWindowTextW(snum);
	snum += "8";
	tot_edit.SetWindowTextW(snum);
	csnum += '8';
}


void CCalculatorDlg::OnBnClickedButton10()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString snum;
	tot_edit.GetWindowTextW(snum);
	snum += "9";
	tot_edit.SetWindowTextW(snum);
	csnum += '9';
}

void CCalculatorDlg::OnBnClickedButton12()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	CString snum;
	tot_edit.GetWindowTextW(snum);
	double edit_num = _wtof(snum);

	if (op == '+') {

		total += edit_num;
	}
	else if (op == '-') {
		total -= edit_num;
	}
	else if (op == '*') {
		total *= edit_num;
	}
	else if (op == '/') {
		total /= edit_num;
	}
	else {
		total = 0;
	}


	snum.Format(_T("%f"), total);
	tot_edit.SetWindowTextW(snum);
	count = 0;
	csnum = "";
}

void CCalculatorDlg::OnBnClickedButtonp()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	double num = _wtof(csnum);

	if (count == 0) total += num;
	else {
		OnBnClickedButton12();
	}

	tot_edit.SetWindowTextW(TEXT(""));

	op = '+';
	csnum = "";
	count++;
}

void CCalculatorDlg::OnBnClickedButtonm()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	double num = _wtof(csnum);

	if (count == 0) total += num;
	else {
		OnBnClickedButton12();
	}

	tot_edit.SetWindowTextW(TEXT(""));

	op = '-';
	csnum = "";
	count++;
}


void CCalculatorDlg::OnBnClickedButtonmu()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	double num = _wtof(csnum);

	if (count == 0) total += num;
	else {
		OnBnClickedButton12();
	}

	tot_edit.SetWindowTextW(TEXT(""));

	op = '*';
	csnum = "";
	count++;
}


void CCalculatorDlg::OnBnClickedButtond()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	double num = _wtof(csnum);

	if (count == 0) total += num;
	else {
		OnBnClickedButton12();
	}

	tot_edit.SetWindowTextW(TEXT(""));

	op = '/';
	csnum = "";
	count++;
}


void CCalculatorDlg::OnBnClickedButtonc()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	total = 0;
	csnum = _T("");
	op = 'n';
	tot_edit.SetWindowTextW(TEXT(""));
}

void CCalculatorDlg::OnBnClickedButton11()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString num;
	tot_edit.GetWindowTextW(num);

	if (sign == 0) {
		double edit_num = (_wtof(num));

		tot_edit.SetWindowTextW(TEXT("-") + num);

		//csnum += '-' + num;
		total -= edit_num;
		sign = 1;
	}
	else {
		double edit_num = (_wtof(num));
		num.Delete(csnum.GetLength() - 3, 1);
		tot_edit.SetWindowTextW(num);

		//csnum.Delete(csnum.GetLength() - 1, 1);

		//csnum += num;
		//tot_edit.SetWindowTextW(csnum);
		total += edit_num * 2;

		sign = 0;
	}
}


void CCalculatorDlg::OnBnClickedButton13()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString num;
	tot_edit.GetWindowTextW(num);

	tot_edit.SetWindowTextW(num + TEXT("."));

	csnum += '.';
}

void CCalculatorDlg::OnBnClickedButtonre()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	csnum.Delete(csnum.GetLength() - 1, 1);

	tot_edit.SetWindowTextW(csnum);

}


void CCalculatorDlg::OnBnClickedButtonce()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	csnum = _T("");
	tot_edit.SetWindowTextW(TEXT(""));
}


void CCalculatorDlg::OnBnClickedButtonpe()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString cs;
	tot_edit.GetWindowTextW(cs);

	double num = _wtof(cs);
	num = num * 0.01;


	cs.Format(_T("%f"), num);
	tot_edit.SetWindowTextW(cs);

}


void CCalculatorDlg::OnBnClickedButtonexp()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString cs;
	tot_edit.GetWindowTextW(cs);

	int len = cs.GetLength();

	double num = _wtof(cs);
	num = num * num;

	cs.Format(_T("%f"), num);
	tot_edit.SetWindowTextW(cs);

	csnum.Delete(csnum.GetLength() - 1, len);
	csnum += cs;
}


void CCalculatorDlg::OnBnClickedButtonrec()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString cs;
	tot_edit.GetWindowTextW(cs);

	int len = cs.GetLength();

	double num = _wtof(cs);
	num = 1 / num;

	cs.Format(_T("%f"), num);
	tot_edit.SetWindowTextW(cs);

	csnum.Delete(csnum.GetLength() - 1, len);
	csnum += cs;
}


void CCalculatorDlg::OnBnClickedButtonroot()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString cs;
	tot_edit.GetWindowTextW(cs);

	int len = cs.GetLength();

	double num = _wtof(cs);
	num = sqrt(num);

	cs.Format(_T("%f"), num);
	tot_edit.SetWindowTextW(cs);

	csnum.Delete(csnum.GetLength() - 1, len);
	csnum += cs;
}