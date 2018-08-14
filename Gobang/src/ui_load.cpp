#pragma once
#include "../include/ui_load.h"
#include "../include/util.h"

extern char global_project_path[MAX_PATH];
const char* image_background = "\\assets\\image\\background.jpg";
const char* image_button_azure = "\\assets\\image\\button-azure.png";

typedef struct ImageAttribute {
		int x;
		int y;
		int width;
		int height;
		const char* src;
};

ImageAttribute window = {0, 0, 640, 480, image_background };

void load_image(const char* img_path, int width, int height, int x, int y)
{
		IMAGE img;
		char path[MAX_PATH];
		strcpy(path, global_project_path);
		strcat(path, img_path);
		loadimage(&img, path, width, height);
		putimage(x, y, &img);
}

void load_image(const char* img_path, int x, int y, COLORREF color)
{
		IMAGE img;
		char path[MAX_PATH];
		strcpy(path, global_project_path);
		strcat(path, img_path);
		loadimage_ex(&img, path, color);
		transparentimage(x, y, &img, color);
}

void load_homepage()
{
		initgraph(window.width, window.height, SHOWCONSOLE);
		load_image(window.src, window.width, window.height, window.x, window.y);

		ImageAttribute homePageButton[] = { { 50, 390, 0, 0, image_button_azure },{ 350, 390,0, 0, image_button_azure },
		{ 200, 390,0, 0, image_button_azure },{ 500, 390, 0, 0, image_button_azure } };
		for (int i = 0; i < length(homePageButton); i++)
		{
		   load_image(homePageButton[i].src, homePageButton[i].x, homePageButton[i].y, WHITE);
		}
}
