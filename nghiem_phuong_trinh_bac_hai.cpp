#include<iostream>
using namespace std;
int main (){
	int a,b,c,delta;
	cin >> a >> b >> c;
	if(a==0){
		if(b==0 && c!=0){
			cout << "phuong trinh vo nghiem";
		}
		else if(b==0 && c==0){
			cout << " phuong trinh vo so nghiem";
		}
		else {
			cout << " phuong trinh co mot nghiem";
		}
	}
	else{
		 int delta=(b*b-4*a*c);
		if(delta>0){
			cout << " phuong trinh co hai nghiem phan biet";
		}
		else if(delta < 0){
			cout << " phuong trinh vo nghiem";
		}
		else {
			cout << " phuong trinh co nghiem kep ";
		}
	}
return 0;	
}
