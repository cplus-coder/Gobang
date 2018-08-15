#pragma once
#include <easyx_ex.h>
#include <direct.h>
#include <iostream>
#include <string>
#include <conio.h>
#include "./ui.h"
#include "./main.h"
#include "./control.h"
#define NONE_CHESS 0
#define WHITE_CHESS 1
#define BLACK_CHESS 2

using namespace std;

struct Asset { //three types of Asset: only src represent background image£¬only text, and have both src,text represent button
		int x;
		int y;
		int width;
		int height;
		const char* src;
		const char* text;
		RECT area;
		COLORREF textColor;
		int fontSize;
		bool end;
};

int getAssetsLength(Asset assets[]);