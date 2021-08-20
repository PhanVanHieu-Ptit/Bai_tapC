/*#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
 
const int MAX_CHAR=80;
const int MAX_LINE=25;
 
void delay(int n);
void runText(int yPos,char* string);
void showText(char* string,int startPos,int endPos);
 
int main()
{
    char string[MAX_CHAR];
    int yPos;
    printf("\nNhap vao xau can chay:");
    fflush(stdin);
    gets(string);
    fflush(stdin);
    printf("\nNhap vao vi tri can chay:");
    scanf("%d",&yPos);
    runText(yPos,string);
    fflush(stdin);
    getch();
}
 
void delay(int n)
{
    int h;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) h+=1;
    }
}
 
void runText(int yPos,char* string)
{
    int str_len = strlen(string);
 
    while(1)
    {
        //Hien thi chu o bien trai
        for(int i=0;i<str_len;i++)
        {
            system("cls");
            for(int j=yPos;j!=0;--j)
            {
                printf("\n");
            }
 
            showText(string,str_len-i,str_len-1);
            delay(10);
            if(kbhit()) exit(1);
        }
        //Hien thi chu o giua man hinh
        for(int i=0;i<MAX_CHAR-str_len;i++)
        {
            system("cls");
            for(int j=yPos;j!=0;--j)
            {
                printf("\n");
            }
 
            for(int j=i;j!=0;--j)
            {
                printf(" ");
            }
 
            printf("%s",string);
            delay(10);
 
            if(kbhit()) exit(1);
        }
        //Hien thi chu o bien phai
        for(int i=str_len-1;i!=-1;i--)
        {
            system("cls");
            for(int j=yPos;j!=0;--j)
            {
                printf("\n");
            }
            for(int j=MAX_CHAR-i-2;j>=0;--j)
            {
                printf(" ");
            }
            showText(string,0,i);
            delay(10);
 
            if(kbhit()) exit(1);
        }
    }
}
void showText(char* string,int startPos,int endPos)
{
    for(int i=startPos;i<=endPos;i++)
    {
        printf("%c",string[i]);
    }
}*/
/*#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
 
const int consoleWidth=80;

 
void delay(int n);
void chuchay(int bd,char* s);
void hienchu(char* s,int bd,int kt);
 
int main()
{
    char s[consoleWidth];
    int vt;
    printf("\nNhap vao xau can chay:");
    fflush(stdin);
    gets(s);
    fflush(stdin);
    printf("\nNhap vao vi tri can chay:");
    scanf("%d",&vt);
    chuchay(vt,s);
    fflush(stdin);
    getch();
}
 
void delay(int n)
{
    int h;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) h+=1;
    }
}
 
void chuchay(int vt,char* s)
{
    int cd = strlen(s);
 
    while(1)
    {
        //Hien thi chu o bien trai
        for(int i=0;i<cd;i++)
        {
            system("cls");
            for(int j=vt;j!=0;--j)
            {
                printf("\n");
            }
 
            hienchu(s,cd-i,cd-1);
            delay(10);
            if(kbhit()) exit(1);
        }
        //Hien thi chu o giua man hinh
        for(int i=0;i<consoleWidth-cd;i++)
        {
            system("cls");
            for(int j=vt;j!=0;--j)
            {
                printf("\n");
            }
 
            for(int j=i;j!=0;--j)
            {
                printf(" ");
            }
 
            printf("%s",s);
            delay(10);
 
            if(kbhit()) exit(1);
        }
        //Hien thi chu o bien phai
        for(int i=cd-1;i!=-1;i--)
        {
            system("cls");
            for(int j=vt;j!=0;--j)
            {
                printf("\n");
            }
            for(int j=consoleWidth-i-2;j>=0;--j)
            {
                printf(" ");
            }
            hienchu(s,0,i);
            delay(10);
 
            if(kbhit()) exit(1);
        }
    }
}
void hienchu(char* s,int bd,int kt)
{
    for(int i=bd;i<=kt;i++)
    {
        printf("%c",s[i]);
    }
}*/
#include<conio.h>

#include<stdio.h>

#include<iostream>

#include<string.h>

#define consoleWidth 80

using namespace std;

void delay(int n);

void hienchu(char* s, int bd, int kt);

void chuchay(int vt, char* s);

int main(){
	
	char s[consoleWidth];
	
	int vt;
	
	cout<<"Nhap xau ki tu: ";
	
	fflush(stdin);
	
	gets(s);
	
	cout<<"\n Nhap vi tri: ";
	
	scanf("%d",&vt);
	
	chuchay(vt,s);
	
	fflush(stdin);
	
	getch();
}
void delay(int n){
	
	int h;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++) h+=1;
	}
}
void chuchay(int vt, char* s){
	
	int cd=strlen(s);
	
	while(1){
		
		for(int i=0;i<cd;i++){
			
			system("cls");
			
			for(int j=vt;j!=0;--j) printf("\n");
			
			hienchu(s,cd-i,cd-1);
			
			delay(10);
			
			if(kbhit()) exit(1);
		}
		
		for(int i=0;i<consoleWidth-cd;i++){
			
			system("cls");
			
			for(int j=vt;j!=0;--j) printf("\n");
			
			for(int j=i;j!=0;--j) printf(" ");
			
			printf("%s",s);
			
			delay(10);
			
			if(kbhit()) exit(1);
			
			
		}
		
		/*for(int i=cd-1;i!=-1;i--){
			
			system("cls");
			
			for(int j=vt;j!=0;--j); printf("\n");
			
			for(int j=consoleWidth-i-2;j>=0;--j) printf(" ");
			
			hienchu(s,0,i);
			
			delay(10);
			
			if(kbhit()) exit(1);*/
			
			for(int i=cd-1;i!=-1;i--)
        {
            system("cls");
            for(int j=vt;j!=0;--j)
            {
                printf("\n");
            }
            for(int j=consoleWidth-i-2;j>=0;--j)
            {
                printf(" ");
            }
            hienchu(s,0,i);
            delay(10);
 
            if(kbhit()) exit(1);
		
		}
	}
}
void hienchu(char* s, int bd, int kt){
	
	for(int i=bd;i<=kt;i++)
	
	 printf("%c",s[i]);
}

