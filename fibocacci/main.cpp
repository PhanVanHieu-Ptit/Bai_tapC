#include <iostream>

using namespace std;

int fib(int n);

void xuatdayfib(int n);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	
	cout<<"Nhap n: "; cin>>n;
	
	cout<<"f("<<n<<") = "<<fib(n);
	
	cout<<endl;
	
	xuatdayfib(n);
	
	return 0;
}
int fib(int n){
	
	if(n<=2) return 1;
	
	return fib(n-1)+fib(n-2);
}
void xuatdayfib(int n){
	
	for(int i=0;i<=n;i++){
		
		cout<<fib(i)<<"\t";
	}
}
