#include "SceneGame.h"

SceneGame::SceneGame()
{
	DrawFormatString(0, 0, 0xffffff, "Gameデストラクタ");
}

SceneGame::~SceneGame()
{
	DrawFormatString(0, 20, 0xffffff, "Gameコンストラクタ");
}

void SceneGame::Init()
{
	DrawFormatString(0, 40, 0xffffff, "Game初期化");
}

void SceneGame::Update()
{
	DrawFormatString(0, 60, 0xffffff, "Game更新");
}

void SceneGame::Draw()
{
	DrawFormatString(0, 80, 0xffffff, "Game描画");
}

void SceneGame::End()
{
	DrawFormatString(0, 100, 0xffffff, "Game解放");
}
