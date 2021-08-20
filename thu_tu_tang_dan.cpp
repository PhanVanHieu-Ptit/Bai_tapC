#include<iostream>
using namespace std;
int main (){
	int a,b,c;
	cout << " nhap a ";
	cin >> a;
	cout << " nhap b ";
	cin >> b;
	cout << " nhap c ";
	cin >>c;
	/*if (a<b<c){
		cout << " thu tu tang dan "<< a << " "<< b << " "<<c;
	}
	
	if(a<c<b){
		cout << " thu tu tang dan "<< a << " " << c << " " << b;
	}
	if(b<a<c){
		cout << " thu tu tang dan " << b << " " << a << " " << c;
	}
	else if(b<c<a){
		cout << " thu tu tang dan " << b << " " << c << " "<< a;
	}
	else if(c<a<b){
		cout << " thu tu tang dan " << c << " " << a << " " << b;
	}
	else {
	 cout << " thu tu tang dan " << c << " " << b << " " << a;
	 }
return 0;
}*/
    int c=a;
    a=b;
    b=c;
    
