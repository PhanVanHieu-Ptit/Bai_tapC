//B�i tap 3: Khai b�o v� nhap 1 mang c� k�ch thuoc n, kiem tra xem mang c� phai mang tang dan hay kh�ng?
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
