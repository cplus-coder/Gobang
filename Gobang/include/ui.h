#pragma once
#include "./global.h"
#define HOME_PAGE 0
#define CHESSBOARD_PAGE 1
#define ARCHIVE_PAGE 2
#define setRoute(path) (global_route = path);

using namespace std;

void render_homePage();
void render_chessboardPage();
void render_image(const char* img_path, int width, int height, int x, int y);
void render_image(const char* img_path, int x, int y);
void render_text(const char* text, RECT textArea, COLORREF color, int fontSize);
