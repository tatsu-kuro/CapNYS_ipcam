#pragma once
#include "afxwin.h"


// CSetMemo �_�C�A���O

class CSetMemo : public CDialogEx
{
	DECLARE_DYNAMIC(CSetMemo)

public:
	CSetMemo(CWnd* pParent = NULL);   // �W���R���X�g���N�^�[
	virtual ~CSetMemo();

// �_�C�A���O �f�[�^
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MEMO };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g

	DECLARE_MESSAGE_MAP()
public:
	CFont m_font;

//	CStatic m_memohead;
//	CEdit m_memotxt;
	CString m_memotxt;
	CString m_memohead;
	virtual BOOL OnInitDialog();
	CEdit m_memoctrl;
};
