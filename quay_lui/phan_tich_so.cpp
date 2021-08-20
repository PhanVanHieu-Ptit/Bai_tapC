#include<iostream>
using namespace std;
void xuly(int i, int *x, int *t, int n){
	for(int j=x[i-1];j<=(n-t[i-1]);j++){
		x[i]=j;
		t[i]=t[i-1]+j;
		if(t[i]==n){
			for(int a=1;a<=i;a++){
				cout<<x[a]<< " ";
			}
			cout<<"\n";
		}
		else{
			xuly(i+1,x,t,n);
		}
	}
}
int main(){
	int n; cout<<"Nhap n: "; cin>>n;
	int *x=new int[n+1];
	int *t=new int[n+1];
	x[0]=1;
	t[0]=0;
	xuly(1,x,t,n);
	delete[]x;
	delete[]t;
	return 0;
}
