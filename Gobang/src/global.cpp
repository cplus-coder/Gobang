#include "../include/global.h"
char global_project_path[MAX_PATH];
int global_route;

int getAssetsLength(Asset *assets)
{
		int index = 0;
		while (!assets[index].assetsEnd)
		{
				index++;
		}
		return index + 1;
}

const char* image_homePage_background = "\\assets\\image\\homePageBackground.jpg";
const char* image_chessboardPage_background = "\\assets\\image\\chessboardPageBackground.png";
const char* image_button_azure = "\\assets\\image\\button-azure.png";
const char* image_button_blue = "\\assets\\image\\button-blue.png";

Asset homePageBackground [] = { 0, 0, 720, 480, image_homePage_background, true };

Asset homePageButton[] =
{
		{ 100, 390, 0, 0, image_button_azure, false, "开始游戏",{ 100, 390, 200, 420 }, BLACK, 18, BUTTON_STYLE },
		{ 250, 390,0, 0, image_button_azure, false, "游戏介绍",{ 250, 390, 350, 420 }, BLACK, 18, BUTTON_STYLE },
		{ 400, 390, 0, 0, image_button_azure, false, "读取存档",{ 400, 390, 500, 420 }, BLACK, 18, BUTTON_STYLE },
		{ 550, 390,0, 0, image_button_azure, true, "退出游戏",{ 550, 390, 650, 420 }, BLACK, 18, BUTTON_STYLE },
};

Asset chessboardPageBackground[] = { 0, 0, 0, 0, image_chessboardPage_background, true };

Asset chessboardPageButton[] =
{
		{ 50, 390, 0, 0, image_button_azure, false,  "1",{ 50, 390, 150, 420 }, BLACK, 18, BUTTON_STYLE },
		{ 350, 390,0, 0, image_button_azure, true, "2",{ 200, 390, 300, 420 }, BLACK, 18, BUTTON_STYLE },
};

Asset introducePageBackground[] = { 0, 0, 0, 0, image_chessboardPage_background, true };

Asset introducePageButton[] =
{
		{ 50, 390, 0, 0, image_button_azure, false, "2", { 50, 390, 150, 420 }, BLACK, 18, BUTTON_STYLE },
		{ 350, 390,0, 0, image_button_azure, false, "2",{ 200, 390, 300, 420 }, BLACK, 18, BUTTON_STYLE },
		{ 200, 390,0, 0, image_button_azure, true, "3",{ 500, 390, 600, 420 }, BLACK, 18, BUTTON_STYLE },
};

Asset archivePageBackground[];
Asset archivePageButton[];
