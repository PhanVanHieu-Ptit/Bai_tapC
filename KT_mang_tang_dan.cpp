//Bài tap 3: Khai báo và nhap 1 mang có kích thuoc n, kiem tra xem mang có phai mang tang dan hay không?
/*#include <iostream>
using namespace std;

int main(){
    int n;  cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    bool isAscending = true;
    for(int i=1; i<n; i++){
        if(a[i] <= a[i-1]){
            isAscending = false;
            break;
        }
    }
    if(isAscending) cout << "Mang tang dan";
    else cout << "Khong";
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
	int n; 
	cout << " Nhap n: "; cin >>n;
	int a[n];
	for(int i=1;i<=n;i++)
	 cin >> a[i];
	bool giatri=1;
	for(int i=1;i<=n;i++){
		if(a[i+1]<=a[i]){
			giatri=0;
			break;
		}
	} 
	if(giatri==1)
	 cout << " Day vua nhap la day tang !";
	else
	 cout << " Day vua nhap chua chac la day tang !";
	
	return 0;
}
