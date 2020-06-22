// MCM4304.h

#pragma once

#define MCM4304_VERSION		1.23	// VERSION INFORMATION

#pragma pack( push, before_include4304 )
#pragma pack(8)

#define M25U870_DEVICE_MAX	4

#define M25U870_232DATA_MAX	100		// 送受信データ数最大値

//===================================================================
// for M25U870_SetCopyMode
//===================================================================
#define M25U870_COPYMODE_SINGLE			0
#define M25U870_COPYMODE_FRMS			1
#define M25U870_COPYMODE_ENDLESS		2

//====================================================================
// for M25U870_SetInputMode 
//====================================================================
#define M25U870_INPUTMODE_YUV422_YUY2		0
#define M25U870_INPUTMODE_YUV422_YVYU		1
#define M25U870_INPUTMODE_YUV422_UYVY		2
#define M25U870_INPUTMODE_YUV422_VYUY		3
#define M25U870_INPUTMODE_RGB565			4
#define M25U870_INPUTMODE_RGB444			5
#define M25U870_INPUTMODE_RGB332			6
#define M25U870_INPUTMODE_BAYER_RGrRGr		7
#define M25U870_INPUTMODE_BAYER_GrRGrR		8
#define M25U870_INPUTMODE_BAYER_BGbBGb		9
#define M25U870_INPUTMODE_BAYER_GbBGbB		10

//=============================================================================
// for M25U870_SetI2CFrequency
//=============================================================================
#define	M25U870_I2C_FRQ_100KHZ		0	// 100kHz
#define	M25U870_I2C_FRQ_400KHZ		1	// 400kHz

//=============================================================================
// for M25U870_SetSensorClock
//=============================================================================
#define	M25U870_CSCC_48000MHZ		0	// 48.000MHz
#define	M25U870_CSCC_40000MHZ		2	// 40.000MHz
#define	M25U870_CSCC_34286MHZ		4	// 34.286MHz
#define	M25U870_CSCC_30000MHZ		6	// 30.000MHz
#define	M25U870_CSCC_26667MHZ		8	// 26.667MHz
#define	M25U870_CSCC_24000MHZ		10	// 24.000MHz
#define	M25U870_CSCC_21818MHZ		12	// 21.818MHz
#define	M25U870_CSCC_20000MHZ		14	// 20.000MHz
#define	M25U870_CSCC_18461MHZ		16	// 18.461MHz
#define	M25U870_CSCC_17143MHZ		18	// 17.143MHz
#define	M25U870_CSCC_16000MHZ		20	// 16.000MHz
#define	M25U870_CSCC_15000MHZ		22	// 15.000MHz
#define	M25U870_CSCC_14118MHZ		24	// 14.118MHz
#define	M25U870_CSCC_13333MHZ		26	// 13.333MHz
#define	M25U870_CSCC_12632MHZ		28	// 12.632MHz
#define	M25U870_CSCC_12000MHZ		30	// 12.000MHz
#define	M25U870_CSCC_11429MHZ		32	// 11.429MHz
#define	M25U870_CSCC_10909MHZ		34	// 10.909MHz
#define	M25U870_CSCC_10435MHZ		36	// 10.435MHz
#define	M25U870_CSCC_10000MHZ		38	// 10.000MHz
#define	M25U870_CSCC_09600MHZ		40	//  9.600MHz
#define	M25U870_CSCC_09231MHZ		42	//  9.231MHz
#define	M25U870_CSCC_08889MHZ		44	//  8.889MHz
#define	M25U870_CSCC_08571MHZ		46	//  8.571MHz
#define	M25U870_CSCC_08276MHZ		48	//  8.276MHz
#define	M25U870_CSCC_08000MHZ		50	//  8.000MHz
#define	M25U870_CSCC_OFF			52	// OFF

//=============================================================================
// for M25U870_SetRegulator
//=============================================================================
// 2.Xv Coarse
#define	M25U870_REGULATOR_2X_23V	0	// 2.3v
#define	M25U870_REGULATOR_2X_24V	1	// 2.4v
#define	M25U870_REGULATOR_2X_25V	2	// 2.5v
#define	M25U870_REGULATOR_2X_26V	3	// 2.6v
#define	M25U870_REGULATOR_2X_27V	4	// 2.7v
#define	M25U870_REGULATOR_2X_28V	5	// 2.8v
#define	M25U870_REGULATOR_2X_29V	6	// 2.9v
#define	M25U870_REGULATOR_2X_30V	7	// 3.0v
#define	M25U870_REGULATOR_2X_OFF	8	// OFF

// 1.8v Coarse
#define	M25U870_REGULATOR_18_14V	0	// 1.4v
#define	M25U870_REGULATOR_18_15V	1	// 1.5v
#define	M25U870_REGULATOR_18_16V	2	// 1.6v
#define	M25U870_REGULATOR_18_17V	3	// 1.7v
#define	M25U870_REGULATOR_18_18V	4	// 1.8v
#define	M25U870_REGULATOR_18_19V	5	// 1.9v
#define	M25U870_REGULATOR_18_20V	6	// 2.0v
#define	M25U870_REGULATOR_18_OFF	7	// OFF

// Fine
#define	M25U870_REGULATOR_M75MV		0	// -75mv
#define	M25U870_REGULATOR_M50MV		1	// -50mv
#define	M25U870_REGULATOR_M25MV		2	// -25mv
#define	M25U870_REGULATOR_PM0MV		3	// 0mv
#define	M25U870_REGULATOR_P25MV		4	// +25mv
#define	M25U870_REGULATOR_P50MV		5	// +50mv
#define	M25U870_REGULATOR_P75MV		6	// +75mv

//====================================================================
// Trigger Mode UI
//====================================================================
#define M25U870_TRIGGERMODE_NOT		0	// No trigger
#define M25U870_TRIGGERMODE_SYNC	1	// Trigger( Sensor Sync )
#define M25U870_TRIGGERMODE_NOSYNC	2	// Trigger( Sensor No Sync )

//====================================================================
// IMAGE QUALITY AJUSTMENT
//====================================================================
#if 1
#define M25U870_ANALOG_GAIN_MAX		33
#define M25U870_ANALOG_GAIN_MIN		1
#define M25U870_ANALOG_GAIN_DEF		1
#define M25U870_ANALOG_GAIN_RES		1
#else
#define M25U870_ANALOG_GAIN_MAX		64
#define M25U870_ANALOG_GAIN_MIN		16
#define M25U870_ANALOG_GAIN_DEF		16
#define M25U870_ANALOG_GAIN_RES		1
#endif

#define M25U870_DIGITAL_GAIN_MIN	1
#define M25U870_DIGITAL_GAIN_DEF	4
#define M25U870_DIGITAL_GAIN_MAX	15
#define M25U870_DIGITAL_GAIN_RES	1

#define M25U870_EXPOSURE_MAX		6000	// 6000  = 600msec
#define M25U870_EXPOSURE_MIN		1		// 1     = 100 usec
#define M25U870_EXPOSURE_DEF		284		// 284   =  28.4msec
#define M25U870_EXPOSURE_RES		1

#define M25U870_AUTOGAIN_DEF		1
#define M25U870_AUTOEXPOSURE_DEF	1
#define M25U870_EXPOSURE2CTRL_DEF	0
#define M25U870_EXPOSURE2VAL_DEF	6
#define M25U870_FLIP_DEF			0
#define M25U870_MIRROR_DEF			0
#define M25U870_STROBE_ENB_DEF		0
#define M25U870_STROBE_INVERT_DEF	0

#define M25U870_SETLED_ON			1
#define M25U870_SETLED_OFF			0
#define M25U870_SETLED_DEF			0

#define M25U870_PRIVACY_DEF			0


//====================================================================
// for M25U870_GetIsoFlags
//====================================================================
typedef struct
{
	ULONG	IrpIsoStream;		// TRUE : IRP/USBのペアを、SUBMITした
	ULONG	CopyIsoStream;		// TRUE : ２次バッファへのコピーを許可
	ULONG	KillIsoStream;		// TRUE : IRP/URBの全ペアを解放する
} M25U870_ISO_FLAGS_CONTROL, *PM25U870_ISO_FLAGS_CONTROL;	// ISO_FLAGS_CONTROL

//====================================================================
// for M25U870_SetCopyMode
//====================================================================
typedef struct
{
	DWORD	dwMode;				// M25U870_COPYMODE_SINGLE	1フレーム
								// M25U870_COPYMODE_FRMS		フレーム数指定
								// M25U870_COPYMODE_ENDLESS	無限ループ
	DWORD	dwStartFrm;			// 開始フレーム
	DWORD	dwEndFrm;			// 終了フレーム
	DWORD	dwFrmNum;			// フレーム数
} M25U870_COPYMODE_CTRL, *PM25U870_COPYMODE_CTRL;

//====================================================================
// for M25U870_GetAcqCount
//====================================================================
typedef struct
{
	DWORD	dwFrmNum;			// コピー完了したフレーム数
	DWORD	dwCurSize;			// コピー完了したバイト数(現在コピー中のフレームのサイズ)
	DWORD	dwPktNum;			// コピーパケット数
} M25U870_ACQ_COUNT_STATUS, *PM25U870_ACQ_COUNT_STATUS;

//====================================================================
// for M25U870_Acquire
//====================================================================
typedef struct
{
	BOOL	bFirst;
	DWORD	dwFrm;
	DWORD	dwOverTime ;		// 入力オーバータイム msec
	DWORD	dwFrameNum;			// 画像フレーム数
	LPVOID	pImgAdress;			// 画像先頭アドレス
	DWORD	dwImgSize;			// 画像メモリ有効領域
	DWORD	dwSizePerFrm;		// １フレームサイズを指定する
	DWORD	dwLimitSize ;		// このサイズ以上有効データが来たら、転送終了とする
} TRANSFER_OPT;

//=============================================================================
// M25U870 転送設定
//=============================================================================
typedef struct 
{
	int		iMemXsize;				// 最大画像Ｘサイズ
	int		iMemYsize;				// 最大画像Ｙサイズ
	int		iMemByteCount;			// １画素のバイトサイズ
	DWORD	dwFrameNum;				// 画像フレーム数

	int		iIsoXsize;				// Iso転送終了条件のＸサイズ
	int		iIsoYsize;				// Iso転送終了条件のＹサイズ

	int		iVMakerAlign;			// Ｖﾏｰｶｰ設定( 0:なし, 1:X 1Line ﾃﾞｰﾀｻｲｽﾞ, 2:1024整列 )
	DWORD	dwVMakerSize;			// Ｖﾏｰｶｰ数( Ｖﾏｰｶｰ設定 = 任意ｻｲｽﾞ の時、有効 )

	BOOL	bVBR;					// TRUE : Vﾌﾞﾗﾝｸﾘｾｯﾄﾓｰﾄﾞ有効
	DWORD	dwVBR_FrmNum;			// Vﾌﾞﾗﾝｸﾘｾｯﾄﾓｰﾄﾞのﾌﾚｰﾑ数設定
	DWORD	dwVBR_NPckt;			// VﾌﾞﾗﾝｸﾘｾｯﾄﾓｰﾄﾞのNULLﾊﾟｹｯﾄ数設定
	BOOL	bVMakerShift;			// VMakerが先頭にあったら、4Byte画像をずらす
} TRANSFER_DETAIL;

//=============================================================================
// I2C 構造体			... M25U870_I2CRead, M25U870_I2CWriteで使用
//=============================================================================
typedef struct
{
	int		byAdr;				// I2C スレーブアドレス
	int		iLen;				// 送信するコマンドデータ数, or 読み出し要求バイト数
	BYTE	byDat[100];			// 送信するコマンド, or 読み出しデータ
} M25U870_I2C_PARA;

//=============================================================================
// 入力結果構造体			... M25U870_Acquireで指定
//=============================================================================
typedef struct 
{
	M25U870_ACQ_COUNT_STATUS	stUsbCount;	
} TRANSFER_RESULT;

//=============================================================================
// RS232C通信 構造体		... M25U870_232Read, M25U870_232Writeで使用
//=============================================================================
typedef struct
{
	DWORD	dwLen;						// 送信するデータ( or 読み出し要求 )バイト数
	DWORD	dwStatus;					// ｽﾃｰﾀｽ
	BYTE	byDat[M25U870_232DATA_MAX];	// 送信するコマンド, or 読み出しデータ
} M25U870_232_PARA;

typedef struct
{
	DWORD	dwBuadrate;					// BAUDRATE 0:2400,1:4800,2:9600,3:19200,4:28800,5:38400, 6:57600
	DWORD	dwParty;					// Party    0:none,1:even, 2:odd
	DWORD	dwBitWid;					// Width    0:8bit,1:7bit
} M25U870_232_STNG;

//=============================================================================
// CAPTURE MODE 構造体		... M25U870_SetCaptureModeで使用
//=============================================================================
typedef struct
{
	BOOL	bContinueInput;			// TRUE : CONTINUE入力, FALSE : ONESHOT 入力
	BOOL	bTrigInput;				// TRUE : トリガー入力, FALSE : トリガーなし入力
	BOOL	bSlwrScan ;				// TRUE : SLWR入力モード
	BOOL	b16BitInput;			// TRUE : 16Bit 入力

	BOOL	bPartialScan;			// TRUE : 範囲指定入力, FALSE : 範囲指定なし入力
	DWORD	dwPtScan_XOff;			// 範囲指定入力のＸオフセット
	DWORD	dwPtScan_YOff;			// 範囲指定入力のＹオフセット
	DWORD	dwPtScan_XLen;			// 範囲指定入力のＸサイズ
	DWORD	dwPtScan_YLen;			// 範囲指定入力のＹサイズ
} M25U870_CAPMODE;

//=============================================================================
// M25U870_SetExposureHDR / M25U870_SetExposureHDR 引数定義
//=============================================================================
typedef struct
{
	WORD	wHdrEnb;			// 1 : High Dynamic Range enable, 0:linear operation
	WORD	wKneeAutoAdjustEnb;	// 1 : Exposure knee point auto adjust enable
	WORD	wSignleKneeEnb;		// 1 : Single Knee Enable
	WORD	wShutterWidth1;		// bKneeAutoAdjust = 0 の時、有効( 0 ～ 0x7FFF )
	WORD	wShutterWidth2;		// bKneeAutoAdjust = 0 の時、有効( 0 ～ 0x7FFF )
	WORD	wT2Ratio;			// bKneeAutoAdjust = 1 の時、有効( 0 ～ 15 )
	WORD	wT3Ratio;			// bKneeAutoAdjust = 1 の時、有効( 0 ～ 15 )
	WORD	wVStepWriteEnb;		// 1 : V_Step 1,2,3,4 設定あり
	WORD	wV1Step;			// 0 ～ 31
	WORD	wV2Step;			// 0 ～ 31
	WORD	wV3Step;			// 0 ～ 31
	WORD	wV4Step;			// 0 ～ 31
} M25U870_EXPOSURE_HDR_SETUP;

//=============================================================================
// M25U870_SetFrameRateCtrl 引数定義
//=============================================================================
#define M25U870_FrameRateCtrl_A		0		// xsize = 640
#define M25U870_FrameRateCtrl_B		1		// xsize = 320

// xsize = 640
#define M25U870_FrameRateCtrl_A_FPS60	0
#define M25U870_FrameRateCtrl_A_FPS50	1
#define M25U870_FrameRateCtrl_A_FPS30	2
#define M25U870_FrameRateCtrl_A_FPS25	3
#define M25U870_FrameRateCtrl_A_FPS15	4
#define M25U870_FrameRateCtrl_A_DEF		3

// xsize = 320
#define M25U870_FrameRateCtrl_B_FPS60	0
#define M25U870_FrameRateCtrl_B_FPS50	1
#define M25U870_FrameRateCtrl_B_FPS30	2
#define M25U870_FrameRateCtrl_B_FPS25	3
#define M25U870_FrameRateCtrl_B_FPS15	4
#define M25U870_FrameRateCtrl_B_DEF		3

///////////////////////////////////////////////////////////////////////////////
// M25U870_SetCameraSize 引数定義
///////////////////////////////////////////////////////////////////////////////
#define M25U870_CAMERASIZE_VGA		0		//  640x480
#define M25U870_CAMERASIZE_QVGA		1		//  320x240

//=============================================================================
// M25U870 ERROR TABLE
//=============================================================================
#define M25U870_NO_ERROR					0x0000		// 正常終了
#define M25U870_INVALID_PARAM				0x0001		// ﾊﾟﾗﾒｰﾀｴﾗｰ
#define M25U870_INVALID_YSIZE				0x0002		// Yｻｲｽﾞｴﾗｰ
#define M25U870_NOT_OPEN_DEVICE				0x0003		// ﾃﾞﾊﾞｲｽｵｰﾌﾟﾝｴﾗｰ
#define M25U870_ERR_DEVICE_NO				0x0004		// ﾃﾞﾊﾞｲｽ番号が違います
#define M25U870_OVER_BUFSIZE				0x0005		// ﾌｧｲﾙｻｲｽﾞｵｰﾊﾞｰ
#define M25U870_MISS_END_RECORD				0x0006		// HEXﾌｧｲﾙﾌｫｰﾏｯﾄｴﾗｰ MISS_END
#define M25U870_MISS_HEX_FORMAT				0x0007		// HEXﾌｧｲﾙﾌｫｰﾏｯﾄｴﾗｰ
#define M25U870_ERR_DEVICEIOCTRL			0x0008		// ﾃﾞﾊﾞｲｽ通信ｴﾗｰ
#define M25U870_NO_PIPEINFO					0x0009		// ﾊﾟｲﾌﾟなし
#define M25U870_ERR_FILE_OPEN				0x000A		// ﾌｧｲﾙｵｰﾌﾟﾝｴﾗｰ
#define M25U870_ERR_FILE_CLOSE				0x0010		// ﾌｧｲﾙｸﾛｰｽﾞｴﾗｰ
#define M25U870_ERR_FILE_FORMAT				0x0011		// ﾌｧｲﾙ形式ｴﾗｰ
#define M25U870_ERR_FILE_NAME				0x0012		// ﾌｧｲﾙ名ｴﾗｰ
#define M25U870_ERR_VENDOR_REQUEST			0x0013		// ﾍﾞﾝﾀﾞｰﾘｸｴｽﾄｴﾗｰ
#define M25U870_ERR_VENDOR_CLASS_REQUEST	0x0014		// ﾍﾞﾝﾀﾞｰｸﾗｽﾘｸｴｽﾄｴﾗｰ
#define M25U870_ERR_GET_PIPE_INFO			0x0015		// ﾊﾟｲﾌﾟ情報取得ｴﾗｰ
#define M25U870_ERR_BULK_READ				0x0017		// ﾊﾞﾙｸﾘｰﾄﾞｴﾗｰ
#define M25U870_ERR_BULK_READ_OT			0x0018		// ﾊﾞﾙｸﾘｰﾄﾞｵｰﾊﾞｰﾀｲﾑ
#define M25U870_ERR_BULK_READ_CANCEL		0x0019		// ﾊﾞﾙｸﾘｰﾄﾞｷｬﾝｾﾙ
#define M25U870_ERR_BULK_WRITE				0x001A		// ﾊﾞﾙｸﾗｲﾄｴﾗｰ
#define M25U870_ERR_BULK_WRITE_OT			0x001B		// ﾊﾞﾙｸﾗｲﾄｵｰﾊﾞｰﾀｲﾑ
#define M25U870_ERR_BULK_WRITE_CANCEL		0x001C		// ﾊﾞﾙｸﾗｲﾄｷｬﾝｾﾙ
#define M25U870_ERR_ISO_READ				0x001D		// ｱｲｿｸﾛﾅｽﾘｰﾄﾞｴﾗｰ
#define M25U870_ERR_ISO_READ_OT				0x001E		// ｱｲｿｸﾛﾅｽﾘｰﾄﾞｵｰﾊﾞｰﾀｲﾑ
#define M25U870_ERR_ISO_READ_CANCEL			0x001F		// ｱｲｿｸﾛﾅｽﾘｰﾄﾞｷｬﾝｾﾙ
#define M25U870_ERR_ISO_WRITE				0x0020		// ｱｲｿｸﾛﾅｽﾗｲﾄｴﾗｰ
#define M25U870_ERR_ISO_WRITE_OT			0x0021		// ｱｲｿｸﾛﾅｽﾗｲﾄｵｰﾊﾞｰﾀｲﾑ
#define M25U870_ERR_ISO_WRITE_CANCEL		0x0022		// ｱｲｿｸﾛﾅｽﾗｲﾄｷｬﾝｾﾙ
#define M25U870_ERR_START_ISO_STREAM		0x0023		// ｱｲｿｸﾛﾅｽｽﾄﾘｰﾑｽﾀｰﾄｴﾗｰ
#define M25U870_ERR_STOP_ISO_STREAM			0x0024		// ｱｲｿｸﾛﾅｽｽﾄﾘｰﾑｽﾄｯﾌﾟｴﾗｰ
#define M25U870_ERR_KILL_ISO_STREAM			0x0025		// ｱｲｿｸﾛﾅｽｽﾄﾘｰﾑｷﾙｴﾗｰ
#define M25U870_ERR_ISO_READ_BUFFER			0x0026		// ｱｲｿｸﾛﾅｽｽﾄﾘｰﾑﾘｰﾄﾞｴﾗｰ
#define M25U870_ERR_ISO_READ_BUFFER_OT		0x0027		// ｱｲｿｸﾛﾅｽｽﾄﾘｰﾑﾘｰﾄﾞｵｰﾊﾞｰﾀｲﾑ
#define M25U870_ERR_RESET					0x0028		// ﾘｾｯﾄｴﾗｰ
#define M25U870_ERR_ABORT_PIPE				0x0029		// ｱﾎﾞｰﾄﾊﾟｲﾌﾟｴﾗｰ
#define M25U870_ERR_RESET_PIPE				0x002A		// ﾘｾｯﾄﾊﾟｲﾌﾟｴﾗｰ
#define M25U870_ERR_SETINTERFACE			0x002B		// ｾｯﾄｲﾝﾀｰﾌｪｰｽｴﾗｰ
#define M25U870_ERR_GET_LAST_ERROR			0x002C		// ﾗｽﾄｴﾗｰの取得ｴﾗｰ
#define M25U870_ERR_GET_CURRENT_FRAME_NUM	0x002D		// ｶﾚﾝﾄﾌﾚｰﾑ番号取得ｴﾗｰ
#define M25U870_ERR_GET_DEVICE_DESCRIPTOR	0x002E		// ﾃﾞﾊﾞｲｽﾃﾞｨｽｸﾘﾌﾟﾀｰ取得ｴﾗｰ
#define M25U870_ERR_GET_CONFIG_DESCRIPTOR	0x002F		// ｺﾝﾌｨｸﾞﾃﾞｨｽｸﾘﾌﾟﾀｰ取得ｴﾗｰ
#define M25U870_ERR_GET_STRING_DESCRIPTOR	0x0030		// ｽﾄﾘﾝｸﾞﾃﾞｨｽｸﾘﾌﾟﾀｰ取得ｴﾗｰ
#define M25U870_ERR_I2C_READ				0x0031		// I2Cﾘｰﾄﾞｴﾗｰ
#define M25U870_ERR_I2C_READ_OT				0x0032		// I2Cﾘｰﾄﾞｵｰﾊﾞｰﾀｲﾑ
#define M25U870_ERR_I2C_READ_CANCEL			0x0033		// I2Cﾘｰﾄﾞｷｬﾝｾﾙ
#define M25U870_ERR_I2C_WRITE				0x0034		// I2Cﾗｲﾄｴﾗｰ
#define M25U870_ERR_I2C_WRITE_OT			0x0035		// I2Cﾗｲﾄｵｰﾊﾞｰﾀｲﾑ
#define M25U870_ERR_I2C_WRITE_CANCEL		0x0036		// I2Cﾗｲﾄｷｬﾝｾﾙ
#define M25U870_ERR_IO_READ					0x0037		// IOﾘｰﾄﾞｴﾗｰ
#define M25U870_ERR_IO_READ_OT				0x0038		// IOﾘｰﾄﾞｵｰﾊﾞｰﾀｲﾑ
#define M25U870_ERR_IO_READ_CANCEL			0x0039		// IOﾘｰﾄﾞｷｬﾝｾﾙ
#define M25U870_ERR_IO_WRITE				0x003A		// IOﾗｲﾄｴﾗｰ
#define M25U870_ERR_IO_WRITE_OT				0x003B		// IOﾗｲﾄｵｰﾊﾞｰﾀｲﾑ
#define M25U870_ERR_IO_WRITE_CANCEL			0x003C		// IOﾗｲﾄｷｬﾝｾﾙ
#define M25U870_ERR_SET_ISO_BUFFER			0x003D		// ｱｲｿｸﾛﾅｽ転送用ﾊﾞｯﾌｧの指定ｴﾗｰ
#define M25U870_ERR_CONNECT_EVENT			0x003E		// ｲﾍﾞﾝﾄｺﾈｸﾄｴﾗｰ
#define M25U870_ERR_MEMALC					0x003F		// ﾒﾓﾘ確保ｴﾗｰ
#define M25U870_ERR_START_ISO_COPY			0x0040		// ｱｲｿｸﾛﾅｽ転送ｺﾋﾟｰ開始ｴﾗｰ
#define M25U870_ERR_STOP_ISO_COPY			0x0041		// ｱｲｿｸﾛﾅｽ転送ｺﾋﾟｰ終了ｴﾗｰ
#define M25U870_ERR_GET_ISO_FLAGS			0x0042		// ｱｲｿｸﾛﾅｽﾌﾗｸﾞ取得ｴﾗｰ
#define M25U870_ERR_SET_ISO_STNG			0x0043		// ｱｲｿｸﾛﾅｽ設定ｴﾗｰ
#define M25U870_ERR_ISO_GAP					0x0044		// ｱｲｿｸﾛﾅｽｷﾞｬｯﾌﾟｴﾗｰ
#define M25U870_ERR_GET_I2C_STATUS			0x0045		// I2Cｽﾃｰﾀｽ取得ｴﾗｰ
#define M25U870_ERR_I2C_WRITE_NACK			0x0046		// I2Cﾗｲﾄ  NACK
#define M25U870_ERR_I2C_READ_NACK			0x0047		// I2Cﾘｰﾄﾞ NACK
#define M25U870_ERR_I2C_WRITE_BUSERR		0x0048		// I2Cﾗｲﾄ  BUSERR
#define M25U870_ERR_I2C_READ_BUSERR			0x0049		// I2Cﾘｰﾄﾞ BUSERR
#define M25U870_ERR_I2C_WRITE_RES			0x004A		// I2Cﾗｲﾄ  ﾚｽﾎﾟﾝｽｴﾗｰ
#define M25U870_ERR_I2C_READ_RES			0x004B		// I2Cﾘｰﾄﾞ ﾚｽﾎﾟﾝｽｴﾗｰ
#define M25U870_ERR_I2C_WRITE_OVERLEN		0x004C		// I2Cﾗｲﾄ  ｵｰﾊﾞｰﾚﾝｸﾞｽ
#define M25U870_ERR_I2C_READ_OVERLEN		0x004D		// I2Cﾘｰﾄﾞ ｵｰﾊﾞｰﾚﾝｸﾞｽ
#define M25U870_ERR_CMD_WRITE_OVERLEN		0x004E		// Cmdﾗｲﾄ  ｵｰﾊﾞｰﾚﾝｸﾞｽ
#define M25U870_ERR_CMD_READ_OVERLEN		0x004F		// CmdCﾘｰﾄﾞ ｵｰﾊﾞｰﾚﾝｸﾞｽ
#define M25U870_ERR_SROM_READ				0x0050		// SROMﾘｰﾄﾞｴﾗｰ
#define M25U870_ERR_SROM_READ_OT			0x0051		// SROMﾘｰﾄﾞｵｰﾊﾞｰﾀｲﾑ
#define M25U870_ERR_SROM_READ_CANCEL		0x0052		// SROMﾘｰﾄﾞｷｬﾝｾﾙ
#define M25U870_ERR_SROM_WRITE				0x0053		// SROMﾗｲﾄｴﾗｰ
#define M25U870_ERR_SROM_WRITE_OT			0x0054		// SROMﾗｲﾄｵｰﾊﾞｰﾀｲﾑ
#define M25U870_ERR_SROM_WRITE_CANCEL		0x0055		// SROMﾗｲﾄｷｬﾝｾﾙ

#define M25U870_ERR_I2C_WRITE_NACK2			0x0056		// I2Cﾗｲﾄ  NACK2
#define M25U870_ERR_I2C_WRITE_NACK3			0x0057		// I2Cﾗｲﾄ  NACK3
#define M25U870_ERR_I2C_WRITE_NACK4			0x0058		// I2Cﾗｲﾄ  NACK4
#define M25U870_ERR_I2C_READ_NACK2			0x0059		// I2Cﾘｰﾄﾞ NACK2
#define M25U870_ERR_I2C_READ_NACK3			0x005A		// I2Cﾘｰﾄﾞ NACK3
#define M25U870_ERR_I2C_READ_NACK4			0x005B		// I2Cﾘｰﾄﾞ NACK4

#define M25U870_ERR_I2C_WRITE_BUSERR2		0x005C		// I2Cﾗｲﾄ  BUSERR2
#define M25U870_ERR_I2C_WRITE_BUSERR3		0x005D		// I2Cﾗｲﾄ  BUSERR3
#define M25U870_ERR_I2C_WRITE_BUSERR4		0x005E		// I2Cﾗｲﾄ  BUSERR4
#define M25U870_ERR_I2C_READ_BUSERR2		0x005F		// I2Cﾘｰﾄﾞ BUSERR2
#define M25U870_ERR_I2C_READ_BUSERR3		0x0060		// I2Cﾘｰﾄﾞ BUSERR3
#define M25U870_ERR_I2C_READ_BUSERR4		0x0061		// I2Cﾘｰﾄﾞ BUSERR4
#define M25U870_ERR_CONNECT_EVENT2			0x0062		// ｲﾍﾞﾝﾄ2ｺﾈｸﾄｴﾗｰ
#define M25U870_ERR_GPIOREAD_CANCEL			0x0063		// GPIOﾘｰﾄﾞｷｬﾝｾﾙ
#define M25U870_INIT_ALREADY				0x0065		// 起動済みｴﾗｰ
#define M25U870_ERR_UNINITIALIZED			0x0066		// 未初期化ｴﾗｰ
#define M25U870_ERR_CONNECT_EVENT3			0x0067		// ｲﾍﾞﾝﾄ3ｺﾈｸﾄｴﾗｰ
#define M25U870_MISMATCH_OS					0x0068		// OSが違います
#define M25U870_ERR_ALC_BANDWIDTH			0x0069		// 帯域幅確保ｴﾗｰ
// Status
#define M25U870_HW_SIZE_CHANGED				0x0080		// 画像ｻｲｽﾞが変わりました
#define M25U870_RETRY_ACQUIRE				0x0081		// 画像再入力要求

// isochronous transfer
#define M25U870_ERR_PARAM_PKTSIZE			0x0100		// ISO:ﾊﾟｹｯﾄｻｲｽﾞｵｰﾊﾞｰ
#define M25U870_ERR_PARAM_PKTCOUNT			0x0101		// ISO:ﾊﾟｹｯﾄｶｳﾝﾄｴﾗｰ
#define M25U870_ERR_PARAM_TOTALCOUNT		0x0102		// ISO:ﾄｰﾀﾙｻｲｽﾞｵｰﾊﾞｰ
#define M25U870_ERR_ISODESC_OFFSET			0x0103		// ISO:ﾃﾞｨｽｸﾘﾌﾟﾀｰｵﾌｾｯﾄｴﾗｰ
#define M25U870_ERR_ISO_WRITE_PIPE			0x0104		// ISO:ﾗｲﾄﾊﾟｲﾌﾟｴﾗｰ
#define M25U870_ERR_BUSY_ISO_STREAM			0x0105		// ISO:ｽﾄﾘｰﾑ動作中ｴﾗｰ

// RS232C Error
#define M25U870_ERR_232_READ				0x0200		// RS232:READ ｴﾗｰ
#define M25U870_ERR_232_WRITE				0x0201		// RS232:WRITE ｴﾗｰ
#define M25U870_ERR_232_READNUM				0x0202		// RS232:READ数ｴﾗｰ
#define M25U870_ERR_232_READ_OT				0x0203		// RS232:READｵｰﾊﾞｰﾀｲﾑ
#define M25U870_ERR_232_NAKx3				0x0204		// RS232:NAKx3 ｴﾗｰ
#define M25U870_ERR_232_SEND_FRM			0x0205		// RS232:送信ﾌﾚｰﾑ ｴﾗｰ ... ﾃﾞｰﾀを3回送信したが, ACKがなかった
#define M25U870_ERR_232_FRAMING				0x0206		// RS232:ﾌﾚｰﾐﾝｸﾞ ｴﾗｰ
#define M25U870_ERR_232_OVERRUN				0x0207		// RS232:ｵｰﾊﾞｰﾗﾝ
#define M25U870_ERR_232_SUMCHK				0x0208		// RS232:ｻﾑﾁｪｯｸｴﾗｰ
#define M25U870_ERR_232_DATAOVER			0x0209		// RS232:ﾃﾞｰﾀｻｲｽﾞｵｰﾊﾞｰ
#define M25U870_ERR_232_ACK					0x020A		// RS232:ACK受信ｴﾗｰ
#define M25U870_ERR_232_ACK2				0x020B		// RS232:ﾃﾞｰﾀ送信後,ACK受信ｴﾗｰ
#define M25U870_ERR_232_READ_OT2			0x020C		// RS232:ﾃﾞｰﾀ送信後,READｵｰﾊﾞｰﾀｲﾑ
#define M25U870_ERR_232_READNUM_SHORT		0x020D		// RS232:ﾘｰﾄﾞ文字数ｼｮｰﾄ
#define M25U870_ERR_232_READNUM_OVER		0x020E		// RS232:ﾘｰﾄﾞ文字数ｵｰﾊﾞｰ
#define M25U870_ERR_232_UNINITIALIZE		0x020F		// RS232C 未初期化ｴﾗｰ

#ifdef __cplusplus
extern "C"{
#endif 

DWORD WINAPI M25U870_GetBoardNum( DWORD *pNum, DWORD *pExist );
DWORD WINAPI M25U870_Init( DWORD dwDev );
DWORD WINAPI M25U870_Init_ForDirectShow( DWORD dwDev );
DWORD WINAPI M25U870_Fini(  DWORD dwDev );
DWORD WINAPI M25U870_Acquire( DWORD dwDev, TRANSFER_DETAIL* pDetail, TRANSFER_OPT *pOpt, TRANSFER_RESULT *pRes );
DWORD WINAPI M25U870_AcquireCancel( DWORD dwDev );
DWORD WINAPI M25U870_AcquireRetry( DWORD dwDev, TRANSFER_DETAIL* pDetail, DWORD dwWait );
DWORD WINAPI M25U870_AcquireSubCtrl( DWORD dwDev, TRANSFER_OPT *pOpt );
DWORD WINAPI M25U870_GetPipeInfomation( DWORD dwDev, char *szInfo );
DWORD WINAPI M25U870_GetPipeInfo( DWORD dwDev, BYTE* pInfo );
BOOL  WINAPI M25U870_IsIsoTransfer( DWORD dwDev );
DWORD WINAPI M25U870_GetIsoFlags( DWORD dwDev, M25U870_ISO_FLAGS_CONTROL *pCtrl );
DWORD WINAPI M25U870_CheckIsoParam( DWORD dwDev, TRANSFER_DETAIL* pstDetail );
DWORD WINAPI M25U870_SetCopyMode( DWORD dwDev, M25U870_COPYMODE_CTRL *pControl );
DWORD WINAPI M25U870_SetHWImageSize( DWORD dwDev, DWORD dwXsize, DWORD dwYsize );
DWORD WINAPI M25U870_GetHWImageSize( DWORD dwDev, DWORD *pdwXsize, DWORD *pdwYsize );
DWORD WINAPI M25U870_GetMissFrmVBR( DWORD dwDev, DWORD *pMissFrame );
DWORD WINAPI M25U870_SetMissAlignedFrmCount( DWORD dwDev, DWORD dwFrame );
DWORD WINAPI M25U870_GetMissAlignedFrmCount( DWORD dwDev, DWORD *pFrame );

// Trigger Input
DWORD WINAPI M25U870_SetTrigSensorMode( DWORD dwDev, BOOL bTrig );
DWORD WINAPI M25U870_SetTrigoutPola( DWORD dwDev, BOOL bPol );
DWORD WINAPI M25U870_SetTrigoutWidthCnt( DWORD dwDev, DWORD dwDat );

// Color Convert
BOOL  WINAPI M25U870_SetImageSize( DWORD dwX, DWORD dwY, DWORD dwLineSize );
void  WINAPI M25U870_GetImageSize( DWORD *pdwXsize, DWORD *pdwYsize, DWORD *pdwLineSize, DWORD *pdwTransSize );
void  WINAPI M25U870_YUVtoRGB( LPBYTE pData, LPBYTE lpRGBBuff, BOOL bBMP );
BOOL  WINAPI M25U870_YUVtoYUV( LPBYTE pData, LPBYTE lpYUVBuff, LPBYTE lpRGBBuff, DWORD *pdwSizeX, DWORD *pdwSizeY );
void  WINAPI M25U870_BayerToRGB( LPBYTE pData, LPBYTE lpRGBBuff, BOOL bAWB );
void  WINAPI M25U870_BayerToGRAY( LPBYTE pData, LPBYTE lpBuff );
void  WINAPI M25U870_SetInputMode( int iMode );
int   WINAPI M25U870_GetInputMode( void );
void  WINAPI M25U870_SetYNormalize( int iAdjust );
int   WINAPI M25U870_GetYNormalize( void );
void  WINAPI M25U870_SetGammaAdjust( double dAdjust );
double WINAPI M25U870_GetGammaAdjust( void );
int   WINAPI M25U870_GetGammaTableValue( int iValue );
void  WINAPI M25U870_SetYUVTable( double ry, double ru, double rv, double gy, double gu, double gv, double by, double bu, double bv );
void  WINAPI M25U870_GetYUVTable( double *ry, double *ru, double *rv, double *gy, double *gu, double *gv, double *by, double *bu, double *bv );

// I2C 
DWORD WINAPI M25U870_I2CEnable( DWORD dwDev );
DWORD WINAPI M25U870_I2CRead( DWORD dwDev, M25U870_I2C_PARA *lpstI2C );
DWORD WINAPI M25U870_I2CWrite( DWORD dwDev, M25U870_I2C_PARA *lpstI2C );
DWORD WINAPI M25U870_I2CWriteEx( DWORD dwDev, M25U870_I2C_PARA *lpstI2C, BOOL bStop );
DWORD WINAPI M25U870_SetI2CTimeout( DWORD dwDev, DWORD dwTimeout );
DWORD WINAPI M25U870_GetI2CTimeout( DWORD dwDev, DWORD *pTimeout );
DWORD WINAPI M25U870_I2CReset( DWORD dwDev );
DWORD WINAPI M25U870_SetI2CFrequency( DWORD dwDev, int mode );

// RS232C
DWORD WINAPI M25U870_232Enable( DWORD dwDev );
DWORD WINAPI M25U870_232Write( DWORD dwDev, M25U870_232_PARA *lpst232 );
DWORD WINAPI M25U870_232Read( DWORD dwDev, M25U870_232_PARA *lpst232, DWORD dwOverTime );
DWORD WINAPI M25U870_232ReadSub( DWORD dwDev, M25U870_232_PARA *lpst232 );
DWORD WINAPI M25U870_232ReadCheck( DWORD dwDev, DWORD *pNum, BYTE* pStatus );
DWORD WINAPI M25U870_232SetConfig( DWORD dwDev, M25U870_232_STNG *lpStng );
DWORD WINAPI M25U870_232GetConfig( DWORD dwDev, M25U870_232_STNG *lpStng );
DWORD WINAPI M25U870_232Reset( DWORD dwDev );

// M25U870 Control
DWORD WINAPI M25U870_SetSensorClock( DWORD dwDev, int iClock );
DWORD WINAPI M25U870_GetSensorClock( DWORD dwDev, int *pClock );
DWORD WINAPI M25U870_SetRegulator( DWORD dwDev, int i2Xv, int i2Xvfine, int i18v, int i18vfine );
DWORD WINAPI M25U870_GetRegulator( DWORD dwDev, int *p2Xv, int *p2Xvfine, int *p18v, int *p18vfine );
DWORD WINAPI M25U870_ImageReset( DWORD dwDev, int iMode );
DWORD WINAPI M25U870_SetCaptureMode( DWORD dwDev, M25U870_CAPMODE *pDat );
DWORD WINAPI M25U870_SetXferBitWidth( DWORD dwDev, BOOL b16Bit, BYTE byShift );
DWORD WINAPI M25U870_SetSyncPola( DWORD dwDev, BOOL VSync, BOOL HSync, BOOL bSLWR );

// LED Control
DWORD WINAPI M25U870_SetLed( DWORD dwDev, DWORD dwDat );
DWORD WINAPI M25U870_GetLed( DWORD dwDev, DWORD *pDat );

// Image Quality Ajustment
DWORD WINAPI M25U870_SetAnalogGain( DWORD dwDev, int iDat );
DWORD WINAPI M25U870_GetAnalogGain( DWORD dwDev, int *pDat );
DWORD WINAPI M25U870_SetDigitalGain( DWORD dwDev, int iDat );
DWORD WINAPI M25U870_GetDigitalGain( DWORD dwDev, int *pDat );
DWORD WINAPI M25U870_SetExposure( DWORD dwDev, int iDat );
DWORD WINAPI M25U870_GetExposure( DWORD dwDev, int *pDat );
DWORD WINAPI M25U870_SetExposureEx( DWORD dwDev, int  iDat, BOOL  bEnb2, int  iDat2 );
DWORD WINAPI M25U870_GetExposureEx( DWORD dwDev, int *pDat, BOOL *pEnb2, int *pDat2 );
DWORD WINAPI M25U870_SetExposureReg( DWORD dwDev, int iDat, double *pDat );
DWORD WINAPI M25U870_GetExposureReg( DWORD dwDev, int *pDat );
DWORD WINAPI M25U870_SetExposureHDR( DWORD dwDev, M25U870_EXPOSURE_HDR_SETUP *pDat );
DWORD WINAPI M25U870_GetExposureHDR( DWORD dwDev, M25U870_EXPOSURE_HDR_SETUP *pDat );
DWORD WINAPI M25U870_SetAnalogAutoGain( DWORD dwDev, BOOL bDat );
DWORD WINAPI M25U870_GetAnalogAutoGain( DWORD dwDev, BOOL *pDat );
DWORD WINAPI M25U870_SetAutoExposure( DWORD dwDev, BOOL bDat );
DWORD WINAPI M25U870_GetAutoExposure( DWORD dwDev, BOOL *pDat );
DWORD WINAPI M25U870_SetFlip( DWORD dwDev, BOOL bEnb );
DWORD WINAPI M25U870_GetFlip( DWORD dwDev, BOOL *pEnb );
DWORD WINAPI M25U870_SetMirror( DWORD dwDev, BOOL bEnb );
DWORD WINAPI M25U870_GetMirror( DWORD dwDev, BOOL *pEnb );
DWORD WINAPI M25U870_SetPrivacy( DWORD dwDev, BOOL  bOn );
DWORD WINAPI M25U870_GetPrivacy( DWORD dwDev, BOOL *pOn );
DWORD WINAPI M25U870_SetStrobeCtrl( DWORD dwDev, BOOL bEnb, BOOL bInvert );
DWORD WINAPI M25U870_GetStrobeCtrl( DWORD dwDev, BOOL *pEnb, BOOL *pInvert );

// Gains Parameter Default/Load/Save
DWORD WINAPI M25U870_DefaultGains( DWORD dwDev );
DWORD WINAPI M25U870_SaveGains( DWORD dwDev );

// Image Quality Ajustment...FrameRate
DWORD WINAPI M25U870_SetFrameRateCtrl( DWORD dwDev, int iMode, int  iDat );
DWORD WINAPI M25U870_GetFrameRateCtrl( DWORD dwDev, int iMode, int *pDat );

// Camera Size
DWORD WINAPI M25U870_SetCameraSize( DWORD dwDev, DWORD dwMode );

// Camera Offset( Input from CMOS )
DWORD WINAPI M25U870_SetOffset( DWORD dwDev, DWORD dwX, DWORD dwY );
DWORD WINAPI M25U870_GetOffset( DWORD dwDev, DWORD *pX, DWORD *pY );

// Error Message
void  WINAPI M25U870_ErrMsg( DWORD code );
void  WINAPI M25U870_GetErrText( DWORD code, char* sMsg );

#ifdef __cplusplus
}

#pragma pack( pop, before_include4304 )

#endif
