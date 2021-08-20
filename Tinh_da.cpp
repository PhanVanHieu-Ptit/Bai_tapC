#include<iostream>
using namespace std;
int main (){
	long long n,q,m;
	cin >> n >> q;
	while (q--){
		char x;
		cin >> x;
		long long y;
			cin>> y;
		if(x=='+'){
			
			m=n+y;
		}
		else if(x=='-'){
		
			m=n-y;
		}
		else if(x=='*'){
		    
			m=n*y;
		}
		else if(x=='/') {
			
			m=n/y;
		}
      cout << n << x << y << '=' << m << "\n";
    };
    
}
