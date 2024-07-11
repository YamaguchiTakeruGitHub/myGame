#pragma once
#include <DxLib.h>


	class SceneBase
	{
	public:
		SceneBase() {};
		virtual ~SceneBase() {};

		virtual void Init() = 0;
		virtual void Update() = 0;
		virtual void Draw() = 0;
		virtual void End() = 0;

	};

