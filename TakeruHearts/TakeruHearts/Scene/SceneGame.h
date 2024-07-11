#pragma once
#include "SceneBase.h"


	class SceneGame final
		: public SceneBase
	{
	public:
		SceneGame();
		~SceneGame()override;

		void Init();
		void Update();
		void Draw();
		void End();
	};


