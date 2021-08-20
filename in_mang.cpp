#include<iostream>

#include<conio.h>

using namespace std;

void nhap(float a[],int n);

void somax(float a[],int n);

void somin(float a[],int n);

void sotb(float a[],int n);

int main(){
	
	float a[100],max,min,tb; int n;
	
	cout<<"Nhap n: "; cin>>n;
	
	cout<<"Nhap Mang: ";
	
	nhap(a,n);
	
	somax(a,n);
	
	somin(a,n);
	
	sotb(a,n);
}
void nhap(float a[],int n){
	
	for(int i=0; i<n;i++){
		
		cout<<"\nNhap phan tu thu "<<i+1<<" : ";
		cin>>a[i];
	}
}
void somax(float a[],int n){
	
	float max=a[0];
	
	for(int i=1;i<n;i++){
		
		if(max<a[i]) max=a[i];
	}
	cout<<"\nSo max : "<<max;
}
void somin(float a[],int n){
	
	float min=a[0];
	
	for(int i=1;i<n;i++){
		
		if(min>a[i]) min=a[i];
}
    cout<<"\nSo min : "<<min;
}
void sotb(float a[],int n){
	 float tb=a[0];
	for(int i=1;i<n;i++){
		
		tb=tb+a[i];
	}
	tb=tb/n;
	
	cout<<"\n So TB: "<<tb;	
}	
