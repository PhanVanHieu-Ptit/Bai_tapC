#include<iostream>

using namespace std;

int main(){
	
	int n;
	
	cout<<"Nhap so bo test: "; cin>>n;
	
	int a[n];
	
	for(int i=0; i<n;i++){
		
		cout<<"\nNhap so thu "<<i+1<<" : "; cin>>a[i];
	}
	int b[n];
	bool c[n];
	
	for(int i=0;i<n;i++){
		
		b[i]=0;
		c[i]=0;
	}
	for(int i=0;i<n;i++){
		
		while(a[i]>0){
			
			b[i]=b[i]+a[i]%10;
			
			a[i]/=10;
		}
	}
	for(int i=0;i<n;i++){
		
		if(b[i]%10==0) c[i]=1;
		
	}
	for(int i=0;i<n;i++){
		
		if(c[i]==1) cout<<"YES"<<endl;
		
		else cout<<"NO"<<endl;
	}
return 0;
}
