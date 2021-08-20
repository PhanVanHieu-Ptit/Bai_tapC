/* cach 1 #include<iostream>
using namespace std;
int main (){
	int a,b;
	cin >> a >> b;
	if(a==0 && b!=0){
		cout << "phuong trinh vo nghiem";
	}
	 else if(a==0 && b==0){
		cout << " phuong trinh co vo so nghiem";
	}
	else{
		cout << " phuong trinh co mot nghiem";
	}
return 0;	
}*/
#include<iostream>
using namespace std;
int main (){
	int a,b;
	cin >> a >> b;
	if(a==0){
		if(b!=0){
			cout << " phuong trinh vo nghiem ";
		}
		else{
			cout << " phuong trinh vo so nghiem";
		}
	}
	else{
		cout << " phuong trinh co mot nghiem ";
	}
return 0;	
}
