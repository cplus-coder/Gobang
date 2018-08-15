#include "../include/control.h"
extern int global_route;

extern Asset homePageButton[];
extern Asset chessboardPageButton[];
extern Asset archivePageButton[];

int searchClickButton(Asset *buttonGroup, short x, short y)
{
		int index = 0;
		while (true)
		{
				if (x > buttonGroup[index].area.left && x < buttonGroup[index].area.right &&
						y > buttonGroup[index].area.top && y < buttonGroup[index].area.bottom)
				{
						return index;
				}
				if (buttonGroup[index].end)
				{
						break;
				}
				index++;
		}
		return -1;
}

void onButtonClick(short x, short y)
{
		switch (global_route)
		{
				case HOME_PAGE:
						switch (searchClickButton(homePageButton, x, y))
						{
								case 0:
										cout << "开始游戏" << endl;
										// setRoute(CHESSBOARD_PAGE);
										// renderChessboardPage()
										break;
								case 1:
										cout << "游戏介绍" << endl;
										break;
								case 2:
										cout << "退出游戏" << endl;
										break;
								case 3:
										cout << "读取存档" << endl;
										break;
								default: break;
						}
						break;
				case CHESSBOARD_PAGE:
						switch (searchClickButton(chessboardPageButton, x, y))
						{
								case 0:
										break;
						}
						break;
				case ARCHIVE_PAGE:
						switch (searchClickButton(archivePageButton, x, y))
						{
								case 0:
										break;
						}
						break;
				default: break;

		};
}

void beginMouseListener() 
{
		MOUSEMSG m;
		while (true)
		{
				m = GetMouseMsg();
				if (m.uMsg == WM_LBUTTONDOWN)
				{
						onButtonClick(m.x, m.y);
						//if (global_route == CHESSBOARD_PAGE)
						//{
						//		dropChess(m.x, m.y);
						//}
				} 
				//else if (m.uMsg == WM_RBUTTONDOWN && global_route == CHESSBOARD_PAGE)
				//{
				//		retractChess(m.x, m.y);
				//}
		}
}