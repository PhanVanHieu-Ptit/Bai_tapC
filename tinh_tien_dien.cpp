#include<iostream>

#include<conio.h>

#include<stdio.h>

using namespace std;

int hoadon(int, int);

int main(){
	
	int n,m;
	
	cout <<"Nhap chi so cu : "; cin >> n;
	
	cout <<"\nNhap chi so moi : "; cin >>m;
	
	cout <<"\n Hoa don tien dien:\n\n";
	
	hoadon(n,m);
	
	getch();
}
int hoadon(int n, int m){
	
	int t;
	
	if((m-n)<100) t=(m-n)*500;
	
	else t=50000+(m-n-100)*800;
	
	cout <<" Chi so cu "<<n <<", Chi so moi "<<m;
	
	cout <<"\n Tong so dien da su dung: "<<m-n;
	
	cout <<"\n Tien dien: "<< t <<" dong";
	
	cout <<"\n Phi khu vuc : 5000 dong";
	
	cout <<"\nTong so tien ban phai tra: "<<t+5000<<" dong";
}
