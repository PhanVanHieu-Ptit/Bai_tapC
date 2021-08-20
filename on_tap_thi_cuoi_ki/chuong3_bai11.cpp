#include<stdio.h>

#include<conio.h>

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
void tachle_chan(int a[MAX], int n){
	int k=0,tg;
	for(int i=0;i<n;i++){
		
		if(a[i]%2!=0){
			
			tg=a[k];
			a[k]=a[i];
			a[i]=tg;
			k++;
		}
	}
}
int kt_songuyento(int b){
	if(b<=0) return 0;
	
	else if(b==2) return 1;
	
	else{
		for(int i=2;i<b;i++){
			
			if(b%i==0) return 0;
		}
		return 1;
	}
}
void tach_songuyento(int a[MAX], int n){
	int k=0,tg;
	for(int i=0;i<n;i++){
		
		if(kt_songuyento(a[i])==1){
			
			tg=a[k];
			
			a[k]=a[i];
			
			a[i]=tg;
			
			k++;
			
		}
	}
}
int kt_sothuannghich(int b){
	
	int c=0,m=b;
	
	if(b<=10) return 0;
	
    while(b>0){
    	
    	c=c*10+b%10;
    	
    	b/=10;
	}
	if(c==m) return 1;
	
	else return 0;
}
void tach_sothuannghich(int a[MAX], int n){
	
	int k=0, tg;
	
	for(int i=0;i<n;i++){
		
		if(kt_sothuannghich(a[i])==1){
			
			tg=a[k];
			
			a[k]=a[i];
			
			a[i]=tg;
			
			k++;
		}
	}
}
int main(){
	int a[MAX],n;
	
	cout<<"Nhap n: "; cin>>n;
	
	nhap(a,n);
	
	cout<<"\nMang ban dau:\n"; 
	
	xuat(a,n);
	
	tachle_chan(a,n);
	
	cout<<"\nMang sau khi tach dau le, cuoi chan:\n";
	
	xuat(a,n);
	
	tach_songuyento(a,n);
	
	cout<<"\nMang sau khi tach so nguyen to ra dau:\n";
	
	xuat(a,n);
	
	tach_sothuannghich(a,n);
	
	cout<<"\nMang sau khi tach so thuan nghich ra dau:\n";
	
	xuat(a,n);
	
	return 0;
}
