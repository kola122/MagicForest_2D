//=============================================================================
// BG処理 [bg.h]
//=============================================================================
#pragma once

#include "main.h"
#include "renderer.h"
#include "debugproc.h"
#include "sprite.h"

//*****************************************************************************
// マクロ定義
//*****************************************************************************
#define BOX_MAX                        (5)



struct BG
{
	XMFLOAT3	pos;		// ポリゴンの座標
	float		w, h;		// 幅と高さ
	int			texNo;		// 使用しているテクスチャ番号
	float		scrl;		// スクロール
	XMFLOAT3	old_pos;	// １フレ前のポリゴンの座標
	float		scrl2;		// スクロール
	float		countAnim;
	int         frame;  
	BOOL        use;
	BOOL        start;      //事件開始
	
};




//*****************************************************************************
// プロトタイプ宣言
//*****************************************************************************
HRESULT InitBG(void);
void UninitBG(void);
void UpdateBG(void);
void DrawBG(void);

BG* GetBG(void);
BG* GetRangeL(void);
BG* GetRangeM(void);
BG* GetRangeR(void);
BG* GetBox(void);

