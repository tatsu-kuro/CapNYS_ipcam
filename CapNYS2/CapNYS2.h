
// CapNYS2.h : PROJECT_NAME �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C���ł��B
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH �ɑ΂��Ă��̃t�@�C�����C���N���[�h����O�� 'stdafx.h' ���C���N���[�h���Ă�������"
#endif

#include "resource.h"		// ���C�� �V���{��
#define Vertxt "CapNYS2(IPcamera) Version4.5 - 2019/12/25"
#define English false
//git init
//.gitignore��.gitattribue���R�s�[
//git add .
//git remote add origin https ://github.com/tatsu-kuro/CapNYS_ipcam.git
//Visual Studio���I�����āA�ċN�������git�Agithub���L���ɂȂ��Ă���B
//����������ƍċN����git init�̒���ɍs���ƁA.gitignore�Ȃǂ̃R�s�[�͕K�v�Ȃ��̂�������Ȃ��B
// CCapNYS2App:
// ���̃N���X�̎����ɂ��ẮACapNYS2.cpp ���Q�Ƃ��Ă��������B
//

class CCapNYS2App : public CWinApp
{
public:
	CCapNYS2App();

// �I�[�o�[���C�h
public:
	virtual BOOL InitInstance();

// ����

	DECLARE_MESSAGE_MAP()
};

extern CCapNYS2App theApp;
