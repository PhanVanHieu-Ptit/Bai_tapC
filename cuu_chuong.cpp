#include<iostream>

#include<conio.h>

#include<math.h>

using namespace std;

int cuuchuong(){
	
	for(int i=2; i<=9;i++){
		
		cout<<"Bang cuu chuong "<<i<<": \n";
		
		for(int j=1;j<=10;j++){ 
		
			cout<<i<<" x "<<j<<" = "<<i*j<<"\n"; 
	
		}
		cout<<"\n";
	}
}
int main(){
	
	cout<<"Bang Cuu Chuong Tu 2 den 9: \n\n";
	
	cuuchuong();
	
	getch();
}
