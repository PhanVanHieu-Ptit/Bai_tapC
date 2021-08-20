#include<iostream>

#include<conio.h>

using namespace std;

int giaihpt(float,float,float);

int main(){
	
	float a,b,c,a2,b2,c2,d,d2,d3;
	
	cout <<" Nhap a = "; cin >>a;
	
	cout <<"\nNhap b = "; cin >>b;
	
	cout <<"\nNhap c = "; cin >>c;
	
	cout <<"\nNhap a' = "; cin>>a2;
	
	cout <<"\nNhap b' = "; cin>>b2;
	
	cout <<"\nNhap c' = "; cin>>c2;
	
	 d=a*b2-a2*b;
	 
	 d2=c*b2-c2*b;
	 
	 d3=a*c2- a2*c;
	 
	 cout <<" He phuong trinh co nghiem la: ";
	 
	 giaihpt(d,d2,d3);
	 
}
int giaihpt(float d, float d2, float d3){
	
	if(d!=0) cout <<" x = "<<d2/d<<"\n y = "<<d3/d;
	
	else if((d2!=0) || (d3!=0)) cout <<" He phuong trinh vo nghiem!";
	
	else cout <<"He phuong trinh vo dinh!";
}
