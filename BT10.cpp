#include<iostream>
using namespace std;
int main (){
	int nam,thang;
	cout << " nhap nam: ";
	cin >> nam;
	cout << " nhap thang: ";
	cin >> thang;
	if(nam%400==0){
		switch(thang){
			case 2:
				cout << " thang nay co 29 ngay";
			    break;
			case 1:
			case 4:
			case 6:
			case 9:
			case 11:
				cout << " thang nay co 30 ngay";
				break;
			default:
			cout << " thang nay co 31 ngay ";
		}
	}
	else if(nam%400!=0) {
		switch(thang){
			case 2:
				cout << " ngay trong thang nay la 28 ngay";
			    break;
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				cout << " ngay trong thang nay la 31 ngay ";
				break;
			default:
				cout << " ngay trong thang nay la 30 ngay ";
		}
	}
	return 0;
}
