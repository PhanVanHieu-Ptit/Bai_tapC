#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout << " nhap a,b,c : ";
	cin >> a >> b >> c;
	if(a+b>c & a+c>b & b+c>a){
		cout << " do la do dai cua ba canh tam giac";
	}
	else{
		cout << " do khong phai la do dai cua ba canh tam giac";
	}
return 0;	
}
