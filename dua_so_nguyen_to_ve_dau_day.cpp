#include<iostream>

const int MAX=100;

using namespace std;

void nhap(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap phan tu thu "<<i+1<<" : "; cin>>a[i];
	}
}
void xuat(int a[MAX], int n){
	
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
int kt(int b){
	
	if(b<2) return 0;
	if(b==2) return 1;
	else{
		
		for(int i=2;i<b;i++){
			
			if(b%i==0) return 0;
		}
	}
	
	return  1;
}
void nguyento(int a[MAX], int n){
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
int main(){
	
	int n,a[MAX];
	
	cout<<"Nhap n: "; cin>>n;
	
	nhap(a,n);
	
	cout<<"Mang ban dau:\n";
	
	xuat(a,n);
	
	nguyento(a,n);
	
	cout<<"\nMang sau khi tach:\n";
	
	xuat(a,n);
	
	return 0;
	
	
}
