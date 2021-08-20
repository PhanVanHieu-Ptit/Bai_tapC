#include<iostream>

using namespace std;

const int MAX=100;

void nhap(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap phan tu thu "<<i+1<<" : ";
		
		cin>>a[i];
	}
}
void xuat(int a[MAX], int n){
	
	for(int i=0;i<n;i++)
	
	 cout<<a[i]<<" ";
}
void xoa(int a[MAX], int &n, int i){
	
	for(;i<n-1;i++)
	
	 a[i]=a[i+1];
}
void xoanhieu(int a[MAX], int &n, int x, int &dem){
	
	for(int i=0;i<n;i++){
		
		if(a[i]==x){
			
			xoa(a,n,i);
			
			dem++;
			i--;
			n--;
		}
	}
}
int main(){
	
	int a[MAX], n, dem=0;
	
	do{
		cout<<"\nNhap n: "; cin>>n;
		
		if(n<0 || n>=100) cout<<"\nNhap sai, nhap lai";
		
		else if(n==0){
			
			cout<<"\nMang rong";
			
			return 0;
		}
	}
	while(n<0 || n>=100);
	nhap(a,n);
	
	cout<<"\nMang ban dau:\n";
	
	xuat(a,n);
	
	int x;
	
	cout<<"\nNhap phan tu can xoa: "; cin>>x;
	
	xoanhieu(a,n,x,dem);
	
	cout<<"\nXoa "<<dem<<" phan tu";
	
	if(n==0) {
		
		cout<<"\nMang sau khi xoa: Mang rong";
		
		return 0;
	}
	
	cout<<"\nMang sau khi xoa:\n";
	
	xuat(a,n);
	
	return 0;
}
