#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<stdlib.h>

const int MAX=100;

using namespace std;

void nhap(int a[MAX], int n ){
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap phan tu thu "<<i+1<<" : "; cin>>a[i];
	}
}
void xuat(int a[MAX], int n){
	
	for(int i=0;i<n;i++)
	
	  cout<<a[i]<<" ";
}
void tachmang(int a[MAX], int n){
	
	int k=0,tg;
	
	for(int i=0;i<n;i++){
		/*for(int j=i;j<n;j++){
			
			if(a[j]%2!=0){
				
				k=a[i];
				a[i]=a[j];
				a[j]=k;
				break;
			}
		}*/
	if(a[i]%2!=0){
		
		tg=a[k];
		a[k]=a[i];
		a[i]=tg;
		
		k++;
		
	}	
}
}
int main(){
	int a[MAX],n;
	
	cout<<"Nhap n: "; cin >>n;
	
	nhap(a,n);
	
	cout<<"Mang ban dau: ";
	
	xuat(a,n);
	
	tachmang(a,n);
	
	cout<<"\nMang sau khi tach: ";
	
	xuat(a,n);
	
	getch();
}
