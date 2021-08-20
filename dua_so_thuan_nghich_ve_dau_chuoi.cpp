#include<iostream>

#include<conio.h>

#include<stdio.h>

const int MAX=100;

using namespace std;

void nhap(int a[MAX], int n){
	
	for(int i=0; i<n;i++){
		
		cout<<"Nhap phan tu thu "<<i+1<<" :";
		
		cin>>a[i];
	}
}
void xuat(int a[MAX], int n){
	
	for(int i=0;i<n;i++)
	
	 cout<<a[i]<<" ";
}
void doc(int a[MAX]){
	FILE *file=fopen("Solieu.txt","r");
	
	
	fclose(file);
}
int kt(int b){
	int c=0,m=b;
	
	if(b<=10) return 0;
		
	while(b!=0){
	
		c=c*10+b%10;
		
		b=b/10;
	}
	if(c==m) return 1;
	
	else return 0;
}
void tach(int a[MAX], int n){
	int k=0,tg;
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
	
	int a[MAX],n;
	
	cout<<"Nhap n: "; cin>>n;
	
	nhap(a,n);
	
	cout<<"Mang ban dau:\n";
	
	xuat(a,n);
	
	tach(a,n);
	
	cout<<"\nMang sau khi tach:\n";
	
	xuat(a,n);
	
	return 0;
	
}
