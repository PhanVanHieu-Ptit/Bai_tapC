#include<iostream>

#include<conio.h>

#include<stdio.h>

const int MAX=100;

using namespace std;

void nhap(int d[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap phan tu thu "<<i+1<<" : ";
		
		cin>>d[i];
	}
}
void xuat(int d[MAX], int n){
	
	for(int i=0;i<n;i++)
	
	 cout<<d[i]<<" ";
}

void tron(int a[MAX], int b[MAX], int c[], int n, int m, int &k){
	int i=0;// khoi tao chi so mang A
	int j=0;// khoi tao chi so mang B
	
	while(i<n && j<m){
		
		if(a[i]<b[j]){
			
			c[k]=a[i];
			
			k++;// tang chi so mang C
			i++;// tang chi so mang A de lay gia tri ke tiep so sanh
		}
		else{
			c[k]=b[j];
			k++;// tang chi so mang C
			j++;// tang chi so mang B de lay gia tri ke tiep so sanh
		}
	}
	//duyet phan tu mang a de bo het phan tu con lai vao mang C
	for(;i<n;i++){
		
		c[k]=a[i];
		
		k++;
	}
	//duyet phan tu mang b de bo het phan tu con lai vao mang C
	for(;j<m;j++){
		
		c[k]=b[j];
		
		k++;
	}
}
int main(){
	int n,m,a[MAX],b[MAX], c[2*MAX], k=0;
	
	do{
		
		cout<<"\nNhap so luong phan tu mang A: ";cin>>n;
		
		if(n<=0 ||n>100) cout<<"\nNhap sai, nhap lai";
	}
	while(n<=0|| n>100);
	
	cout<<"\nNhap cac phan tu cua mang A:\n";
	
	nhap(a,n);
	
	cout<<"\nMang A:\n";
	
	xuat(a,n);
	
	do{
		
		cout<<"\nNhap so luong phan tu mang B:";cin>>m;
		
		if(m<=0 || m>100) cout<<"\nNhap sai, nhap lai";
	}
	while(m<=0 || m>100);
	
	cout<<"\nNhap cac phan tu mang B:\n";
	
	nhap(b,m);
	
	cout<<"\nMang B:\n";
	
	xuat(b,m);
	
	tron(a,b,c,n,m,k);
	
	cout<<"\nMang C:\n";
	
	xuat(c,k);
	
	return 0;
}
