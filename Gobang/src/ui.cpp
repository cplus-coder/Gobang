#include "../include/ui.h"

extern char global_project_path[MAX_PATH];
extern int global_route;

extern const char* image_background;
extern const char* image_button_azure;

extern Asset window;
extern Asset homePageButton[];
extern Asset chessboardPageButton[];
extern Asset archivePageButton[];

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
		settextstyle(fontSize, 0, _T("ËÎÌו"), 0, 0, 500, false, false, false);
		drawtext(text, &textArea, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
}

void render_assets(Asset *assets)
{
		for (int i = 0, length = getAssetsLength(assets); i < length; i++)
		{
				if (assets[i].src) 
				{
						render_image(assets[i].src, assets[i].x, assets[i].y);
				}
				if (assets[i].text)
				{
						render_text(assets[i].text, assets[i].area, assets[i].textColor, assets[i].fontSize);
				}
		}
}

void render_homePage()
{
		render_image(window.src, window.x, window.y, window.width, window.height);
		render_assets(homePageButton);
}
