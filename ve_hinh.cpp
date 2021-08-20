#include<iostream>

#include<conio.h>

#include<stdio.h>

using namespace std;

int main(){
	
	int n;
	
	cout<<"Nhap n: "; cin>>n;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			
			if((i<n/2)&& j==0 || i==j ||i==n/2 || (i>n/2)&&j==n-1){
				
				cout<<"*";
			}
			else cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
