#include<iostream>

#include<string.h>

#include<conio.h>

using namespace std;

int doi(char s[]);

int main(){
	
	char s[80];
	
	cout <<" Nhap xau ki tu: "; 
	
	fflush(stdin);
	 
	gets(s);
	
	printf(" Chuoi ki tu ban dau: %s ",s);
	
	cout <<"\n Chuoi ki tu sau khi doi: ";
	
	doi(s);
	
	getch();
}
int doi(char s[]){
	
	if(s[0]>='a' && s[0]<='z') s[0]=s[0]-'a'+'A';
	
	for(int i=1;i<strlen(s);i++){
	
		if(s[i]>='A' &&s[i]<='Z') s[i]=s[i]-'A'+'a';
	}
	for(int i=0;i<strlen(s);i++){
		
		cout <<s[i];
	}
}
