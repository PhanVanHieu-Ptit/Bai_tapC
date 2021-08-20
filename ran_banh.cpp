#include<iostream>
using namespace std;
int main(){
	int n,k; cin >> n >> k;
	if ( n<k)
	 cout << " thoi gian de ran banh la : 10 phut " ;
	else if(2*n%k == 0)
	 cout << " thoi gian ran banh la : " << 2*n/k*5 << " phut";
	else
	 cout << " thoi gian ran banh la : " << (2*n/k + 1)*5 << " phut ";  
	
}
