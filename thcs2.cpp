#include<iostream>
using namespace std;
int main (){
	int n;cin >> n;
	if(n==1 or n==2){
		cout <<n;
	}
    for(int i=2;i<=n;i++){
    	if(n%i==0){
    		cout<< endl;
		}
		else{
			cout << n;
			break;
		}
	}
return 0;	
}
