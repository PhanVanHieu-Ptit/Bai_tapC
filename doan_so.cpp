#include<iostream>

#include<conio.h>

#include<stdlib.h>

#include<ctime>

using namespace std;

int main(){
	
	int n;
	
	int l=5; 
	
	int  d=0;
	
	srand(time(NULL));
	
	int a=rand()%100 +0;
	
	cout<<"Tro choi doan an so\n";
	
	cout<<"\n Ban hay nhap tu ban phim mot so tu 0 - 100\n";
	
	cout<<"\n Ban co tat ca 5 luot doan\n";
	
	while(l>0){
	
	cout<<"\nNhap so ban doan n = "; cin>>n;
	
	if(n<a) cout<<"\n So ban doan nho hon \n";
	
	else if(n>a) cout<<"\n So ban doan lon hon\n";
	
	else {
		d=1; break;
	}
	
	l--;
	
	}
	if(d) {cout<<"\n Chuc mung ban da doan trung !\n Ban gioi that day, toi kham phuc ban !\n";
		
		cout<<"\n BAN THANG !!! @@\a";
	
	}
	else cout<<"\n\nBan da thua. May thang!";
	
	cout<<"\n Dap an: "<<a;
}
