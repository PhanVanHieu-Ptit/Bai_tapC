#include<iostream>

#include<string.h>

#include<conio.h>

using namespace std;

int thaythe(char[], char ,char);

int main(){
	
	char s[80],c,u;
	
	cout <<" Nhap xau ki tu: "; 
	
	fflush(stdin);
	
	gets(s);
	
	cout <<" Nhap ki tu can duoc thay the: "; cin >>c;
	
	cout <<" Nhap ki tu thay the: "; cin >>u;
	
	cout <<"\n Xau da duoc thay the tro thanh: ";
	
	thaythe(s,c,u);
	
	getch();
}
int thaythe(char s[],char c, char u){
	
	int n; n=strlen(s);
	
	for(int i=0;i<n;i++){
		
		if(s[i]==c) s[i]=u;
	}
	cout <<s;
}
