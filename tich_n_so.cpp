#include<iostream>

#include<conio.h>

using namespace std;

int tichn(int n){
	
	long long t=1; 
	
	for(int i=1; i<=n;i++)
	
	 t*=i;
	 
	 cout<<"\n Tich cac so < "<<n<<" = "<<t<<"\n";
	
}

int main(){
	
	int n;
	
	cout<<"Chuong trinh tinh tich < n, chuong ket thuc khi nhap n<=0:\n\n";
	
	do{
		
		cout<<"\nNhap n = "; cin>>n;
		
		if(n<=0 ) break;
		
	 tichn(n);	
	 
	}
	while(n>0); 
}
