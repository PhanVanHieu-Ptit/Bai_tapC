#include<iostream>

using namespace std;

int main(){
	
	int n;
	
	long a[n],b[n],c[n],d[n];
	
	cout<<"Nhap so bo test: "; cin>> n;
	
	for(int i=0;i<n;i++){
		
		cout<<"\nNhap so thu "<<i+1<<": "; cin>>a[i];
	}
	
	bool e[n];
    for(int i=0;i<n;i++){
    	b[i]=0;
    	c[i]=0;
    	d[i]=0;
    	e[i]=0;
	}
	for(int i=0;i<n;i++){
		
		b[i]=a[i]%10;
	}
    for(int i=0;i<n;i++){
    	while(a[i]>0){
	    	c[i]=c[i]*10+a[i]%10;
	    	a[i]=a[i]/10;
	    }
	}
	for(int i=0;i<n;i++){
		d[i]=c[i]%10;
	}
	for(int i=0;i<n;i++){
		if(b[i]==d[i]) e[i]=1;
	}
	for(int i=0;i<n;i++){
		
		if(e[i]==1) cout<<"YES"<<endl;
		
		else cout<<"NO"<<endl;
	}
	return 0;
}
