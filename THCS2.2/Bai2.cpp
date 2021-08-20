#include<iostream>
#include<cstring>
using namespace std;
int main (){
	string a,s="";
	getline(cin,a);
	for(int i=a.length()-1;i>=0;i--){
		s += (a[i]/a.length());
    }
	cout << s;
	
return 0;	
}
