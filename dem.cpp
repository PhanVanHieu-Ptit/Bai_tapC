/*#include<iostream>

#include<stdio.h >

#include<conio.h>



using namespace std;

const int MAX=100;

void nhap(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"Phan tu thu"<<i+1<<" = "; cin>>a[i];
	}
}
void xuat(int a[MAX], int n){
	
	for(int i=0;i<n;i++)
	
	 cout<<a[i]<<" ";
}

int Maxlen(int a[],int b[MAX], int n, int &dem);

int main(){
	
	int a[MAX],b[MAX],n,dem=0,max;
	
	cout<<"Nhap n ="; cin>>n;
	
	cout<<"\nNhap cac phan tu cua mang:\n";
	
	nhap(a,n);
	
	cout<<"\nMang ban dau: ";
	
	xuat(a,n);
	
	Maxlen(a,b,n,dem);
	
	cout<<"\nSo xuat hien nhieu nhat: "<<max;
	
    printf(" voi %d lan xuat hien",dem);
	
   return 0;
}
int Maxlen(int a[MAX],int b[MAX], int n, int &dem){
	
	for(int i=0;i<n;i++) b[i]=0;
	
	for(int i=0;i<n;i++) b[a[i]]++;
	
	int max=0;
	for(int i=0;i<n;i++){
		
		if(dem<b[a[i]]){
			
			cout<<" gia tri "<<a[i];
			
			max=a[i];
			
			dem=b[a[i]];
				
		}
	}
	
	return max;
}*/

