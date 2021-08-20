#include<iostream>

#include<conio.h>

#include<string.h>

using namespace std;

char kitu[128];

int tansuat(char[]);

int main (){
	
	char s[80];
	
	cout <<" Nhap xau ki tu: ";
	
	fflush(stdin);
	
	gets(s);
	
	cout <<"\n Tan suat ca ki tu trong xau:\n\n";
	
	tansuat(s);
	
	for(int i=0;i<128;i++)
	 
	 if(kitu[i])
	 
	 if(i==32) printf("\n Dau cach : %d",kitu[i]);
	 
	 else printf("\n Ki tu %c : %d ",i,kitu[i]);
}
int tansuat(char s[]){
	int n; 
	
	n=strlen(s);
	
	for(int i=0 ;i<128;i++) kitu[i]==0;
	
	for(int i=0 ;i<n;i++) kitu[s[i]]++;
}
	 
	
	
