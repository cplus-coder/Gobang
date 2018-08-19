#pragma once
#include <easyx_ex.h>
#include <direct.h>
#include <iostream>
#include <string>
#include <conio.h>
#include "./ui.h"
#include "./main.h"
#include "./control.h"


using namespace std;

struct Asset { //three types of Asset: only src represent background image£¬only text, and have both src,text represent button
		int x;
		int y;
		int width;
		int height;
		const char* src;
		bool assetsEnd;
		const char* text;
		RECT area;
		COLORREF textColor;
		int fontSize;
		UINT uFormat;
};

int getAssetsLength(Asset assets[]);