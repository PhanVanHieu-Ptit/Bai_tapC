#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<string.h>

#include<mylib.h>

const int gh=80;

void chuchay(int vt, char *s);

void hienchu(char *s, int bd, int kt);

void delay(int n){
	
	int h; 
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++) h+=1;
	}
}


int main(){using namespace std;

	char *s; int vt;
	
	cout<<"Nhap vi tri: "; cin>>vt;
	
	cout<<"Nhap chuoi: "; fflush(stdin);
	
	gets(s);
	
	fflush(stdin);
	
	return 0;
	
}
void chuchay(int vt, char *s){
	
	int cd=strlen(s);
	
	while(1){
	
	     for(int i=0;i<cd;i++){
		
	       system("cls");
			
			for(int j=vt;j!=0;--j) printf("\n");
			
			hienchu(s,cd-i,cd-1);
			
			delay(10);
			//Sleep(500);
		
			
			if(kbhit()) exit(1);
		}
	}
	for(int i=0;i<gh-cd;i++){
		
		clrscr();
		
		for(int j=vt;j!=0;--j) printf("\n");
		
		for(int j=i;j!=0;--j) printf("%s",s);
		
		delay(10);
		//Sleep(500);
		if(kbhit()) exit(1);
	}
	for(int i=cd-1;i!=-1;i--){
		clrscr();
		
		for(int j=vt;j!=0;--j) printf("\n");
		
		for(int j=gh-i-2;j>0;--j) printf(" ");
		
		hienchu(s,0,i);
		
		delay(10);
		//Sleep(500);
		
		if(kbhit()) exit(1);
	}
}
void hienchu(char *s,int bd, int kt){
	
	for(int i=bd; i<=kt; i++)
	
	 printf("%c",s[i]);
}
