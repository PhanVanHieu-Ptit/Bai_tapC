#include<iostream>

#include<conio.h>

#include<string.h>

#include<stdio.h>

using namespace std;

void doc(){
	
	FILE *file=fopen("DSSV.txt","r");
	
	char *s="\0";
	
	while(1){
		
		char line[100];
		
		s=fgets(line,100,file);
		
		if(s==NULL) break;
		
		cout<<s;
	}
	fclose(file);
}

int main(){
	
	doc();
	
	return 0;
	
}
