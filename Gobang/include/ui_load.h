#pragma once
#include <direct.h>
#include <string>
#include <easyx_ex.h>

using namespace std;

void load_homepage();
void load_image(const char* img_path, int width, int height, int x, int y);
void load_image(const char* img_path, int x, int y, COLORREF color);
