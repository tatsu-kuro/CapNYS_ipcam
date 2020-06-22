
// CapNYS2Dlg.h : �w�b�_�[ �t�@�C��
//x86����x64�ւ̈ڍs�́A���̈�s�̃R�����g�A�E�g��CapNYS2.rc�̃o�[�W�������Ȃǂ𒼐ڏ���������
//#define x86CapNYS

#pragma once
#include "afxwin.h"
#include "afxcmn.h"
//#define CONF_FN "CapNYS2config.ini"
//#define LIST_FN "CapNYS2list.txt"


// CCapNYS2Dlg �_�C�A���O
class CCapNYS2Dlg : public CDialogEx
{
// �R���X�g���N�V����
public:
	CCapNYS2Dlg(CWnd* pParent = NULL);	// �W���R���X�g���N�^�[

// �_�C�A���O �f�[�^
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CAPNYS2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �T�|�[�g

// ����
protected:
	HICON m_hIcon;
//	CToolTipCtrl m_tooltip;
	// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CFont m_font;
	int IDnum;
	int IDnumold;
	int currentframe;
	int capturetime;
	int maxframenum;

	int trimposa, trimposb, sankakuzure;
//	int trimingposa, trimingposb;

	bool m_PlayloopEnable;
	bool m_CaploopEnable;
	bool m_PrevloopEnable;
	int CapNYSmode;
	char lastrecfn[301];
	char playingfn[301];
	char trimingfn[301];
	char trimsrcfn[301];
	char listaviselected[301];
	bool moviepausef;
	int SetFrame;
	CBitmap bmp_button_trim;
	CBitmap bmp_button_play;
	CBitmap bmp_button_start;
	CBitmap bmp_button_stop;
	CBitmap bmp_button_exit;
	CBitmap bmp_button_head;
	CBitmap bmp_button_curplay;
	CBitmap bmp_button_newid;
	CBitmap bmp_button_record;
	CBitmap bmp_ref;
	CBitmap bmp_button_alllist;
	CBitmap bmp_button_resetrec;
	CBitmap bmp_button_gomi;
	CBitmap bmp_button_memo;
	CBitmap bmp_button_save;
	CBitmap bmp_button_backup;
	CBitmap bmp_button_backupfolder;
	CBitmap bmp_button_changeid;
	CBitmap bmp_button_menu;
	int m_iSubItem;//sort
	int KillRecordCnt;
	int KillPlayCnt;
	int KillPreviewCnt;

	static UINT CaptureThread(LPVOID pParam);
	void CaptureThread(void);
	CWinThread* m_pCaptureThread;

	static UINT PlayThread(LPVOID pParam);
	void PlayThread(void);
	CWinThread* m_pPlayThread;
	void Preview();
	static UINT PreviewThread(LPVOID pParam);
	void PreviewThread(void);
	CWinThread* m_pPreviewThread;
	void DispOneFrame(char* fn, int fnumber);
	void DispIP();
	CButton m_curplay;
	CStatic m_currentid;
	CButton m_cutmovie;

	CStatic m_moviept;
	CButton m_resethead;
	CButton m_resetrec;

//	CButton m_startcap;
	CButton m_stopcap;

	CButton m_cancel;
	CButton m_ok;
	CButton m_list;
	CListCtrl m_listavi;
	CListCtrl m_listcurrent;
	CListCtrl m_listref;

	int setNGpos(CPoint pos);
	void SetCtrlPos(int x, int y);
	void SetButtons(int mode);
	int SetLists();
	int NewLists();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	void SaveList();
//	void LoadMemo();
	void DispNum_sub(CStatic* wi, int id);
	afx_msg void OnBnClickedStopcap();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	void DispSlider(int f=1);
	void DispTimeTrim(void);
	CStatic m_timetrim;
	void Dispfname(char *fn);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	void OnBnClickedPlaymovie();
	void DispOneNum(CStatic *ms, int num, int src);

	afx_msg void OnBnClickedResetrec();
	afx_msg void OnBnClickedResethead();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnSize(UINT nType, int cx, int cy);

	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedList();
	afx_msg void OnColumnclickListavi(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnItemchangingListavi(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnDblclkListavi(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnRclickListavi(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnItemchangingListcurrent(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnRclickListcurrent(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnDblclkListcurrent(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnItemchangingListref(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnRclickListref(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnDblclkListref(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedCurplay();
	afx_msg void OnBnClickedCutmovie();
	void SetTrimName(char* tfn, char* pfn, int n);

	afx_msg void OnPopupChangeid2();
	afx_msg void OnPopupChangeid3();
	afx_msg void OnPopupCopy();
	afx_msg void OnPopupCopy2();
	afx_msg void OnPopupCopy3();
	afx_msg void OnPopupDelete();
	afx_msg void OnPopupDelete2();
	afx_msg void OnPopupDelete3();
	afx_msg void OnPopupEditmemo();
	afx_msg void OnPopupEditmemo2();
	afx_msg void OnPopupEditmemo3();

	CButton m_record;
	afx_msg void OnClickedRecord();

	static int CALLBACK MyCompareProc1(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort);
	static int CALLBACK MyCompareProc2(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort);
	static int CALLBACK MyCompareProcInt1(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort);
	static int CALLBACK MyCompareProcInt2(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort);

	CStatic m_totalnum;

	void DispIroiro(CStatic* cs, int x0, int y0, int x, int y, int dx,int dy,int mode,int src);

	CStatic m_nextcom;
	void DispNum3(CStatic* id, int x0, int y0, int com);
	void OnStnClickedArrowore();
	afx_msg void OnStnClickedNextcom();

	int m_down_x;
	int m_move_x;
#ifdef _DEBUG
	float SenD4[5001][4];
	void Save_sen4();
	int sen4cnt = 0;
#endif

	afx_msg void OnBkup();
	afx_msg void OnSetbkf();

	afx_msg void OnClickedErasebut();
	CButton m_erasebut;
	afx_msg void OnPopupChanid9();
	CButton m_memo;
	CButton m_chanid;
	CButton m_setid;
	afx_msg void OnClickedMemo();
	afx_msg void OnClickedChanid();
	afx_msg void OnClickedSetid();
	CButton m_save;
	CButton m_backup;
	CButton m_backupfolder;
	afx_msg void OnClickedSave();
	afx_msg void OnClickedBackup();
	afx_msg void OnClickedBackupfolder();
	CButton m_menu;
	afx_msg void OnClickedMenu();

//	afx_msg void OnPopupDeinter();

	afx_msg void OnPopupHelp();
//	afx_msg void OnPopupDeinteroff();

	afx_msg void OnPopupGyroon();
	afx_msg void OnPopupGyrooff();
	afx_msg void OnPopupDirection1();
	afx_msg void OnPopupDirection2();
	afx_msg void OnPopupDirection3();
	afx_msg void OnPopupDirection4();
	afx_msg void OnPopupDirection5();
	afx_msg void OnPopupDirection6();
	afx_msg void OnPopupDirection7();
	afx_msg void OnPopupDirection8();
	afx_msg void OnPopupCamera1();
	afx_msg void OnPopupCamera2();
	afx_msg void OnPopupCamera3();
	afx_msg void OnPopupCamera4();
	afx_msg void OnPopupCamera5();
	afx_msg void OnSetsavef();
	afx_msg void OnTouroku();
	afx_msg void OnGyrosmart();
	afx_msg void OnIpcamera();
//	afx_msg void OnCameraip();
	afx_msg void OnPopupCameraip();
};
