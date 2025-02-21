#pragma once
#include "../CommonScene.h"
#include <memory>

class SceneBase;
class SceneManager
{
private:
	std::unique_ptr<SceneBase> currentScene;//所有権の確保

public:
	SceneManager(std::unique_ptr<SceneBase> initialScene);
	~SceneManager();

	void SetScene(std::unique_ptr<SceneBase> scene);

	void HondleInput();

	void Init();
	void Update();
	void Draw();
	void End();
		

};

