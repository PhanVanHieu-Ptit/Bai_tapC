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
int timvt(int a[MAX], int n, int x){
	
     int left=0,right=n-1;
     
     int j;
     
     if(x<=a[0]) return 0;
     
     else if(x>=a[n-1]) return n-1;
     
     while(left<=right){
     	
     	j=(left+right)/2;
     	
     	if(a[j]>=x && a[j-1]<=x) return j;
     	
     	if(a[j]>x) left=j+1;
     	
     	else right=j-1;
     	
	 }
}
void themx(int a[MAX], int &n, int x, int b[MAX+1]){
	
	int tg;
	int k=timvt(a,n,x);
	for(int i=0;i<n;i++){
		
		if(k==0){
		
			b[k]=x;
			b[i+1]=a[i];	
		}
		else if(k==n-1){
			
			b[k+1]=x;
			b[i]=a[i];
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
	}
}
int main(){
	
	int a[MAX],b[MAX+1], n;
	
	do{
		cout<<"\nNhap n : "; cin>>n;
		
		if(n<0 || n>=100) cout<<"\nNhap sai, nhap lai";
	}
	while(n<0 || n>=100);
	
	nhap(a,n);
	
	cout<<"\nMang ban dau:\n";
	
	xuat(a,n);
	
	int x;
	
	cout<<"\nNhap phan tu can them vao: "; cin>>x;
	
	themx(a,n,x,b);
	
	cout<<"\nMang sau khi them: ";
	
	xuat(b,n+1);
	
	return 0;
	
	return 0;
}
