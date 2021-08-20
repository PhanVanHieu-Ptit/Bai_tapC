#include<iostream>

#include<conio.h>

const int MAX=100;

using namespace std;

void nhap(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"nhap phan tu thu"<<i+1<<" : ";
		
		cin>>a[i];
	}
}
void xuat(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<a[i]<<"\t";
	}
}
void xoax(int a[MAX], int n, int i){
	
	for(;i<n-1;i++){
		
		a[i]=a[i+1];
	}
}
void xoanhieu(int a[MAX], int &n, int x){
	
	for(int i=0;i<n;i++){
		
		if(a[i]==x){
			
			xoax(a,n,i);
			
			i--;
			n--;
		}
	}
}
int main(){
	
	int a[MAX],n,x;
	
	cout<<"Nhap so luong phan tu: ";
	
	cin>>n;
	
	nhap(a,n);
	
	cout<<"Mang ban dau:\n";
	
	xuat(a,n);
	
	cout<<"\nNhap gia tri can xoa: ";
	
	cin>>x;
	
	xoanhieu(a,n,x);
	
	cout<<"\nMang sau khi xoa:\n";
	
	xuat(a,n);
	
	return 0;
}
