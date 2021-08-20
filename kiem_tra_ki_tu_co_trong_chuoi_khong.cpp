/*#include <stdio.h>
#include <string.h>

char kiemtra(char chuoi[100], char n)
{
    int i, dem = 0;
    for (i = 0; i < strlen(chuoi); i++)
    {
        if (chuoi[i] == n)
        {
            dem++;
        }
    }
    if (dem > 0)
    {
        printf("\nki tu %c trong chuoi xuat hien %d lan ", n, dem);
    }
    if (dem == 0)
    {
        return 1;
    }
}
int main()
{
    char chuoi[100], n;
    int dem = 0;
    printf("nhap chuoi: ");
    gets(chuoi);
    printf("chuoi vua nhap la : %s", chuoi);
    printf("\nxin moi ban nhap vao ki tu can dem\n");
    scanf("%c", &n);
    if (kiemtra(chuoi, n) == 1)
    {
        printf("\nki tu %c khong co trong chuoi\n", n);
    }
}*/
#include<iostream>

#include<string.h>

#include<conio.h>

#include<stdio.h>

using namespace std;

const int MAX=100;

void kiemtra(char s[MAX], char c, int &dem){
	
	for(int i=0; i<strlen(s);i++){
		
		if(s[i]==c) dem++;
	}
	
	//printf("\nKi tu %c xuat hien %d lan",c,dem);
	
//	return dem;
}

int main(){
	
	char s[MAX],c;
	
	int dem=0;
	
	cout<<"Nhap xau ki tu: "; fflush(stdin);
	
	gets(s);
	
	cout<<"Nhap ki tu can kiem tra: "; cin>>c;
	
	kiemtra(s,c,dem);
	
    cout<<"\n so lan: "<<dem;
	
	return 0;
}
