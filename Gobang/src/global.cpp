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
const char* image_chessboardPage_background = "\\assets\\image\\chessboardPageBackground.jpg";
const char* image_button_azure = "\\assets\\image\\button-azure.png";
const char* image_button_blue = "\\assets\\image\\button-blue.png";
const char* image_introducePage_background = "\\assets\\image\\introducePageBackground.jpg";

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
		{ 520, 250, 0, 0, image_button_blue, false, "开始计步",{ 520, 250, 590, 280 }, WHITE, 15, BUTTON_STYLE },
		{ 610, 250, 0, 0, image_button_blue, false, "关闭计步",{ 610, 250, 680, 280 }, WHITE, 15, BUTTON_STYLE },
		{ 520, 300, 0, 0, image_button_blue, false, "存档", { 520, 300, 590, 330 }, WHITE, 15, BUTTON_STYLE},
		{ 610, 300, 0, 0, image_button_blue, false, "悔棋", { 610, 300, 680, 330 }, WHITE, 15, BUTTON_STYLE},
		{ 550, 350, 0, 0, image_button_azure, true, "主界面", { 550, 350, 650, 380 }, BLACK ,15, BUTTON_STYLE},
};

Asset introducePageBackground[] = { 0, 0, 0, 0, image_introducePage_background, true };

Asset introducePageText[] = 
{
		{ 0, 0, 0, 0, "", false, "游戏介绍", { 320, 50, 400, 80}, BLACK, 20, BUTTON_STYLE},
		{ 0, 0, 0, 0, "", true, "经典的五子棋，考验智慧的棋局，谁先将同色的五个棋子连续地放置到棋盘中，即为胜者，新年版本的五子连珠，赶紧来玩吧！", { 60, 100, 660, 300}, BLACK, 15, TEXT_STYLE},
};

Asset introducePageButton[] =
{
		{ 320, 370, 80, 30, image_button_azure, true, "返回",{ 320, 370, 400, 400 }, BLACK ,20, BUTTON_STYLE },
};

Asset archivePageBackground[];
Asset archivePageButton[];
