/*#include<iostream>
using namespace std;
int main(){
	long long n;
	cin>> n;
	while(n%10==0){
		n/=10;
	}
	while(n%10!=0){
		cout << n%10;
		n/=10;
	}
return 0;	
}*/
#include<iostream>
using namespace std;
int main(){
	long long n;cin >> n;
	
	if(n<=1){
		cout << " No";
	}
	else if(n==2){
		cout << " yes";
	}
	else{
		for(int i=2;i<=n;i++){
			if(n%i==0){
				cout << "no ";
			}
			else{
				cout << " yes ";
			}
			return 0;
		}
	}
return 0;	
}
