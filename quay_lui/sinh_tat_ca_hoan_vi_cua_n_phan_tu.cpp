#include<iostream>
using namespace std;
void xuat(int n, int*a){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<endl;
}
void slove(int k,int n, int *a, bool*b){

	for(int i=1;i<=n;i++){
		if(!b[i]){
			a[k]=i;
			b[i]=1;
			if(k==n) xuat(n,a);
			else{
				slove(k+1,n,a,b);
			
			}
			b[i]=0;
		}
	}
}
int main(){
	int n; cout<<"Nhap n: "; cin>>n;
	int *a=new int[n+1];
	bool *b=new bool[n+1];
	for(int i=1;i<=n;i++) b[i]=0;
	slove(1,n,a,b);
	delete[]b;
	delete[]a;
	return 0;
}

