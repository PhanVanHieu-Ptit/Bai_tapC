/*#include <stdio.h>
#include <conio.h>
int main()
{int t,t100,t20,t5;

 printf("Nhap so tien t=");scanf("%d",&t);
 t100=t/100;t-=100*t100; t20=t/20;t-=20*t20; t5=t/5;t-=5*t5;
 printf("So to cac loai menh gia la :\n");
 printf("Loai 100 : %d to\n",t100);
 printf("Loai 20 : %d to\n",t20);
printf("Loai 5 : %d to\n",t5);
printf("Loai 1 : %d to\n",t);
printf("Tong so to cac loai la : %d\n",t+t5+t20+t100);
 getch();
}*/
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main(){
	int t,t100,t20,t5;
	//printf(" Nhap so tien t = "); scanf("%d",&t);
	cout << " Nhap so tien t = "; cin >> t;
	t100=t/100;
	t-=100*t100;
	t20=t/20;
	t-=20*t20;
	t5=t/5;
	t-=5*t5;
	//printf("So cac loai to tien menh gia cu the nhu sau:\n");
	cout << " So loai cac to tien nhu sau: \n";
	//printf("Loai 100 : %d to\n",t100 );
	cout << " Loai 100 : " << t100 <<" to\n";	
	//printf("Loai 20 : %d to\n ",t20);
	cout << " Loai 20 :" << t20 <<" to\n";
	//printf("Loai 5 : %d to\n ",t5);
	cout << " Loai 5 : " << t5 << " to\n";
	//printf("Loai 1 : %d to\n",t);
	cout << " Loai 1 : " << t << " to\n";
	//printf(" Tong so cac to loai to tien la : %d\n",t+t5+t20+t100);
	cout << " Tong so cac to tien la : " << t+t5+t20+t100 <<"\n";
	//getch();
	return 0;
	}
