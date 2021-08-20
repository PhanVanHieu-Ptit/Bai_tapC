#include<conio.h>

#include<stdlib.h>

#include<stdio.h>

#include<ctime>

#include<Windows.h>

#include<string.h>

#include"console.h.h"

#define consoleWidth   80

#define consoleHeigth 25


enum trangthai{up,down,LEFT,RIGHT};

struct chuchay{
	char s[31];
	int y,x;
	trangthai tt;
};
int main(){
    srand(time(NULL));
    
	chuchay A;
	
	strcpy(A.s," Hello ban dang lam game!");
	
	A.y=0;
	A.x=(consoleWidth -strlen(A.s))/2;
	A.tt=down;
	while(1){
		
		clrscr();
		int a=1+rand()%9;
		gotoxy (A.x,A.y);
	    //system("color a");
	    TextColor(14);
	    printf("%s",A.s);
		
		// xu ly cham bien
		
		if(A.y>=consoleHeigth-1) A.tt=up;
		
		else if(A.y<=0) A.tt=down;
		
		else if(A.x<=0) A.tt = RIGHT;
		
		else if(A.x>=consoleWidth - 1) A.tt=LEFT;
		
		// dieu khien
		if(kbhit()){ // phat hien co phim an vao
			
			char key=getch();
			
			if(key=='a'|| key=='A') A.tt=LEFT;
			
			else if(key=='d'|| key=='D') A.tt=RIGHT;
			
			else if(key=='w' || key=='W') A.tt=up;
			
			else if(key=='s' || key=='S') A.tt=down;
			
			
		}
		
		if(A.tt==down) A.y++;
		
		else if(A.tt==up) A.y--;
		
		else if(A.tt==LEFT) A.x--;
		
		else if(A.tt==RIGHT) A.x++;
		
		Sleep(100);// 1 nhip game
	}
}
/*#include <windows.h>
#include <iostream>
//setColor
using namespace std;
int main() {
    HANDLE hConsoleColor;
    hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
    for(int k=0;k<=255;k++) {
        SetConsoleTextAttribute(hConsoleColor, k);
        cout << k << " - Change color!  ";
        if (k%3==0) cout << endl;
    }
    return 0;
}*/
