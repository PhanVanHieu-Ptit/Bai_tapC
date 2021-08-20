#include<iostream>

#include<stdio.h>

#include<conio.h>

using namespace std;

int SoHoanHao(int n);

int main(){
	
	int n; cout<<"Nhap mot so bat ky: "; cin >>n;
	
	int kq=SoHoanHao(n);
	
	if(kq==1){
		
		printf("%d la so hoan hao",n);
	}
	else printf("%d khong la so hoan hao",n);
}
int SoHoanHao(int n){
	
	int tong=0;
	
	for(int i=1;i<=n/2;i++){
		
		if(n%i==0) tong+=i; 
	}
	if(tong==n) return 1;
	
	return 0;
}
