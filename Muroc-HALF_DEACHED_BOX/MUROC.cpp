#include<easyx.h>
#include<conio.h>
#include<windows.h>
#include<graphics.h>
#include<string.h>
#include<stdio.h>
//#include"icdoe.h"
#include "C:\Users\Raspberry-Rat\Desktop\proj2019 1.0\Muroc-HALF_DEACHED_BOX\icd.h"



int main()

{
	bool staticOI = false;
	//char ca;
	//char = _getch;

	initgraph(640, 480);
	bg();

	nofae();
	light();
	//bg();

	dowagn(0);
	IMAGE move;
	// 定义鼠标消息
	ExMessage m;
	// 初始化图形窗口

	int w = 3, h = 3;
	loadimage(&move, _T("1.jpg"), w, h);
	int i;
	while (true) {

		m = getmessage(EX_MOUSE | EX_KEY);
		i/*f(m.x >= 370 && m.x <= 600 && m.y >= 150 && m.y <= 100)
			for (i = 0; i == 254; i += 5)
			{
				if (i == 254)
					goto pd;
				else
					pibok(370, 100, 600, 150,true,RGB(i,i,i),WHITE,15);
					//cleardevice();//清屏（取决于背景色）
					Sleep(3);//延时15ms

			}
		else

			for (i = 254; i > 1; i -= 5)
			{
				if (i == 1)
					goto pd;
				else
					pibok(370, 100, 600, 150, true, RGB(i, i, i), WHITE, 15);
				//cleardevice();//清屏（取决于背景色）
					Sleep(3);//延时15ms

			}*/;
			//pd:
		if (m.x <= 639 && m.x >= 619 && m.y <= 30 && m.y >= 10) {
			setlinecolor(RGB(139, 0, 0));//RGB(0,90,16));
			setfillcolor(RGB(139, 0, 0));
			fillcircle(629, 20, 10);
		}
		else if (m.x <= 614 && m.x >= 594 && m.y <= 30 && m.y >= 10) {
			setlinecolor(RGB(0, 0, 139));//RGB(236,97,15));
			setfillcolor(RGB(0, 0, 139));//RGB(236,97,15));
			fillcircle(604, 20, 10);
		}
		else {
			dowagn(2);
		}
		switch (m.message)
		{
		case WM_LBUTTONUP:
			if (m.x <= 639 && m.x >= 619 && m.y <= 30 && m.y >= 10)
				return 0;

			else if (m.x <= 614 && m.x >= 594 && m.y <= 30 && m.y >= 10)

				ShowWindow(GetHWnd(), SW_MINIMIZE);
			//nofae();

			//GetSystemMetrics(SM_CXSCREEN)

		default:
			break;
		}
		if (m.x <= 370 && m.x >= 600 && m.y <= 150 && m.y >= 100) {
			
			int i = 0;
			for (i; i >= 255; i++)
				pibok(370, 100, 600, 150, true, RGB(i, i, i), WHITE, 15);

			/*for (i; i >= 255; i++)
				pibok(370, 100, 600, 150, true, RGB(i, i, i), WHITE, 15);
				*/

			//370, 100, 600, 150



		}

		//_getch();				// any key to continue
		//closegraph();			// close frame

	//	return 0;

		//key 
	}
}

