#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<stdlib.h>

using namespace std;

int timsomax(int &max,int a,int b,int c){
	max=a;
	
	if(max < b) max=b;
	
	else if(max < c) max=c;
	
	cout <<" So lon nhat la: "<<max;
	
}

int main(){
	
	int a,b,c,max;
	
	cout <<" Nhap ba so a,b,c: "; cin >> a >> b >> c;
	
	timsomax(max,a,b,c);
	
	getch();
	
}
