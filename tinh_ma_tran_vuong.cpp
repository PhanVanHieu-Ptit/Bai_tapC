#include<iostream>

#include<conio.h>

#include<stdio.h>

using namespace std;

int n; float a[10][10];

void nhap();

void xuat();

void tong();

void dem();

void cheoc();

void tongc();

int main(){
	
	cout<<"Nhap n: ";cin >>n;
	
	cout<<"Nhap mang:\n ";
	
	nhap();
	
	cout<<"Mang vua nhap:\n\n";
	
    xuat();
    
	cout<<" Tong cac phan tu cua mang: ";
	
	tong();
	
	cout<<"\n Thong ke cac phan tu trong mang nhu sau:\n";
	
	dem();
	
	cout<<"\n Cac phan tu tren duong cheo chinh: ";
	
	cheoc();
	
	tongc();
	
}
void nhap(){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
			cout<<" Nhap A[ "<<i+1<<","<<j+1<<" ] = ";cin>>a[i][j];
		}
	}
}
void xuat(){
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}
void tong(){
	
	int s=0;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			s+=a[i][j];
		}
	}
	cout<<s;
}
void dem(){
	
	int sd=0,sa=0,s0=0;
	
	for(int i=0;i<n;i++){
		
		for(int j=0; j<n;j++){
			
			if(a[i][j]>0) sd++;
			
			else if(a[i][j]<0) sa++;
			
			else s0++;
		}
	}
	printf("\n Co %d so duong trong mang.",sd);
	
	printf("\n Co %d so am trong mang.",sa);
	
	printf("\n Co %d so 0 trong mang.",s0);
}
void cheoc(){
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			
			if(i==j) cout<<a[i][j]<<" ";
		}
	}
}
void tongc(){
	
	int tong=0;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			
			if(i==j) tong+=a[i][j];
		}
	}
	cout<<"\n Tong cac phan tu tren duong cheo chinh: "<<tong;
}
