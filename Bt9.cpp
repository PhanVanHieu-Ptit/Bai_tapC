/*#include<iostream>
using namespace std;
int main (){
	int n;
	cin >> n;
	switch(n){
		case 1:
			cout << " so ngay trong thang la 30";
			break;
		case 2:
		    cout << " so ngay trong thang la 28 ";
		    break;
		case 3:
		 cout << " so ngay trong thang la 31 ";
		 break;
		case 4:
		 cout << " so ngay trong thang la 30 ";
		 break;
		case 5:
		 cout << " so ngay trong thang la 31 ";
		 break;
		case 6:
		 cout << " so ngay trong thang la 30 ";
		 break;
		case 7:
		 cout << " so ngay trong thang la 31 ";
		 break;
		case 8:
		 cout << " so ngay trong thang la 31 ";
		 break;
		case 9:
		 cout << " so ngay trong thang la 30 ";
		 break;
		case 10:
		 cout << " do ngay trong thang la 31 ";
		 break;
		case 11:
		 cout << " so ngay trong thang la 30 ";
		 break;
		case 12:
		 cout << " so ngay trong thang la 31";
				
	}
return 0;
}*/
#include<iostream>
using namespace std;
int main (){
    int thang;
    cin >> thang;
	switch(thang){
		case 2: 
		 cout << " thang nay co 28 ngay ";
		 break;
		case 1:
		case 4:
		case 6:
		case 9:
		case 11:
			cout << " thang nay co 30 ngay ";
			break;
		default:
			cout << " thang nay co 31 ngay ";
		/*case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << " thang nay co 31 ngay ";
			break;*/
	}
return 0;
}
