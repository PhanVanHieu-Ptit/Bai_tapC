#include<iostream>

using namespace std;

int main(){
	
	int n;
	
	cout<<"Nhap so bo test: "; cin>>n;
	
	long a[n],b[n];
	
	for(int i=0;i<n;i++){
		
	do{
			cout<<"\nNhap so thu "<<i+1<<" : ";cin>>a[i];
			
			if(a[i]>=1000000000) cout<<"\nNhap lai";
	}
	while(a[i]>=100000000);
	}
	for(int i=0;i<n;i++) b[i]=0;
	for(int i=0;i<n;i++){
		
		while(a[i]>0){
			
			b[i] =b[i]+a[i]%10;
			
			a[i]=a[i]/10;
		}
	}
	for(int i=0;i<n;i++){
		
		cout<<b[i]<<endl;
	}
	return 0;
}
