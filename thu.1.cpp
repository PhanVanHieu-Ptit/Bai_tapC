/*#include<iostream>//CO loi khi chen vao dau, cuoi

const int MAX=100;

using namespace std;

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
void sapxep(int a[MAX], int n){
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
int kt(int a[MAX], int n , int x){
	
	if(x<=a[0]) return 0;
	
	else if(x>=a[n-1]) return n+1;
	
	int left=0, right=n-1,j;
	
	while(left<=right){
		
		j=(left+right)/2;
		
		if(x>=a[j-1]&&x<=a[j]) return j;
		
		else if(a[j]<x) left=j+1;
		
		else right=j-1;
	}
	return -1;
}
int them(int a[MAX], int n,int x){
	
	int tg, k=kt(a,n,x);
	cout<<" k ="<<k<<"\n";
	int b[n+1];
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
	else{
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
	
	cout<<"Nhap n: "; cin>>n; 
	
	nhap(a,n);
	
	cout<<"\nMang ban dau:\n";
	
	xuat(a,n);
	
	sapxep(a,n);
	
	cout<<"\nMang tang dan:\n";
	
	xuat(a,n);
	
	int x;
	
	cout<<"\nNhap phan tu can them vao: "; cin>>x;
	
	them(a,n,x);
	
	return 0;
}*/

