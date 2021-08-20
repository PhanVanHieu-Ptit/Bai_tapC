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
void thaythe(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		if(a[i]<0) a[i]=0;
	}
}
void xoa(int a[MAX], int n,int i){
	
	for(;i<n;i++){
		
		a[i]=a[i+1];
	}
}
void xoanhieu(int a[MAX], int n, int &d){
	
	for(int i=0;i<n;i++){
		
		if(a[i]==0){
			
			xoa(a,n,i);
			
			i--;
			n--;
			d++;
		}
	}
}
int main(){
	
	int n, a[MAX], d=0;
	
	cout<<"Nhap n: "; cin >>n;
	
	nhap(a,n);
	
	cout<<"Mang ban dau: "; xuat(a,n);
	
    thaythe(a,n);
	
	cout<<"\nMang sau khi thay the: "; xuat(a,n);
	
	xoanhieu(a,n,d);// van sai khi a[i]=0 thi khong phai so am nhung van xoa
	
	cout<<"\nMang sau khi xoa het so am: "; xuat(a,d);
	
	cout<<"\nMang da xoa tat ca: "<<d<<" so am";
	
	/*for(int i = 0;i < n;++i){
        if(arr[i] < 0){
            for(int j = i; j < n-1;j++){
                arr[j] = arr[j+1];
            }
            --n;
        }
    }*/
	
	getch();
}
 
