#include<iostream>
using namespace std;
int main (){
	int a,b;
	cout << "nhap a:";
	cin >>a;
	cout << " nhap b ";
	cin >>b;
	if(a<b){
		cout << " max la " << b << " ";
		cout << " min la " << a;
		
	}
	else if(a>b){
		cout << " max la " << a << " ";
		cout << " min la " << b;
	}
return 0;
}
