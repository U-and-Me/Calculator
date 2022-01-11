
// CalculatorDlg.h: 헤더 파일
//

#pragma once


// CCalculatorDlg 대화 상자
class CCalculatorDlg : public CDialogEx
{
// 생성입니다.
public:
	CCalculatorDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCULATOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButtonp();
	afx_msg void OnBnClickedButtonm();
	afx_msg void OnBnClickedButtonmu();
	afx_msg void OnBnClickedButtond();
	afx_msg void OnBnClickedButtonc();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButtonc2();
	afx_msg void OnBnClickedButtonre();
	afx_msg void OnBnClickedButtonce();
	afx_msg void OnBnClickedButtonpe();
	afx_msg void OnBnClickedButtonexp();
	afx_msg void OnBnClickedButtonrec();
	afx_msg void OnBnClickedButtonroot();
	CEdit tot_edit;
};
