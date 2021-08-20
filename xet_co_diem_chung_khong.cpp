#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	if(a>c){
		int x=a;
		a=c;
		c=x;
		int y=b;
		b=d;
		d=y;
	}
	if(c>b){
		cout << " no";
	}
	else{
	cout << " yes";
	}
return 0;	
}
