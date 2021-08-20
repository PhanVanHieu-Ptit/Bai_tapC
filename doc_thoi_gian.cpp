#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<string.h>

#include<math.h>

using namespace std;

int docx(long long);

int docy(long long);

int chuyenx(long long);

int chuyeny(long long);

int chuyens(long long);

int main(){
	
	long long x,y,s;
	char a[9];
	cout <<"  Nhap x<1000000, x = "; cin >>x;
	
	cout <<"\n Nhap y<1000000, y = "; cin >>y;
	
	cout <<"\n X Duoc doc la : ";
	
	docx(x);
	
	cout <<"\n Y Duoc doc la: ";
	
	docy(y);
	 
	  s=x+y;
	  
	cout<<"\nTong X + Y = "<<s<<" giay";
	
	cout<<"\n x Sau khi chuyen tu "<<x<<" giay, thanh: ";
	
	chuyenx(x);
	
	cout<<"\n y Sau khi chuyen tu "<<y<<" giay, thanh: ";
	
	chuyeny(y);
	
	cout<<"\n s Sau khi chuyen tu "<< s <<" giay thanh: ";
	
	chuyens(s);
}
int docx(long long x){
	
	char a[9][6]={"Mot","Hai","Ba","Bon","Nam","Sau","Bay","Tam","Chin"};
	
	int trng,chng,ng,tram,chuc,dv,ngng;
	
	ngng=x/1000;  tram=(x/100)%10; chuc=(x/10)%10; dv=x%10;
	
	if(ngng){
		
	 trng=ngng/100; chng=(ngng/10)%10; ng=ngng%10;
	 
	 if(trng>=1) cout <<a[trng-1]<<" tram "	;
	 
	 if(chng==1) cout <<" muoi ";
	 
	 else if(chng>1) cout<<a[chng-1]<<" muoi ";
	 
	 cout<<a[ng-1]<<" ngan ";
	}
	if(tram>=1) cout <<a[tram -1]<<" tram ";
	
	if(chuc==1) cout <<" muoi ";
	
	else if(chuc>1) cout <<a[chuc-1]<<" muoi ";
	
	if(dv) cout <<a[dv-1] <<" giay ";
	
	
}
int docy(long long y){
	
	char a[9][6]={"Mot","Hai","Ba","Bon","Nam","Sau","Bay","Tam","Chin"};
	
	int trng,chng,ng,tram,chuc,dv,ngng;
	
	ngng=y/1000;  tram=(y/100)%10; chuc=(y/10)%10; dv=y%10;
	
	if(ngng){
		
	 trng=ngng/100; chng=(ngng/10)%10; ng=ngng%10;
	 
	 if(trng>=1) cout <<a[trng-1]<<" tram "	;
	 
	 if(chng==1) cout <<" muoi ";
	 
	 else if(chng>1) cout<<a[chng-1]<<" muoi ";
	 
	 cout<<a[ng-1]<<" ngan ";
	}
	if(tram>=1) cout <<a[tram -1]<<" tram ";
	
	if(chuc==1) cout <<" muoi ";
	
	else if(chuc>1) cout <<a[chuc-1]<<" muoi ";
	
	if(dv) cout <<a[dv-1]<<" giay ";	
}
int chuyenx(long long x){
	
	int gio,phut,giay;
	
	gio=x/3600; x=x-gio*3600; phut=x/60; x=x-phut*60; giay=x;
	
	cout<<gio<<" gio "<<phut<<" phut "<<giay<<" giay ";
}
int chuyeny(long long y){
	
	int gio,phut,giay;
	
	gio=y/3600; y=y-gio*3600; phut=y/60; y=y-phut*60; giay=y;
	
	cout<<gio<<" gio "<<phut<<" phut "<<giay<<" giay ";
}
int chuyens(long long s){
	
	int gio,phut,giay;
	
	gio=s/3600; s=s-gio*3600; phut=s/60; s=s-phut*60; giay=s;
	
	cout<<gio<<" gio "<<phut<<" phut "<<giay<<" giay ";
}
