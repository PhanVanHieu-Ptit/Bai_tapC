/*#include<iostream>

#include<conio.h>

#include<stdio.h>

using namespace std;

int fibo(int n){
	
	int f0=1, f1=1, f2;
	
	for(int i=2; i<=n;i++){
		
		f2=f0+f1;
		
		f0=f1;
		
		f1=f2;
	}
	return f2;
}

int main(){
	
	int n; cout<<"Nhap n: "; cin>>n;
	
	cout<<"fibo = "<<fibo(n);
	
	getch();
}*/
#include<stdio.h>

#include<conio.h>

int fibo(int n){
	
	if(n==0 || n==1) return 1;
	
	else return fibo(n-1) + fibo(n-2);
}
int main(){
	
	int n; printf("Nhap n : "); scanf("%d",&n);
	
	printf("fibo = %d",fibo(n));
	
	getch();
}
