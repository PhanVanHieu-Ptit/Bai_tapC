/*#include<conio.h>

#include<stdio.h>

#include<iostream>

using namespace std;

int d;

void chuyen(int,char,char,char);

int main ()

{int n;

char c;

do

{

d=0;

do

{cout<<"Nhap so tang thap (<10), n="; cin>>n;

}while ((n<1)||(n>9));

chuyen(n,'A','B','C');

cout<<"\nTong so lan chuyen="<<d;

fflush(stdin);

cout<<"\nTiep tuc ? (c/k):"; cin>>c;

}while ((c=='c')||(c=='C'));

}

void chuyen(int n,char a,char b,char c)

{if(n==1)cout<<"\nLan chuyen "<<++d<<" : Tu "<<a<<" sang "<<b;

else

{chuyen(n-1,a,c,b);

chuyen(1,a,b,c);

chuyen(n-1,c,b,a);

}

}*/
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int d;
void chuyen(int , char, char, char);
int main(){
	int n;
	char c;
	do{
		d=0;
		do{
			cout << " Nhap so tang (n<10): "; cin >>n;
		}
		while(n<1 or n>9);
		chuyen(n,'A','B','C');
		cout << "\n Tong so lan chuyen : " <<d;
		fflush(stdin);
		cout<<"\n tiep tuc? (c/k) ";
	}
	while(c=='c' or c=='C');
}
void chuyen(int n, char a, char b, char c){
	if(n==1)
	 cout <<"\n Lan chuyen " << ++d <<" : tu " << a <<" sang "<<b;
	else {
		chuyen(n-1,a,c,b);
		chuyen(1,a,b,c);
		chuyen(n-1,c,b,a);
	}
}
