#include<iostream>

using namespace std;

int main(){
	
	int th,nam;
	
	cout<<"Nhap thang: "; cin>>th;
	
	cout<<"Nhap nam : "; cin>>nam;
	
	if(th>=1 && th<=12){
		
		if(th==2){
			
			if((nam%4==0 && nam%100!=0) || nam%400==0){
				
				cout<<"Thang co 29 ngay";
			}
			else cout<<"Thang co 28 ngay";
		}
		else if(th==4 || th==6 || th==9 || th==11){
			
			cout<<"Thang co 30 ngay";
		}
		else cout<<"Thang co 31 ngay";
	}
	return 0;
}
