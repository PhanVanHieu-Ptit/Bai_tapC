#include<iostream>

using namespace std;

int fica(int n){
	
	int a1=1,a2=1;
	
	if(n==1|| n==2) return 1;
	
	int i=0;
	
	int a;
	
	while(i<=n){
		
		a=a1+a2;
		a1=a2;
		a2=a;
		
		i++;
	}
	return a;
}

int main(){
	
	int n;
	
	cout<<"Nhap n: "; cin>>n;
	
	cout<<"\nF("<<n<<") = "<<fica(n);
	
	return 0;
}
