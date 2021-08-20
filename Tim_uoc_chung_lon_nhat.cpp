/*#include<conio.h>

#include<stdio.h>

#include<iostream>

using namespace std;

int usc(int,int);

int bsc(int,int);

int main()

{int a,b,d,p;

char c;

do

{

do

{cout<<"Nhap 2 so nguyen duong a, b : "; cin>>a>>b;

}while((a<=0)||(b<=0));

d=usc(a,b);

p=bsc(a,b);

cout<<"USCLN("<<a<<","<<b<<")="<<d;

cout<<"\nBSCNN("<<a<<","<<b<<")="<<p;

fflush(stdin);

cout<<"\nTiep tuc ? (c/k):"; cin>>c;

}while ((c=='c')||(c=='C'));

}

int usc(int a, int b)

{if(a*b==0)return a+b;

else if(a>b)return usc(a-b,b);

     else return usc(a,b-a);

}

int bsc(int a, int b)

{return a*b/usc(a,b);

}*/
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int usc(int,int);
int bsc(int, int);
int main(){
	int a,b,d,p;
	char  c;
	do{
		do{
			cout << " Nhap so nguyen duong a,b: "; cin>> a >> b;
		}
		while(a<=0 or b<=0);
		d=usc(a,b);
		p=bsc(a,b);
		cout <<"UCLN cua ("<<a<<" , "<<b<<") = "<<d<<"\n";
		cout <<"BCNN cua ("<<a<<" , "<<b<<") = "<<p<<"\n";
		fflush(stdin);
		cout <<"tiep tuc? (c/k) "; cin >> c;
	}
	while(c=='c' or c=='C');
	}
int usc(int a, int b) {
	if(a*b==0)
	 return a+b;
	else if (a>b)
	 return usc(a-b,b);
	else
	 return usc(a,b-a);
	}
int bsc(int a,int b){
	return a*b/usc(a,b);
}		

