#include<iostream>
using namespace std;
int main (){
	int nam;
	cout << " nhap nam :";
	cin >> nam;
	if(nam%400==0){
		cout << " YES";
		
	}
	else if(nam%4!=0){
	 cout << "NO"; 
	}
return 0;
}
