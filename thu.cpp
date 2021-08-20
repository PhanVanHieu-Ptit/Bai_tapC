#include<iostream>

#include<conio.h>

#include<stdio.h>

const int MAX=100;

using namespace std;

void nhap(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap phan tu thu "<<i+1<<" : "; cin>>a[i];
	}
}
void xuat(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<a[i]<<" ";
	}
}
void swap(int &a, int &b){
	int tg=a;
	a=b; 
	b=tg;
}
void sapxep(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		for(int j=i;j<n;j++){
			
			if(a[i]>a[j]) swap(a[i],a[j]);
		}
	}
}
int tim(int a[MAX], int n){
	
	sapxep(a,n);
	
	return a[1];
}
int timMax(int a[MAX], int n){
	
	int max1, max2;
	
	if(a[0]>a[1]){
		max1=a[0];
		max2=a[1];
	}
	else {
		
		max1=a[1];
		max2=a[0];
	}
	for(int i=2; i<n;i++){
		
		if(a[i]>max1){
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2) max2=a[i];
	}
	return max2;
}
int main(){
	
	int n, a[MAX]; 
	
	cout<<"Nhap n: "; cin>>n;
	
	nhap(a,n);
	
	cout<<"\nMang vua nhap : ";
	
	xuat(a,n);
	cout<<"\nSo lon thu hai trong mang: ";
	
	cout<<timMax(a,n);
	
	return 0;
	
}
