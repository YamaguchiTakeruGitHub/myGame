#include "SceneTitle.h"

SceneTitle::SceneTitle()
{
	DrawFormatString(0, 0, 0xffffff, "title�f�X�g���N�^");
}

SceneTitle::~SceneTitle()
{
	DrawFormatString(0, 20, 0xffffff,"title�R���X�g���N�^");
}

void SceneTitle::Init()
{
	DrawFormatString(0, 40, 0xffffff, "title������");
}

void SceneTitle::Update()
{
	DrawFormatString(0, 60, 0xffffff, "title�X�V");
}

void SceneTitle::Draw()
{
	DrawFormatString(0, 80, 0xffffff, "title�`��");
}

void SceneTitle::End()
{
	DrawFormatString(0, 100, 0xffffff, "title���");
}


