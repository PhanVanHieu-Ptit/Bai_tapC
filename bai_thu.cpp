#include<iostream>
using namespace std;

int main(){
	int n; cin>> n;
	cout<<"Uoc so :\n";
	for(int i=1;i<=n/2;i++) {
		if(n%i==0) cout<<i<<"\n";
		}
		cout<<"Boi so: ";
	for(long long i=n+1;;i++){
		if(i%n==0) {
		cout<<i;
		break;
		}
		}
	return 0;
	}
