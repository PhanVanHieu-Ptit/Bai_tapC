#include<iostream>

using namespace std;

int doitien(int t, int a[9],int b[9]){
	
	for(int j=0;j<9;j++) b[j]=0;
	
    int i=0;
    
    while(t>=1000){
    	
    	b[i]=t/a[i];
    	
    	t=t%a[i];
    	
    	i++;
	}
	if(t==0) return 1;
	
	return 0;
}

int main(){
	
	int t;
	
	cout<<"Nhap tien can doi: "; cin>>t;
	
	int a[9]={500000,200000,100000,50000,20000,10000,5000,2000,1000};
	int b[9];
	
	if(doitien(t,a,b)==1){
		
		for(int i=0;i<9;i++){
			
			cout<<"\nLoai "<<a[i]<<" : "<<b[i]<<" to"<<endl;
		}
	}
	else cout<<"\nKhong doi duoc";
	
	return 0;
}
