/*#include<iostream>
using namespace std;
int main(){
	int n;
	cout << " nhap n ";cin >> n;
	int tong=1;
	for(int i=2; i<=n; i++){
		if(i%2==0){
			tong=tong+i;
		}
		else{
			tong=tong-i;
		}
	}
	cout << tong;
return 0;	
}
*/
#include<iostream>
using namespace std;
int main (){
	int n;
	cin >>n;
	int tong=0;
	for(int i=1; i<=n; i++){
	 if( i%3!=0){
	 	tong=tong+i;
	 } 
	 else{
	 	tong=tong;
	 }
	}
	cout << tong;
return 0;	
}
	

