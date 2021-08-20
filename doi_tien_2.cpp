#include<iostream>

using namespace std;

int doitien(int t, int b[], int a[]){
	
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
	
	int a[9]={500000,200000,100000,50000,20000,10000,5000,2000,1000};
     
    int b[9];
    
    long long t;
    
    cout<<"Nhap so tien can doi: "; cin>>t;
    
    if(doitien(t,b,a)==1){
    	
    	cout<<"So tien doi duoc:\n";
    	
    	for(int j=0;j<9;j++){
    		
    		if(b[j]!=0) 
			
			cout<<"Loai "<<a[j]<<" : "<<b[j]<<" To "<<endl;
		}
    		 
	}
	else cout<<"Khong doi duoc";
	
	return 0;
}
