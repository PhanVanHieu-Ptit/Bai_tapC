#include <iostream>

#include<time.h>

#include<stdlib.h>

using namespace std;

void swap(double *&pa, double *&pb);

void nhap( int *&a, int n);

void xuat(int *a, int n);

void sapxepgiam( int *&a, int n);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n,*a;
	
	cout<<"Nhap n : "; cin >>n;
	
//	cout<<"Nhap cac phan tu trong mang: ";
	
	nhap(a,n);
	
	cout<<"Mang ban dau :\n";
	
	xuat(a,n); 
	
	sapxepgiam(a,n);
	
	cout<<"\nMang giam dan:\n";
	
	xuat(a,n);
	
	return 0;
}
void swap(double *&pa, double *&pb){
	int temp=*pa;
	*pa=*pb;
	*pb=temp;
}
void nhap( int *&a, int n){
	
	srand(time(NULL));
	
	a=new int [n];
	
	for(int i=0;i<n;i++){
		
		*(a+i)=rand()%101;
	}
}
void xuat(int *a, int n){
	
	for(int i=0;i<n;i++){
		
		cout<<*(a+i)<<"\t";
	}
}
void sapxepgiam( int *&a, int n){
	
	for(int i=0;i<n-1;i++){
		
		for(int j=i+1;j<n;j++){
			
			if(*(a+i)<*(a+j)){
				
				swap(*(a+i),*(a+j));
			}
		}
	}
}
