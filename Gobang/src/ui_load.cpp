#pragma once
#include "../include/ui_load.h"
#include "../include/util.h"

extern char global_project_path[MAX_PATH];
const char* image_background = "\\assets\\image\\background.jpg";
const char* image_button_azure = "\\assets\\image\\button-azure.png";

typedef struct Asset {
		int x;
		int y;
		int width;
		int height;
		const char* src;
		const char* text;
		RECT textArea;
		COLORREF textColor;
		int fontSize;
};

Asset window = {0, 0, 640, 480, image_background };
Asset homePageButton[] =
{ 
		{ 50, 390, 0, 0, image_button_azure, "开始游戏", { 50, 390, 150, 420 }, BLACK, 20 },
		{ 350, 390,0, 0, image_button_azure, "游戏介绍",{ 200, 390, 300, 420 }, BLACK, 20 },
		{ 200, 390,0, 0, image_button_azure, "退出游戏",{ 500, 390, 600, 420 }, BLACK, 20 },
		{ 500, 390, 0, 0, image_button_azure, "读取存档",{ 350, 390, 450, 420 }, BLACK, 20 },
};

void render_image(const char* img_path, int x, int y, int width, int height) //to render background image with jpg...
{
		IMAGE img;
		char path[MAX_PATH];
		strcpy(path, global_project_path);
		strcat(path, img_path);
		loadimage(&img, path, width, height);
		putimage(x, y, &img);
}

void render_image(const char* img_path, int x, int y) // to render transparent image int background with png...
{
		IMAGE img;
		char path[MAX_PATH];
		strcpy(path, global_project_path);
		strcat(path, img_path);
		loadimage_ex(&img, path, WHITE);
		transparentimage(x, y, &img, WHITE);
}

void render_text(const char* text, RECT textArea, COLORREF color, int fontSize)
{
		setbkmode(TRANSPARENT);
		settextcolor(color);
		settextstyle(fontSize, 0, _T("宋体"), 0, 0, 500, false, false, false);
		drawtext(text, &textArea, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
}

void render_assets(Asset *assets, int length)
{
		for (int i = 0; i < length; i++)
		{
				if (assets[i].src) 
				{
						render_image(assets[i].src, assets[i].x, assets[i].y);
				}
				if (assets[i].text)
				{
						render_text(assets[i].text, assets[i].textArea, assets[i].textColor, assets[i].fontSize);
				}
		}
}

void render_homepage()
{
		initgraph(window.width, window.height, SHOWCONSOLE);
		render_image(window.src, window.x, window.y, window.width, window.height);
		render_assets(homePageButton, length(homePageButton));
}
