/*#include<stdio.h>

#include<conio.h>

#include<math.h>;//chua hang so pi la M_PI

int main()

{float pi,t,n,eps,dau;

printf("Nhap sai so eps=");scanf("%f",&eps);

pi=0;t=4;n=dau=1;

do

{pi+=dau*t; n=n+2;

dau=-dau; t=4/n;

}while (t>=eps);

printf("\nSo PI tinh duoc voi sai so %12.10f, PI=%12.10f\n",eps,pi);

printf("\nSo PI cua Turbo C++, PI=%12.10f\n",M_PI);

getch();

}*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	float pi,n, t, dau, eps;
	cout << " Nhap sai so eps: "; cin >>eps;
	pi=0; t=4; n=dau=1;
	do{
		pi+=t*dau; n=n+2;
		dau=-dau; t=t/n;
	}
	while(t>eps);
	cout <<" So pi duoc tinh voi sai so " << eps <<" la " <<pi<<"\n";
	cout << "So pi cua turpo C++ "<< M_PI;
	return 0;
	
}
