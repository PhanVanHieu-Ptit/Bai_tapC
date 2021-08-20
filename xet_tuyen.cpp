#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<math.h>

using namespace std;

int xettuyen(float, float, float );

int main(){
	
	char ht[30]; float l1,l2,ck;
	
	cout <<" Nhap ho ten thi sinh: "; 
	
	gets(ht);
	
	cout <<" \n Nhap diem lan 1:  "; cin >>l1;
	
	cout <<"\n Nhap diem lan 2: "; cin >>l2;
	
	cout <<"\n Nhap diem cuoi ky: "; cin >>ck;
	
	xettuyen(l1,l2,ck);
}
int xettuyen(float l1,float l2, float ck){
	
	float kq,max;
	
	max=(l1+l2+ck)/3;
	
	if(max<ck) max=ck;
	
	if(max>=7) cout <<"\n Chuc mung ban da trung tuyen !!!";
	
	else cout <<"\n Ban truot . ";
	
}
