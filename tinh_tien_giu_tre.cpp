#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<math.h>

using namespace std;

int tinhtien(float e,float f);

int main(){
	
	int a,b,c,d; float e,f;
	
	cout <<"Nhap gio bat dau:\n nhap gio: "; cin>>a;
	
	cout <<"\n Nhap phut: "; cin>>b;
	
	e=a+1.0*b/60; 
	
	cout <<"\n Nhap gio ket thuc: \n Nhap gio: "; cin >>c;
	
	cout <<"\n Nhap phut: ";cin >>d;
	
	f=c+1.0*d/60;
	
	cout <<"\n So tien ban kiem duoc hom nay : ";
	
	tinhtien(e,f);

}
int tinhtien(float e,float f){
	
    int tien;
    
    if((f-e)<=14 ) tien=(f-e)*15000;
    
    else tien=(f-e-14)*25000+14*15000;

    cout << tien <<" dong.";
    
}
