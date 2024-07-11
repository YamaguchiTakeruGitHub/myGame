#include<DxLib.h>
#include <../nlohmann/json.hpp>
#include <fstream>
#include <iostream>
#include <cassert>

struct GameConfig
{
	std::uint16_t screenWidth;
	std::uint16_t screenHeight;
	int masterSound;
};

bool LoadConfig(const std::string& filename, GameConfig& config)
{
	std::ifstream inputfile(filename);

	if (!inputfile.is_open())
	{
		return false;
	}

	nlohmann::json jsonData;

	inputfile >> jsonData;

	config.screenHeight = jsonData["screenHeight"];
	config.screenWidth = jsonData["screenWidth"];

	inputfile.close();

	return true;
}



int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{

	ChangeWindowMode(true);

	if (DxLib_Init() == -1)
	{
		return -1;
	}
	
	SetDrawScreen(DX_SCREEN_BACK);

	GameConfig config;
	if (!LoadConfig("../Data/AllVariables/GameConfig.json", config))
	{
		return 1;
	}


	SetGraphMode(config.screenWidth, config.screenHeight, true);
	SetWindowSize(config.screenWidth, config.screenHeight);

	SetUseZBuffer3D(true);

	while (ProcessMessage() != 1)
	{
		LONGLONG start = GetNowHiPerformanceCount();

		ClearDrawScreen();


		//ゲーム処理（開始）


		//ゲーム処理（終了）


		ScreenFlip();

		if (CheckHitKey(KEY_INPUT_ESCAPE) != 0)
		{
			break;
		}

		while (GetNowHiPerformanceCount() - start < 16667)
		{

		}
	}

	DxLib_End();

	return 0;
};