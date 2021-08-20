#include<iostream>

#include<conio.h>

#include<string.h>

using namespace std;

int tach(char[]);

int main(){
	
	char s[30];
	
	cout <<" Nhap ho va ten: "; 
	
	fflush(stdin);
	
	gets(s);
	
	cout <<" Ten ban sau khi tach ra da tro thanh:\n\n ";
	
	tach(s);
	
	getch();
}
int tach(char s[]){
	
	int d=0;
	
	for(int i=0; i<strlen(s);i++){
		
		if(s[i]==32) break;
		
		d++;
	}
	cout <<"Ho : ";
	
	for(int i=0;i<d;i++) cout <<s[i];
	 
	 cout <<"\n Ten : ";
	 
	for(int i=d+1;i<strlen(s);i++)cout <<s[i]; 
}
