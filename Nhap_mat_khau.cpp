#include<conio.h>

#include<stdlib.h>

#include<string.h>

#include<stdio.h>

#define mk "mat khau"

void nhap(char s[]){
	
	char c; int i=0;
	
	while(1){
			
		fflush(stdin);
		
		c=getch();
		
		if(c==13) break;
		
		else {
			s[i++]=c; printf("*");
		}
		}		
		
		s[i]='\0';

}
void kiemtra(char s[],int l){
	
	int d=0;
	
	if(strcmp(s,mk)==0) {
		
	 printf("\n Nhap dung !!"); exit(1);
		}
	else if(l==1) printf("\n Nhap sai, het lan nhap !");
			
    else printf("\n Nhap sai, nhap lai! \n");
}
int main(){
	
     char s[9],c;
	
	int l=3;
	
	while(l>0){
		
		printf("Nhap mat khau (toi da 8 ki tu): ");
		
	    nhap(s);
		
		kiemtra(s,l);
		
		l--;
	}
	getch();
}

