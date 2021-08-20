/*#include<iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];	
	}
	int tong=0;
	for(int i=0;i<n;i++){
		tong += a[i];
	}
	cout << " tong cac phan tu co trong mang = " << tong;
return 0;	
}*/
/*#include<iostream>
using namespace std;
int main(){
	int n;
	cout << " nhap n ";
	cin >> n;
	int a[n];
	cout << " nhap cac phan tu cua mang ";
	for ( int i=0;i<n;i++){
		cin >> a[i];
	}
	int k;
	cout << " nhap k ";cin >> k;
	int index= -1;
	for(int i=0;i<n;i++){
		if(a[i]==k){
			index=i;
		}
	}
	cout << " vi tri tim thay cua so k trong mang la :" << index;
return 0;	
}*/
#include<iostream>
using namespace std;
int main(){
	int n;cout << " nhap n ";cin >> n;
	int a[n];
	cout << " nhap cac phan tu cua mang ";
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for( int i=0;i<n;i++){
		if(a[i+1]<a[i]){
			cout<< " Mang vua nhap khong phai la mang tang";
			return 0;
		}
	}
	cout << " Mang vua nhap la mang tang ";
return 0;	
}
