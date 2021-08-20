#include<iostream>

#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

#include<string.h>


const int MAX=100;

using namespace std;

void nhap(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		
		cin>>a[i];
	}
}
void xuat(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<a[i]<<" ";
		
	}
}
void xoa(int a[MAX], int &n, int i){
	
	for(;i<n-1;i++){
		
		a[i]=a[i+1];
		
	}
}
void xoanhieu(int a[MAX], int &n,  int x,int &d){
	
     
	for(int i=0;i<n;i++){
		
		if(a[i]==x){
			
			xoa(a,n,i);
			
			d++;
			i--;
			n--;
		}
	}
}
int main(){
	int a[MAX],x; int n,d=0;
	
	cout<<"Nhap N: ";cin >>n;
	
	if(n==0) {
	cout<<"Mang rong ";
	return 0;
	}
	
	nhap(a,n);
	
	cout<<"\nMang ban dau: "; 
	
	xuat(a,n);
	
	cout<<"\nNhap phan tu can xoa: "; cin>>x;
	
	xoanhieu(a,n,x,d);
	
	cout<<"\nXoa "<<d<<" Phan tu";
	
	cout<<"\nMang sau khi xoa: ";
	
	xuat(a,n);
	
	getch();
}
