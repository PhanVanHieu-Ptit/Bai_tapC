#include<iostream>
using namespace std;
int main (){
	int a,b,c;
	cin >> a >> b >> c;
	int ketqua=a;
	if(ketqua>b){
		ketqua=b;
	}
	if(ketqua>(a+b+c)/3){
		ketqua=(a+b+c)/3;
	}
	cout << "so nhom du thi toi da "<< ketqua;
return 0;	
}
