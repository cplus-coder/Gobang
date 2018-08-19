#include "../include/control.h"
extern int global_route;

extern Asset homePageButton[];
extern Asset chessboardPageButton[];
extern Asset introducePageButton[];
//extern Asset archivePageButton[];

int searchClickButton(Asset *buttonGroup, short x, short y)
{
		int index = 0;
		for (int index = 0, length = getAssetsLength(buttonGroup); index < length; index++)
		{
				if (x > buttonGroup[index].area.left && x < buttonGroup[index].area.right &&
						y > buttonGroup[index].area.top && y < buttonGroup[index].area.bottom)
				{
						cout << "MouseLeft click at (" << x << "," << y << ";Click At Button: " << buttonGroup[index].text << endl;
						return index;
				}
		}
		cout << "MouseLeft click at (" << x << "," << y << ");invalid Click" << endl;
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
										setRoute(CHESSBOARD_PAGE);
										renderPage(CHESSBOARD_PAGE);
										break;
								case 1:
										break;
								case 2:
										break;
								case 3:
										break;
								default: 
										break;
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
						//switch (searchClickButton(archivePageButton, x, y))
						//{
						//		case 0:
						//				break;
						//}
						//break;
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