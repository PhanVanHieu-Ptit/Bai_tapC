//Bài tap 2: Khai báo và nhap 1 mang có kích thuac n, tìm và in ra vi trí cua k trong mang (k nhap tu bàn phím).
// Neu k không có trong mang thì in ra -1;
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap N: "; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
 
    int k;
    cout << "Nhap K: "; cin >> k;
    int index = -1;
    for(int i=0; i<n; i++){
        if(a[i] == k){
            index = i;
            break;
        }
    }
    cout << "Vi tri tim thay: " << index;
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout <<" Nhap n: "; cin >>n;
	int a[n];
	for(int i=1;i<=n;i++)
	 cin >>a[i];
	int k;
	cout << " Nhap k: "; cin >> k;
	int vitri=-1;
	for(int i=1;i<=n;i++){
		if(a[i]==k)
		 {
		 vitri=i;
		 break;
		 }
	} 
	cout << " Vi tri cua " << k << " trong mang da nhap la:" << vitri;
	return 0;
}
