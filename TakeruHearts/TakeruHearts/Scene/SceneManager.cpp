#include "SceneManager.h"

SceneManager::SceneManager(std::unique_ptr<SceneBase> initialScene) :
	currentScene(std::move(initialScene))//initialScene��currentScene�̏��L����n��
{
	if (currentScene)
	{
		currentScene->Init();
	}
}

SceneManager::~SceneManager()
{
	currentScene.reset();//CurrentScene�̃��\�[�X�����
}

void SceneManager::SetScene(std::unique_ptr<SceneBase> scene)
{
	if (currentScene)
	{
		currentScene->End();
	}
	currentScene = std::move(scene);
	if (currentScene)
	{
		currentScene->Init();
	}
}

void SceneManager::HondleInput()
{
	if (CheckHitKey(KEY_INPUT_T) != 0)
	{
		SetScene(std::make_unique<SceneGame>());//�V�����C���X�^���X�𐶐���unique_ptr�ɓn��
	}
	if (CheckHitKey(KEY_INPUT_U) != 0)
	{
		SetScene(std::make_unique<SceneTitle>());//������
	}
	if (CheckHitKey(KEY_INPUT_R) != 0)
	{
		SetScene(std::make_unique<SceneResult>());//������
	}

}

void SceneManager::Init()
{
	if (currentScene)
	{
		currentScene->Init();
	}
}

void SceneManager::Update()
{
	if (currentScene)
	{
		currentScene->Update();
	}
}

void SceneManager::Draw()
{
	if (currentScene)
	{
		currentScene->Draw();
	}
}

void SceneManager::End()
{
	if (currentScene)
	{
		currentScene->End();
	}
}
