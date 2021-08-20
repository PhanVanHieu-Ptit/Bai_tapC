#include<iostream>
using namespace std;
int main(){
	int x,n;
	cout << " nhap gia ve ";cin >> x;
	cout << " nhap tuoi ";cin >> n;
	if(n<6){
		cout << " tien ve can thanh toan : mien ve";	
	}
	else if(n>50){
		cout << " tien ve can thanh toan :"<< x/2;
	}
	else{
		cout << " tien ve can thanh toan: "<<x;
	}
return 0;		
}
