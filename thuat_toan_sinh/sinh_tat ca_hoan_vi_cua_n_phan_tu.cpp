#include<iostream>
using namespace std;
const int MAX=100;
void swap(int &a, int &b){
	int t=a;
	a=b;
	b=t;
}
void xuat(int a[MAX],int n){
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
int main(){
	int n; cout<<"Nhap n: "; cin>>n;
	int *a=new int[n];
	for(int i=1;i<=n;i++) a[i-1]=i;
	xuat(a,n);
	for(int i=n-1;i>0;i--){
		if(a[i]>a[i-1]){
			for(int j=n-1;j>=i;j--){
				if(a[j]>a[i-1]){
					swap(a[j], a[i-1]);
					break;
				}
			}
			for(int j=n-1;j>(n-1+i)/2;j--){
				swap(a[j],a[n-1-j+i]);
			  }
			xuat(a,n);
			i=n;
		}
	}
	delete[]a;
	return 0;
}

