#include<iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while(t>0){
		long long n, q; cin >> n >> q;
		 bool isPrime=1;
		if((n+q)==1)
		 isPrime=0;
		for(long long i=2;i*i<=(n+q);i++){
			if((n+q)%i==0){
				isPrime=0;
			}
			   
		}
	
	if(n-q==1 && isPrime==1)
	 cout <<"YES\n";
	else
	 cout <<"NO\n"; 
	 }
	 	t--;
}
/*#include <iostream>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t>0){
		long long n, q;
		cin >> n >> q;
		long long x=n+q;
		bool isPrime=1;
		if(x==1){
			isPrime=0;
		}
		for(long long i=2; i*i<=x; i++){
			if(x%i==0){
				isPrime=0;
			}
		}
		if(n-q==1 && isPrime==1){
			cout << "YES\n";
		} 
		else{
			cout << "NO\n";
		} 
		t--;
	}
}*/
 
