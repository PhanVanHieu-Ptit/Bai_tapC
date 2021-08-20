#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<math.h>

using namespace std;

const int MAX=100;

void nhap(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap phan tu thu "<<i+1<<" : "; cin>>a[i];
	}
}
void xuat(int a[MAX],int n){
	
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
void kiemtra(int a[MAX], int n, int &d){
	 int k=0;
	for(int i=0;i<n;i++){
		
		if(sqrt(a[i])*sqrt(a[i])==a[i]){
			d++;
			a[k]=a[i];
			k++;
		}
		
	}	
}
int main(){
	
   int n, a[MAX],d=0; cout<<"Nhap n: "; cin>>n;
   
   nhap(a,n);
   
   cout<<"\nMang vua nhap: ";
   
   xuat(a,n);
   
   kiemtra(a,n,d);
   
   cout<<"\nCac so chinh phuong co trong mang: ";
   
   xuat(a,d);
   
   printf("\nCo %d so chinh phuong co trong mang",d);
   
   getch();   
}
