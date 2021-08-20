#include<iostream>

#include<conio.h>

#include<math.h>

using namespace std;

int tamgiacdac(int n);

int tamgiacrong(int n);

int chunhatdac(int a, int b);

int chunhatrong(int a,int b);

int main(){
	
	int n,a,b; 
	
	cout <<"nhap canh cua tam giac n:";cin >>n;
	
	cout <<"\n Tam giac vuong can dac:\n\n";
	
	tamgiacdac(n);
	
	cout<<"\n Hinh tam giac rong: \n\n";
	
	tamgiacrong(n);
	
	cout <<" Nhap chieu rong, dai cua hinh chu nhat: "; cin>>a>>b;
	
	cout<<"\n Hinh chu nhat dac rong "<<a<<", dai "<<b<<" :\n\n";
	
	chunhatdac(a,b);
	
	cout<<"\n Hinh chu nhat rong: \n\n";
	
	chunhatrong(a,b);
	
}
int tamgiacdac(int n){
	
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=i;j++) cout<<"*";
			
		cout<<"\n";      }
    }
    
int tamgiacrong(int n){
	
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=i;j++){
			
			if(j==1 || i==n) cout<<"*";
			
			else if(i==j) cout<<"*";
			
			else cout<<" ";	
		}
		cout <<"\n";	
	}
}    
int chunhatdac(int a, int b){
	
	for(int i=0;i<a;i++){
		
		for(int j=0;j<b;j++) cout <<"*";
		
		cout<<endl;
	}
}                     
int chunhatrong(int a,int b){
	
	for(int i=1;i<=a;i++){
		
		for(int j=1;j<=b;j++){
			
			if(i==1 || i==a) cout<<"*";
			
			else if(j==1 || j==b) cout <<"*"; 
			
			else cout<<" ";
		}
		cout<<endl;
	}
}	

