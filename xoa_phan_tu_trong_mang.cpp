#include<iostream>

#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

#include<string.h>


const int MAX=100;

using namespace std;

void nhap(char a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		
		cin>>a[i];
	}
}
void xuat(char a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<a[i]<<" ";
	}
}
void xoa(char a[MAX], int &n,  int x){	
	for(int i=0;i<n;i++){
		
	if(a[i]==x){
		
		for(int j=i;j<n-1;j++){
			
			a[j]=a[j+1];
			
			n--;
			
			j--;
			
		}
	} 
	}
	
}

int main(){
	char a[MAX],x; int n;
	
	cout<<"Nhap N: ";cin >>n;
	
	nhap(a,n);
	
	cout<<"\nMang ban dau: "; 
	
	xuat(a,n);
	
	cout<<"\nNhap phan tu can xoa: "; cin>>x;
	
	xoa(a,n,x);
	
	cout<<"\nMang sau khi xoa: ";
	
	xuat(a,n);
	
	getch();
}
