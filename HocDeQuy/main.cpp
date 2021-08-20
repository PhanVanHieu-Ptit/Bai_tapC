#include <iostream>

using namespace std;

int giaithua(int n){
	
	if(n<=1) return 1;
	
	return n*giaithua(n-1);
}
void h10toh2(int n){
	
	if(n>0){
		
		int t=n%2;
		
		h10toh2(n/2);
		
		cout<<t<<" ";
	}
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	
	cout<<"Nhap n: "; cin>>n;
	
	cout<<n<<" giai thua = "<<giaithua(n);
	
	cout<<"\n";
	
	h10toh2(n);
	
	return 0;
}
