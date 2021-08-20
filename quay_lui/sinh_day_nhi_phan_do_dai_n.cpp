#include<iostream>
using namespace std;
void quayLui(int*a, int n, int i){
	for(int k=0;k<2;k++){
		a[i]=k;
		if(i==n-1){
			for(int j=0;j<n;j++){
				cout<<a[j];
			}
			cout<<endl;
		}
		else{
			quayLui(a,n,i+1);
		}
	}
}
int main(){
	int n; cout<<"Nhap n: "; cin>>n;
	int *a=new int[n];
	quayLui(a,n,0);
	delete[]a;
	return 0;
}

