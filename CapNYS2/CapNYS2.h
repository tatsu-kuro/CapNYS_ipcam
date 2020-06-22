
// CapNYS2.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです。
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル
#define Vertxt "CapNYS2(IPcamera) Version4.5 - 2019/12/25"
#define English false
//git init
//.gitignoreと.gitattribueをコピー
//git add .
//git remote add origin https ://github.com/tatsu-kuro/CapNYS_ipcam.git
//Visual Studioを終了して、再起動するとgit、githubが有効になっている。
//もしかすると再起動をgit initの直後に行うと、.gitignoreなどのコピーは必要ないのかもしれない。
// CCapNYS2App:
// このクラスの実装については、CapNYS2.cpp を参照してください。
//

class CCapNYS2App : public CWinApp
{
public:
	CCapNYS2App();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CCapNYS2App theApp;
