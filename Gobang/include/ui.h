#pragma once
#include "./global.h"
#define WINDOW_WIDTH 720
#define WINDOW_HEIGHT 480

#define NONE_CHESS 0
#define WHITE_CHESS 1
#define BLACK_CHESS 2

#define setRoute(path) (global_route = path);
#define HOME_PAGE 0
#define CHESSBOARD_PAGE 1
#define ARCHIVE_PAGE 2
#define INTRODUCE_PAGE 3

#define BUTTON_STYLE DT_CENTER | DT_VCENTER | DT_SINGLELINE
#define TEXT_STYLE DT_WORDBREAK

using namespace std;

void renderPage(int pageName);
void renderImage(const char* img_path, int width, int height, int x, int y);
void renderText(const char* text, RECT textArea, COLORREF color, int fontSize);
