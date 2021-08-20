#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include "console.h"

#define consoleWidth 80
#define consoleHeight 25
void clrscr()
{
	CONSOLE_SCREEN_BUFFER_INFO	csbiInfo;                  
	HANDLE	hConsoleOut;
	COORD	Home = {0,0};
	DWORD	dummy;

	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOut,&csbiInfo);

	FillConsoleOutputCharacter(hConsoleOut,' ',csbiInfo.dwSize.X * csbiInfo.dwSize.Y,Home,&dummy);
	csbiInfo.dwCursorPosition.X = 0;
	csbiInfo.dwCursorPosition.Y = 0;
	SetConsoleCursorPosition(hConsoleOut,csbiInfo.dwCursorPosition);
}
void gotoXY (int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
struct Chuchay
{
    char s[31];
    int y,x; // y la tung do, x la hoanh do
};

int main(){
	
	int i;
	for( int i=0; i<20;i++)
	gotoXY(i,10);
	cout<< "hello";
	clrscr();
	
	return 0;
}
