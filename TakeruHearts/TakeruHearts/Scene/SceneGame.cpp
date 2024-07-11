#include "SceneGame.h"

SceneGame::SceneGame()
{
	DrawFormatString(0, 0, 0xffffff, "Game�f�X�g���N�^");
}

SceneGame::~SceneGame()
{
	DrawFormatString(0, 20, 0xffffff, "Game�R���X�g���N�^");
}

void SceneGame::Init()
{
	DrawFormatString(0, 40, 0xffffff, "Game������");
}

void SceneGame::Update()
{
	DrawFormatString(0, 60, 0xffffff, "Game�X�V");
}

void SceneGame::Draw()
{
	DrawFormatString(0, 80, 0xffffff, "Game�`��");
}

void SceneGame::End()
{
	DrawFormatString(0, 100, 0xffffff, "Game���");
}
