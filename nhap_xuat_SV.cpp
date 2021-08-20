#include<iostream>

using namespace std;

int main(){
	
	int n; cout<<"Nhap n: "; cin>>n;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			
			if(i==0 || i==n-1 || j==0 || j==n-1 || j==n/2 || i==n/2|| i==j|| n-j==i|| n/2-j==i|| j-n/2==i||i-n/2==j|| n-i==j) cout<<"*";
			
			else cout<<" ";
		
		}
		cout<<endl;
	}
	return 0;
}
