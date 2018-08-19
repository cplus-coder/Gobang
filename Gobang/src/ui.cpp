#include "../include/ui.h"

extern char global_project_path[MAX_PATH];
extern int global_route;

extern Asset homePageBackground[];
extern Asset homePageButton[];
extern Asset chessboardPageBackground[];
extern Asset chessboardPageButton[];
extern Asset introducePageBackground[];
extern Asset introducePageButton[];

void renderImage(const char* img_path, int x, int y, int width, int height) // to render transparent image int background with png...
{
		IMAGE img;
		char path[MAX_PATH];
		strcpy(path, global_project_path);
		strcat(path, img_path);
		loadimage_ex(&img, path, WHITE, width, height);
		transparentimage(x, y, &img, WHITE);
}

void renderText(const char* text, RECT textArea, COLORREF color, int fontSize, UINT uFormat)
{
		setbkmode(TRANSPARENT);
		settextcolor(color);
		settextstyle(fontSize, 0, _T("ËÎÌו"), 0, 0, 500, false, false, false);
		drawtext(text, &textArea, uFormat);
}

void renderAssets(Asset *assets)
{
		for (int i = 0, length = getAssetsLength(assets); i < length; i++)
		{
				if (assets[i].src) 
				{
						renderImage(assets[i].src, assets[i].x, assets[i].y, assets[i].width, assets[i].height);
				}
				if (assets[i].text)
				{
						renderText(assets[i].text, assets[i].area, assets[i].textColor, assets[i].fontSize, assets[i].uFormat);
				}
		}
}

void renderPage(int pageName)
{
		switch (pageName)
		{
				case HOME_PAGE:
						renderAssets(homePageBackground);
						renderAssets(homePageButton);
						break;
				case CHESSBOARD_PAGE:
						renderAssets(chessboardPageBackground);
						renderAssets(chessboardPageButton);
						break;
				default:
						break;
		}

}
