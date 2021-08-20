#include<iostream>
const int MAX =100;
using namespace std;
void nhap(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap phan tu thu "<<i+1<<" : "; cin>>a[i];
	}
}
void xuat(int a[MAX], int n){
	
	for(int i=0;i<n;i++)
	
	 cout<<a[i]<<" ";
}
void swap(int &a, int &b){
	
	int tg=a;
	a=b;
	b=tg;
}
void doi_min(int a[MAX], int n, int d, int c){//  co loi
	int min=a[d];
	for(int i=d;i<=c;i++){
		
		if(min>a[i]) min=a[i];
		
	}
	swap(d,min);
}
int main(){
	
	int a[MAX],n;
	
	cout<<"Nhap so luong phan tu: "; cin >> n;
	
	nhap(a,n);
	
	cout<<"\nMang ban dau:\n"; 
	
	xuat(a,n);
	
	int d,c;
	
	cout<<"\nNhap doan [d,c]: "; cin>>d>>c;
	
	doi_min(a,n,d,c);
	
	cout<<"\nMang sau sap xep:\n";
	
	xuat(a,n);
	
	return 0;
	
	
}
