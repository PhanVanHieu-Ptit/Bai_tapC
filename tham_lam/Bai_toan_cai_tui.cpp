#include<iostream>
using namespace std;
const int MAX=100;
int p[MAX],w[MAX];
void swap(int i, int j){
	int t=p[i];
	p[i]=p[j];
	p[j]=t;
	
	t=w[i];
	w[i]=w[j];
	w[j]=t;
}
void bubbleSort(int a[], int b[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if((double)(p[i]/w[i])<(double)(p[j]/w[j])) 
				swap(i,j);
		}
	}
}
int proc(int a, int n){
	bubbleSort(p,w,n);
	int remain=a;
	int res=0;
	for(int i=0;i<n;i++){
		if(w[i]<=remain){
			remain-=w[i];
			res+=p[i];
		}
	}
	return res;
}
int main(){
	int n; //cout<<"Nhap so luong do vat: "; 
	cin>>n;
	int a; 
	//cout<<"Nhap suc chua cua tui: ";
	 cin>>a;
	for(int i=0;i<n;i++){
		//cout<<"Nhap gia tri cua vat thu "<<i+1<<": ";
		 cin>>p[i];
		//cout<<"Nhap khoi luong vat thu "<<i+1<<": ";
		 cin>>w[i]; 
	}
	
	cout<<proc;
	return 0;
}
// chua kiem duoc test case
