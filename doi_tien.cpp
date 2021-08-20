#include<iostream>

#include<conio.h>

#include<stdio.h>

using namespace std;

int main(){
	
	long x; int t500,t200,t100,t50,t20,t10,t5,t2,t1;
	
	cout <<" Nhap so tien can doi: "; cin >>x;
	
	t500=x/500000; x=x-t500*500000;
	
	t200=x/200000; x=x-t200*200000;
	
	t100=x/100000; x=x-t100*100000;
	
	t50=x/50000; x=x-t50*50000;
	
	t20=x/20000; x=x-t20*20000;
	
	t10=x/10000; x=x-t10*10000;
	
	t5=x/5000; x=x-t5*5000;
	
	t2=x/2000; x=x-t2*2000;
	
	t1=x/1000;
	
	cout<<"\nSo luong cac loai:\n ";
	
	printf("\n Loai 500000: %d to",t500);
	
	printf("\n Loai 200000: %d to",t200);
	
	printf("\n Loai 100000: %d to",t100);
	
	printf("\n Loai 50000: %d to",t50);
	
	printf("\n Loai 20000: %d to",t20);
	
	printf("\n Loai 10000: %d to",t10);
	
	printf("\n Loai 5000: %d to",t5);
	
	printf("\n Loai 2000: %d to",t2);
	
	printf("\n Loai 1000: %d to",t1);
}
