#include<iostream>

using namespace std;

void tamgiac(int h){
	
	for(int i=0;i<h;i++){
		
		for(int j=0;j<2*h-1;j++){
			
			if((j>=h-i+1) && (j<=h+i-1)) cout<<"*";
			
			else cout<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	
	int h;
	
	do{
		cout<<"Nhap h>0, h = ";cin >>h;
		
	}
	while (h<=0);
	
	tamgiac(h);
	
	return 0;
	
}
