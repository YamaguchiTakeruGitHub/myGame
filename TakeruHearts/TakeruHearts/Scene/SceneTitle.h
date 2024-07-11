#pragma once
#include "SceneBase.h"

class SceneTitle final
	: public SceneBase
{
public:
	SceneTitle();
	~SceneTitle() override;

	void Init();
	void Update();
	void Draw();
	void End();

};

