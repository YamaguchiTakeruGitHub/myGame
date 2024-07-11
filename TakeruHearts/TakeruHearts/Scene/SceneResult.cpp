#include "SceneResult.h"

SceneResult::SceneResult()
{
	DrawFormatString(0, 0, 0xffffff, "Result�f�X�g���N�^");
}

SceneResult::~SceneResult()
{
	DrawFormatString(0, 20, 0xffffff, "Result�R���X�g���N�^");
}

void SceneResult::Init()
{
	DrawFormatString(0, 40, 0xffffff, "Result������");
}

void SceneResult::Update()
{
	DrawFormatString(0, 60, 0xffffff, "Result�X�V");
}

void SceneResult::Draw()
{
	DrawFormatString(0, 80, 0xffffff, "Result�`��");
}

void SceneResult::End()
{
	DrawFormatString(0, 100, 0xffffff, "Result���");
}


