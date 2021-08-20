/*#include<conio.h>

#include<stdio.h>

#include<iostream>

using namespace std;

long gtc(long);

int  main()

{long n;

char c;

do

{

do

{cout<<"Nhap so nguyen duong n : "; cin>>n;

}while (n<1);

cout<<n<<"!!="<<gtc(n);

fflush(stdin);

cout<<"\nTiep tuc ? (c/k):"; cin>>c;

}while ((c=='c')||(c=='C'));

}

long gtc(long n)

{if((n==0)||(n==1))return 1;

else return n*gtc(n-2);

}*/
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
long gtc(long);
int main(){
	int n;
	char c;
	do{
		do{
		cout <<" Nhap so nguyen duong : ";cin >> n;
	}
	while(n<0);
	cout << n<< "!! = " << gtc(n);
	cout << " \n Tiep tuc ? (c/k) "; cin >>c;	
}
 while(c=='c' or c=='C');
 }
 long gtc (long n){
 	if(n==0 or n==1) return 1;
 	else return n*gtc(n-2);
 }
 
