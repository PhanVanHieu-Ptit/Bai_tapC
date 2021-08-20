#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

const int MAX=100;

void nhap(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
	cout<<"Nhap phan tu thu "<<i+1<<" : "; cin>>a[i];
	}
}
int timVTmin(int a[MAX], int n){
	
	int min,vt=0;
	
	min=a[0];
	
	for(int i=1;i<n;i++){
		
		if(min>a[i]) {
		
		min =a[i];
		vt=i;
		}
	}
	return vt+1;
}
int timMAX(int a[MAX], int n){
	int max=0;
	
	for(int i=0;i<n;i++){
		
		if(max<a[i]) max=a[i];
	}
	return max;
}
int main(){
	
	int a[MAX],n; cout<<"Nhap n : "; cin >>n;
	
	nhap(a,n);
	
	cout<<"So lon nhat trong mang vua nhap : "<<timMAX(a,n);
	
	cout<<"\nVi tri so nho nhat trong mang: "<<timVTmin(a,n);
	return 0;
}
