/*#include<conio.h>

#include<stdio.h>

#include<iostream>

using namespace std;

void nhap(float &,float &);

void giaibpt(float,float);

int  main()

{float a,b;

char c;

do

{

nhap(a,b);

giaibpt(a,b);

fflush(stdin);

cout<<"\nTiep tuc ? (c/k):"; cin>>c;

}while ((c=='c')||(c=='C'));

}

void nhap(float &a, float &b)

{cout<<"Nhap cac he so a, b :"; cin>>a>>b;

}

void giaibpt(float a, float b)

{if(a>0)cout<<"Nghiem x>"<<-b/a;

else if(a<0)cout<<"Nghiem x<"<<-b/a;

     else if(b>0) cout<<"Vo so nghiem";

          else cout<<"Vo nghiem";

}*/
#include<stdio.h>
#include<conio.h>
#include<string>
#include<iostream>
using namespace std;
void nhap(float&,float&);
void giaibpt(float,float);
int main(){
	float a,b;
	char c;
	do{
		nhap(a,b);
		giaibpt(a,b);
		cout << "\n tiep tuc ? (c/k) ";cin >>c;
	}
	while(c=='c' or c=='C');
}
void nhap(float&a,float&b){
	cout << "nhap a,b: "; cin >> a >> b;
}
void giaibpt(float a, float b){
	if(a>0)
	 cout << " Bat phuong trinh co nghiem la x >" <<-b/a<<"\n";
	else if(a<0)
	 cout << " Bat phuong trinh co nghiem la x < " << -b/a << "\n";
	else{
		if(b>0)
		 cout <<" Vo so nghiem\n";
		else
		 cout <<" Vo nghiem\n"; 
	}
}
