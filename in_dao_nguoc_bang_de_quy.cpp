/*#include <stdio.h>
 
void Reverse(){
    char c;
    scanf("%c", &c);
    if(c != '\n'){
        Reverse();
        printf("%c", c);
    }
}
 
int main(){
    printf("Enter you sentence: ");
    Reverse();
}*/
#include<iostream>

#include<stdio.h>

using namespace std;

void daonguoc(){
	
	char c; scanf("%c",&c);
	
	if(c != '\n'){
		daonguoc();
		
		printf("%c",c);
	}
}
int main(){
	
	cout<<"Nhap xau ban muon dao nguoc: ";
	
	daonguoc();
	
    return 0;
}
