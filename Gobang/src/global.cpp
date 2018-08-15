#include "../include/global.h"
char global_project_path[MAX_PATH];
int global_route;

const char* image_background = "\\assets\\image\\background.jpg";
const char* image_button_azure = "\\assets\\image\\button-azure.png";

Asset window = { 0, 0, 640, 480, image_background };

Asset homePageButton[] =
{
		{ 50, 390, 0, 0, image_button_azure, "开始游戏",{ 50, 390, 150, 420 }, BLACK, 18 },
		{ 350, 390,0, 0, image_button_azure, "游戏介绍",{ 200, 390, 300, 420 }, BLACK, 18 },
		{ 200, 390,0, 0, image_button_azure, "退出游戏",{ 500, 390, 600, 420 }, BLACK, 18 },
		{ 500, 390, 0, 0, image_button_azure, "读取存档",{ 350, 390, 450, 420 }, BLACK, 18, true },
};

Asset chessboardPageButton[] =
{
		{ 50, 390, 0, 0, image_button_azure, "1",{ 50, 390, 150, 420 }, BLACK, 18 },
		{ 350, 390,0, 0, image_button_azure, "2",{ 200, 390, 300, 420 }, BLACK, 18, true },
};

Asset archivePageButton[] =
{
		{ 50, 390, 0, 0, image_button_azure, "2", { 50, 390, 150, 420 }, BLACK, 18 },
		{ 350, 390,0, 0, image_button_azure, "2",{ 200, 390, 300, 420 }, BLACK, 18 },
		{ 200, 390,0, 0, image_button_azure, "3",{ 500, 390, 600, 420 }, BLACK, 18, true },
};

int getAssetsLength(Asset *assets)
{
		int index = 0;
		while (true)
		{
				index++;
				if (assets[index].end)
				{
						break;
				}
		}
		return index + 1;
}