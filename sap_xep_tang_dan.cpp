/* cach 1 #include<iostream>
using namespace std;
int main (){
	int a,b,c;
	cin >> a >> b >> c;
	if(a>b){
		int x=a;
		a=b;
		b=x;
	}
	if(a>c){
		int y=a;
		a=c;
		c=y;
	}
	if(b>c){
		int z=b;
		b=c;
		c=z;
	}
	cout << a << " " << b << " " << c;
return 0;	
}*/
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a<=b && a<=c){
		if( b<=c){
			cout << a << b << c;
		}
		else{
			cout << a << c << b;
		}
	}
	else if( b<=a && b<=c){
		if(a<=c){
			cout << b << a << c;
		}
		else{
			cout << b << c <<a;
		}
	}
	else {
		if(a<=b){
			cout << c << a << b;
		}
		else{
			cout << c << b <<a;
		}
	}
return 0;	
}
