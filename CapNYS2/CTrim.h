#pragma once


// CTrim ダイアログ

class CTrim : public CDialogEx
{
	DECLARE_DYNAMIC(CTrim)

public:
	CTrim(CWnd* pParent = nullptr);   // 標準コンストラクター
	virtual ~CTrim();

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TRIM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート

	DECLARE_MESSAGE_MAP()
public:
//	bool m_deletef;
//	int detef;
//	int deletef;
//	int deletef;
//	int deleteF;
//	int ggg;
	CButton m_delf;
//	bool m_delf;
	bool checkON;
	virtual BOOL OnInitDialog();
	virtual void OnOK();

//	char trimfn2[301];
//	char trimfn1[301];
//	int posa;
//	int posb;
	int m_posa;
	int m_posb;
	char m_trimfn1[301];
//	int m_trimfn2[301];
	char m_trimfn2[301];
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	CString m_resttime;
	afx_msg void OnBnClickedDeletef();
	virtual void OnCancel();
	int m_newid;
};
