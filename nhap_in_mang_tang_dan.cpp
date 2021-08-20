/*#include<stdio.h>

#include<conio.h>

#include<string.h>

char ds[100][10];

void nhap(int);

void sapxep(int);

void inds(int n);

int main()

{int n;

printf("\nNhap so luong sinh vien n="); scanf("%d",&n);

nhap(n);

printf("\nDanh sach theo thu tu nhap:\n");

inds(n);

sapxep(n);

printf("\nDanh sach theo van ABC:\n");

inds(n);

getch();

}

void nhap(int n)

{int i;

printf("Nhap ten %d sinh vien:\n",n);

for(i=0;i<n;i++)

{printf("SV thu %d : ",i+1);

fflush(stdin);

gets(ds[i]);

}

}

void inds(int n)

{int i;

for(i=0;i<n;i++) puts(ds[i]);

}

void sapxep(int n)

{int i,j;

char tg[10];

for(i=0;i<n-1;i++)

for(j=i+1;j<n;j++)

if(strcmpi(ds[i],ds[j])>0)

{strcpy(tg,ds[i]);

strcpy(ds[i],ds[j]);

strcpy(ds[j],tg);

}

} */

#include<iostream>

#include<conio.h>

#include<stdlib.h>

#include<string.h>

using namespace std;

char ds[100][10];

void nhap(int);

void sapxep(int);

void inds(int n);

int main(){
	
	int n;
	
	printf(" Nhap so luong sinh vien:"); scanf("%d",&n);
	
	nhap(n);
	
	printf("\n Danh sach luc nhap: \n");
	
	inds(n);
	
	sapxep(n);
	
	printf("\n Danh sach theo bang chu cai ABC:\n");
	
	inds(n);
	
	getch();
}

void nhap(int n){
	
	int i;
	
	printf("\n Nhap %d sinh vien:\n",n);
	
	for(i=0;i<n;i++){
		
		printf(" Nhap ten sinh vien thu %d : ",i+1);
		
		fflush(stdin);
		
		gets (ds[i]);
	}
}

void inds( int n){
	
	int i;
	
	for(i=0;i<n;i++) puts(ds[i]);
}

void sapxep(int n){
	
	int i,j;
	
	char tg[10];
	
	for(i=0;i<n-1;i++){
		
		for(j=i+1;j<n;j++){
			
		if(strcmpi(ds[i],ds[j])>0){
		
		strcpy(tg,ds[i]);
		
		strcpy(ds[i],ds[j]);
		
		strcpy(ds[j],tg);
	                             }
	                      }
	                    }		
		}
		
