#include<iostream>
#include<stdio.h>
#include<conio.h>

const int MAX=100;

using namespace std;

void nhap(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		cout<<"Nhap phan tu thu "<<i+1<<" : ";
		
		cin>>a[i];
	}
}
int kt(int b){
	
	int c=0,m=b;
	if(b<=10) return 0;
	while(b>0){
	   c=c*10+b%10;
	
	    b=b/10;
	}
	if(m==c) return 1;
	
	else return 0;
	
}
void chuyen(int a[MAX], int n){
	int tg,k=0;
	for(int i=0;i<n;i++){
		
		if(kt(a[i])==1){
			tg=a[k];
			a[k]=a[i];
			a[i]=tg;
			
			k++;
		}
	}
}
void xuat(int a[MAX], int n){
	
	for(int i=0;i<n;i++)
	
	 cout<<a[i]<<" ";
}
void xoa(int a[MAX], int n, int i){
	
	for(;i<n-1;i++){
		
		a[i]=a[i+1];
	}
}
void xoanhieu(int a[MAX], int &n, int x){
	
	for(int i=0;i<n;i++){
		
		if(a[i]==x){
			
			xoa(a,n,i);
			
			i--;
			
			n--;
		}
	}
}
void sapxeptang(int a[MAX], int n){
	int tg;
	for(int i=0;i<n;i++){
		
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
}
int timvt(int a[MAX],int n, int x){
	
	int left=0, right=n-1;
	int j;
	if(x<=a[0]) return 0;
	
	else if(x>=a[n-1]) return n+1;
	
	while(left<=right){
		j=(left+right)/2;
		
		if(a[j]>=x && a[j-1]<=x) return j;
		
		if(a[j]>x) left=j+1;
		
		else right=j-1;
	}
	return -1;
}
void chen(int a[MAX], int &n, int x){
	
	int *b=new int [n+1];
	int k=timvt(a,n,x);
	if(k==0){
		b[k]=x;
		
		for(int i=0;i<n;i++){
			b[i+1]=a[i];
		}
	}
	else if(k==n+1){
		b[k-1]=x;
		for(int i=0;i<n;i++){
			
			b[i]=a[i];
		}
	}
	
	else {
		for(int i=0;i<k;i++){
			
			b[i]=a[i];
			b[k]=x;
		}
		for(int i=k+1;i<n+1;i++){
			b[i]=a[i-1];
		}
	}
	xuat(b,n+1);
}
int main(){
	int a[MAX],n;
	
	cout<<"Nhap so luong phan tu: "; cin>>n;
	
	nhap(a,n);
	
	cout<<"Mang ban dau:\n";
	
	xuat(a,n);
	
//	chuyen(a,n);
	
//	cout<<"\nMang sau khi sap xep:\n";
	
//	xuat(a,n);
	
	/*int x;
	
	cout<<"\nNhap phan tu can xoa: ";
	
	cin>>x;
	
	xoanhieu(a,n,x);*/
	
/*	int x,y;
	
	cout<<"\nNhap phan tu can thay the: "; cin>>x;
	
	cout<<"\nThay bang: "; cin>>y;

    thaynhieu(a,n,x,y);
	
	xuat(a,n);*/
	sapxeptang(a,n);
	
	cout<<"\nMang tang dan:\n";
	
	xuat(a,n);
	
	int x;
	
	cout<<"\nNhap phan tu can them: "; cin>>x;
	
	cout<<"\nMang sau khi chen:\n";
	
	chen(a,n,x);
	
	return 0;
	
}
