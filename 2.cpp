#include<iostream>

#include<conio.h>

#include<stdlib.h>

#include<stdio.h>

using namespace std;

int main (){
	
	int i=1;
	
	while(!kbhit()){
		i++;
		printf("%d ",i);
	}
	
	char c= getch();
	
	printf("\n Ki tu vua nhap la:%c ",c);
}
