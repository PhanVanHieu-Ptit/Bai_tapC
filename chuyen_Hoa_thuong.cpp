/*#include <stdio.h>
#include <string.h>
 
void to_lower(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
}
 
void to_upper(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
}
 
void to_title(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        if (str[i - 1] == ' ' || i == 0)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
    }
}
 
int main()
{
    char s[100];
    int i;
 
    printf("\nEnter a string : ");
    gets(s);
    to_lower(s);
    printf("\nString in Lowercase = %s", s);
    to_upper(s);
    printf("\nString in Uppercase = %s", s);
    to_title(s);
    printf("\nString in Titlecase = %s", s);
    return 0;
}*/

#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<string.h>

using namespace std;

const int MAX=100;

void to_lower(char s[MAX], int &dem1, char c[MAX] ){
	
	for(int i=0; s[i]!='\0';i++){
		
		if(s[i]>='A' &&s[i]<='Z') {
			
			s[i]+=32;
			
			c[i]=s[i];
			
			dem1++;
		}
	}
	
}
void to_upper(char s[MAX], int &dem2, char c[MAX]){
	
	for(int i=0;s[i]!='\0';i++){
		
		if(s[i]>='a' && s[i]<='z') {
			
			s[i]-=32;
			
			c[i]=s[i];
			
			dem2++;
			
		}
	}
}
void xuat(char s[MAX]){
	
	for(int i=0;i<strlen(s);i++)
	
	 cout<<s[i];
}
void xuatkt( char c[MAX]){
	
	for(int i=0;i<strlen(c);i++)
	
	 cout<<c[i]<<" ";
}
int main(){
	
	char s[MAX],c[MAX]; int dem1=0,dem2=0;
	
	cout<<"Nhap chuoi muon chuyen doi: ";
	
	fflush(stdin);
	
	gets(s);
	
	
	cout<<"\nChuoi nguyen ban: "; xuat(s);
	
	to_lower(s,dem1,c);
	
	cout<<"\nChuoi to_lower: "; xuat(s); 
	
	cout<<"\nDa doi "<<dem1<<" ki tu tu HOA sang thuong";
	
//	cout<<"\nCac ki tu da thay doi: "; xuatkt(c);
	
	to_upper(s,dem2,c);
	
	cout<<"\nChuoi to_upper: "; xuat(s);
	
	cout<<"\nDa doi "<<dem2-dem1<<" ki tu tu thuong sang HOA, so voi ban dau";
	
//	cout<<"\nCac ki tu da bi thay doi: "; xuatkt(c);
	
	return 0;
}
