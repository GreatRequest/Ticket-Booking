// Scrolling Text 2.cpp : Defines the entry point for the console application.

#include <stdafx.h> // Used with MS Visual C++ 2008 ( or 2010 ) Express. Leave off
								// if using a different compiler
#include <conio.h>
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoXY(int x, int y);
void gotoXY(int x, int y, string text);
void Draw(int style, int col, int row, int length, int amount, bool filled, int shadow);

int main(int)
{
	//           Draw routine
	//  first number = 1 for single line, 2 for a double lines
	// second number = column's across
	//  third number = row's down
	// fourth number = box total length
	//  fifth number = box total height
	//  sixth number = 0 for not filled, 1 for filled 
	//seventh number = 0 for no shadow, 1 for a light shadow, 2 for medium shadow, 3 for a dark shadow and 4 for a solid shadow.

	string PressKey = "- Programmed by whitenite1 - Added flashing box frame on September 14th, 2011 - Press any key to end program...";
	int x, y, len, frame;
	y = 1;
	frame = 2;
	char holder;
	Draw(1, 2, 1, 76, 23, 0, 0);  // Box, 1 line, around screen
	Draw(2, 12, 4, 56, 16, 1, 4); // Box, 2 lines, around screen
	Draw(1, 28, 6, 25, 3, 0, 2);  // Box, 1 line,  for Title
	gotoXY(30, 7, "Scrolling Text Demo 2");
	Draw(2, 23, 13, 36, 3, 0, 2); // Box for moving text
	len = PressKey.length();
	do
	{
		gotoXY(25, 14);
		for (x = 0; x < 32; x++)
			cout << PressKey[x];  // scrolling the string called PressKey
		holder = PressKey[0];
		for (x = 0; x < len; x++)
			PressKey[x] = PressKey[x + 1];
		PressKey[len] = holder;
		Sleep(120);
		Draw(frame, 23, 13, 36, 3, 0, 0);
		y++;
		if (y > 5)
		{
			Draw(frame, 28, 6, 25, 3, 0, 0);
			frame--;
			y = 0;
		}
		if (frame == 0)
			frame = +2;
	} while (_kbhit() == '\0');
	gotoXY(25, 14, "            Good-Bye            ");
	gotoXY(25, 14);
	Sleep(2500);
	return 0;
}

void gotoXY(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}

void gotoXY(int x, int y, string text)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
	cout << text;
}

void Draw(int style, int col, int row, int length, int amount, bool fill, int sw)
{
	// Draws a 1 or 2 line box 
	int a;
	if (sw > 4)
		sw = 4;
	style = (style - 1) * 6;
	char box[12];
	char shdw[5];

	box[0] = '\xDA';//  ┌
	box[1] = '\xBF';//  ┐
	box[2] = '\xC0';//  └
	box[3] = '\xD9';//  ┘
	box[4] = '\xB3';//  │ 
	box[5] = '\xC4';//  ─
	box[6] = '\xC9';//  ╔ 
	box[7] = '\xBB';//  ╗
	box[8] = '\xC8';//  ╚
	box[9] = '\xBC';//  ╝
	box[10] = '\xBA';// ║
	box[11] = '\xCD';// ═
	shdw[1] = '\xB0';// ░
	shdw[2] = '\xB1';// ▒
	shdw[3] = '\xB2';// ▓
	shdw[4] = '\xDB';// █
	char tl, tr, bl, br, side, edge, shadow;
	tl = box[style];
	tr = box[style + 1];
	bl = box[style + 2];
	br = box[style + 3];
	side = box[style + 4];
	edge = box[style + 5];
	shadow = shdw[sw];
	string Line(length - 2, edge);
	string Shadow(length, shadow);
	string Fill(length - 2, ' ');
	gotoXY(col, row);
	cout << tl << Line << tr;
	for (a = 1; a < amount - 1; a++)
	{
		gotoXY(col, row + a);
		cout << side;
		if (fill)
			cout << Fill;
		else
			gotoXY(col + length - 1, row + a);
		cout << side;
		if (sw)
			cout << shadow;
	}
	gotoXY(col, (amount + row) - 1);
	cout << bl << Line << br;
	if (sw)
	{
		cout << shadow;
		gotoXY(col + 1, row + amount, Shadow);
	}
}