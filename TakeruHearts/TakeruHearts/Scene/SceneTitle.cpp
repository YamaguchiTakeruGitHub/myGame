#include "SceneTitle.h"

SceneTitle::SceneTitle()
{
	DrawFormatString(0, 0, 0xffffff, "titleデストラクタ");
}

SceneTitle::~SceneTitle()
{
	DrawFormatString(0, 20, 0xffffff,"titleコンストラクタ");
}

void SceneTitle::Init()
{
	DrawFormatString(0, 40, 0xffffff, "title初期化");
}

void SceneTitle::Update()
{
	DrawFormatString(0, 60, 0xffffff, "title更新");
}

void SceneTitle::Draw()
{
	DrawFormatString(0, 80, 0xffffff, "title描画");
}

void SceneTitle::End()
{
	DrawFormatString(0, 100, 0xffffff, "title解放");
}


