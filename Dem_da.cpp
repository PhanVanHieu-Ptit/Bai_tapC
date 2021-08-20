#include <iostream>
using namespace std;
int main(){
	long long n, q;
	cin >> n >> q;
	while(q--){
		char x; 
		cin >> x;
		if(x=='+'){
			long long y;
			cin >> y;
			n+=y;
		}
		else if(x=='-'){
			long long y;
			cin >> y;
			n-=y;
		}
		else if(x=='*'){
			long long y;
			cin >> y;
			n*=y;
		}
		else if(x=='/'){
			long long y;
			cin >> y;
			n/=y;
		}
		else cout << n << "\n";
	}
}
