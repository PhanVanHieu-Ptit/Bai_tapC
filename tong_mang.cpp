//B�i tap 1: Khai b�o v� nhap 1 mang c� k�ch thuoc n, t�nh v� in ra m�n h�nh tung c�c phan tu trong mang.
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap N: "; cin >> n;
    // khai bao mang a co n phan tu
    int a[n];
    // nhap gia tri cho tung phan tu mang
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int tong = 0;
    for(int i=0; i<n; i++){
        tong += a[i];
    }
    cout << "Tong: " << tong;
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Nhap n: "; cin >> n;
	int a[n];
	for(int i=1;i<=5;i++)
	 cin>> a[i];
	int tong=0;
	for(int i=1;i<=5;i++)
	 tong +=a[i];
	cout <<" Tong cac phan tu vua nhap la: "<<  tong; 
	return 0;
}

