#include<iostream>

#include<conio.h>

#define PI 3.14

using namespace std;

int dientich(float &s, float r){
	
	s=2*PI*r*r;
	 
	cout<<" Dien tich hinh tron co ban kinh r = "<<r<<", s ="<<s;
}

int main(){
	
	float r,s;
	
	do{
		cout <<" Nhap ban kinh r>0; r = "; cin >>r;
		
		if(r<0) cout <<" \n Nhap sai, nhap lai!\n";
	}
	while(r<0);
	
	dientich(s,r);
	
	getch();
}

