#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	if(n<=1){
		cout << "no ";
	}
	else {
		for( int i=2;i<=n;i++){
			if(n%i==0){
				cout << "no";
			}
			else{
				cout << "yes";
			return 0;
			}
		}
	}
	return 0;
}

