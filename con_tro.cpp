#include<iostream>

#include<stdio.h>

using namespace std;

const int MAX=100;

int main(){
	
	int s[MAX],n; 
	
	cout<<"Nhap n: "; cin >>n;
	
	int *p=&s[0];
	
	for(int i=0;i<n;i++){
		
	printf(" Nhap A[%d] = ",i+1);
	
	scanf("%d",(p+i));
	}
	
	for(int i=0;i<n;i++){
		
		printf(" Gia tri cua A[%d] = %d\n",i,*(p+i));
	}
	int sum=0;
     for(int *i=&s[0]; i<=&s[n-1];i++){
     	
     	sum+=*i;
	 }
	printf("\nTong = %d",sum);
	return 0;
}
