#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctime>
//#include<mylib.h>
using namespace std;
int churoi(int s){
	srand(time(NULL));
	int soc=rand()%26+1;
	int i=0;
	while(!kbhit()){
		gotoxy(soc*2,i); cout<<" ";
		gotoxy(soc*2,i+1); cout<<char(64+soc);
		Sleep(s); i++;
	}
	gotoxy(soc*2,i); cout<<" ";
	gotoxy(soc*2,0); cout<<char(64+soc);
	if(i<20){
		char check=getch();
		if(check==char(96+soc) || check==(64+soc)) return 1;
		
		else return 0;
	}
	else {
		gotoxy(soc*2,20);
		cout<<"_";
		return 0;
	}
}
void botri(){
	gotoxy(0,0);
	for(int i=0;i<=5;i++) cout<<"           \n";
	gotoxy(0,0);
	cout<<" ";
	for(char i='A';i<='Z';i++)
	 cout<<" "<<i;
	 gotoxy(0,20);
	 cout<<"____________________________________________";
}
int main(){
	int lv;
	cout<<"Chon cap do:\n\nCap do 1\nCap do2\nCap do 3\nCap do 4\nCap do 5\n"; cin>>lv;
	int d1=0, s=500/lv;
	while(s>0){
		clrscr();
		if(churoi(s)==1){
			d1++;
			gotoxy(0,22);
			cout<<"Ban duoc "<<d1<<" diem !\n";
		}
		else 
			cout<<"\n GAME OVER!!!"; break;
		s-=3;
		gotoxy(0,24);
		system("pause");
		return 0;
}
}
