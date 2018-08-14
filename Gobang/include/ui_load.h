#pragma once
#include <direct.h>
#include <string>
#include <easyx_ex.h>
#include <iostream>

using namespace std;

void render_homepage();
void render_image(const char* img_path, int width, int height, int x, int y);
void render_image(const char* img_path, int x, int y);
void render_text(const char* text, RECT textArea, COLORREF color, int fontSize)
