#pragma once

#define INTE 0
//#define DSIZ 1
//#define DAUT 1
#define CSIZ 1
#define FPSN 2
#define NEWD 3//getnewid dialog
#define COMP 4
#define SENM 5
#define SXYZ 6
#define CAME 7
#define SISE 8
//#define FACE 11
#define WRID 9
#define WRCA 10
#define HIST 11
#define FONT 12
#define COLS 13//ListAvi 5Colomn's size
#define FLSP 14
#define BKUP 15
#define SAVE 16
#define IPAD 17
#define PARA 18
#define CaptMode 0
#define PrevMode 1
#define PlayMode 2
#define ListMode 3
#define CONF_FN "CapNYS2config.ini"
#define LIST_FN "CapNYS2list.txt"
#define CV_AA 16
#include <opencv2\opencv.hpp>
#include <ws2tcpip.h>
#include <winsock2.h>
#include <iphlpapi.h>

//#include <ws2tcpip.h>

//#include <opencv2/core.hpp>    // core���W���[���̃w�b�_�[���C���N���[�h
//#include <opencv2/highgui.hpp> // highgui���W���[���̃w�b�_�[���C���N���[�h
#include <iostream>
#include <fstream>
#include "mmsystem.h"
#include <sys/stat.h> 
#pragma comment(lib,"winmm.lib")
#pragma comment(lib, "WSock32.lib")
#pragma comment(lib,"Iphlpapi.lib")
//#pragma comment(lib, "wsock32.lib")
//#pragma comment(lib, "ws2_32.lib")


using namespace cv;
//using namespace std;//�����ofstream ifstream ����`����Ă��܂���@���o�Ȃ��Ȃ�

#ifdef CapNYS2_TOP
int CSW, CSH;
int cameran = 0;
//char foundfsize[300][100];
//char foundf[300][301];
int m_dev;
int m_x_off, m_y_off;
int foundn;
//bool dispeyef=false;
bool sensor_error;
char Sxyz[10];
int Resetheadfcnt = 0;
int params[22];
int Columnwidth = 200;//reference current lists�@�̕�
int qq0, qq1, qq2, qq3;//,qqsisei;
float cq0 = 0.99F, cq1 = 0.0F, cq2 = 0.0F, cq3 = 0.0F;//space������������center quatrnion 
float nq0 = 0.01F, nq1 = 0.0F, nq2 = 0.0F, nq3 = 0.0F;//���݂�quaternion
float mnq0 = 0.01F, mnq1 = 0.0F, mnq2 = 0.0F, mnq3 = 0.0F;//�󂯓n���p��quaternion
bool ArduinoThreadf;
bool SmartThreadf;
//int sisei = 1;//0:nasi 1:gyuogai 2:zai
DWORD grayRGB;
char CurDir[301];
char ptxt[22][200];
int Gwinw, Gwinh;//�f��Window�̉��c��
int Gwinx, Gwiny;//�f��Window�̍���
int slidex, slidey, sliderf;
int slidew;
int slideh;
int Winw, Winh;//Window�̉��c��
int PicPos[20][4];
int PicPosflag;
bool Manualmode;
int CurIDcnt;
//int chanid;
char chanfn1[301], chanfn2[301];
bool origerasef;
int ldownf;

#else
extern int cameran;
extern int CSW, CSH;
extern int m_dev;
extern int m_x_off, m_y_off;
extern int foundn;
extern bool sensor_error;
extern char Sxyz[10];
extern int Resetheadfcnt;
extern int params[22];
extern int Columnwidth;
extern int qq0, qq1, qq2, qq3, qqsisei;
extern float cq0, cq1, cq2, cq3;//space������������center quatrnion 
extern float nq0, nq1, nq2, nq3;//���݂�quaternion
extern float mnq0, mnq1, mnq2, mnq3;//�󂯓n���p��quaternion
extern bool ArduinoThreadf;
extern bool SmartThreadf;
//extern int sisei;//0:nasi 1:gyuogai 2:zai
extern DWORD grayRGB;
extern char CurDir[301];
extern char ptxt[22][200];
extern int Gwinw, Gwinh;//�f��Window�̉��c��
extern int Gwinx, Gwiny;//�f��Window�̍���
extern int slidex, slidey, sliderf;
extern int slidew;//slider�̕�
extern int slideh;//slider�̏c��
extern int Winw, Winh;//Window�̉��c��
extern int PicPos[20][4];
extern int PicPosflag;
extern bool Manualmode;
extern int CurIDcnt;
//extern int chanid;
extern char chanfn1[301], chanfn2[301];
extern bool origerasef;
extern int ldownf;
#endif

bool IsFile(char *fn);
bool Checkarcom(int n);
int GetarcomsDTR_N(int n);
UINT ArduinoThread(LPVOID dammy);
UINT SmartThread(LPVOID dammy);
//void Directory(char *path, char *found[]);
void SetEN(char *s1, char *s2);
int Setfn2iddate(char *fn, char *iddate);
void Waku(CDC *pDC, int x, int y, int x1, int y1);
void Addfn2listavi(CListCtrl *list, char *fn,char* memo);
void FolderTree2lists(CString inPath, CListCtrl *list, CListCtrl *ref);
void Setlistavi2listcur(CListCtrl* all, CListCtrl* cur, int id);
void f2gomi(char *gomi);
bool checkavifn(char *fn);
void LoadCon();
void SaveCon(CListCtrl* list);
int Para0(int para);
int Para1(int para);
int checkslider(int x, int y);
int CheckPicPos(int mode, int x, int y);
void GetQuartanion(int f, float *q0, float *q1, float *q2, float *q3);
void GetSXYZ(char *sxyz, int s);
int GetSXYZn(char *sxyz);
int GetIDcnt(CListCtrl* all, int id);
void Delete1item(CListCtrl *avi, CListCtrl *cur, CListCtrl *ref, char *fn);
void MCM4304_x(int m_dev, int m_x_off, int m_y_off);
void SetlistaviSize0(CListCtrl* all);
void Set_rpk_ppk();
void SetHead(int n);

