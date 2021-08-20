/*#include<iostream>
#include<conio.h>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y)
{
     HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE) ; // code design by SEO ANH

     COORD position = {x,y} ;
     SetConsoleCursorPosition(hStdout,position ) ;
}
int main()
{
  char *chuoi=" Hello";
  cout<<"1\n2\n3\n4\n5";
   for(int i=1;;i++)
    {
              gotoxy(i,4);
              cout<<chuoi;
              Sleep(100);
              if(GetKeyState(VK_ESCAPE) & 0x8000) goto thoat;
      
     }
     thoat: cout<<endl<<endl;
     return 0;
} 
*/
#include<iostream>
using namespace std;
#include<conio.h>
#include<iomanip>
#include<windows.h>
#include<cstring>

void gotoxy(short x,short y)
{
    HANDLE hConsoleOutput;
    COORD Cursor_an_Pos = {x,y};
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,Cursor_an_Pos);
}

void move(int x, int y, int s){
	string c = "HELLO, NICE TO MEET YOU!";
	while(y>=0){
		cout<<" ";
		x++;
		gotoxy(x, y);
		cout<<c;
		Sleep(s);
		gotoxy(x-1, y); cout<<" ";
		if(x == 80){
			system("cls");
			cout<<" ";
			x = 0; x++;
			gotoxy(x, y);
			Sleep(s);
		}
	}
}
	
void control(){
	int t = 600;
	while(t>0){
		move(10, 10, t);
		char a = getch();
		while(a == GetAsyncKeyState(VK_UP)){
			t -= 100;
			move(10, 10, t);
		}
	}
}

int main(){
	control();
	getch();
	return 0;
}
