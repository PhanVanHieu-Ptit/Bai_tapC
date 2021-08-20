/*#include<iostream>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		cin >> a[i];
	}
	cout << " cac phan tu vua nhap la "<< endl;
	for(int i=4;i>=0;i--){
		cout << " phan tu thu " << i << " la "<< a[i] <<endl;
	}
return 0;	
}*/
/*#include<iostream>
using namespace std;
int main(){
	int a[6];
	for( int i=0;i<6;i++){
		cin >> a[i];
		}
	cout << "so chia het cho 3 : ";	
	for( int i=0;i<6;i++){
		if(a[i]%3==0){
			cout << a[i] << " ";
		}
	}	
return 0;	
}
#include<iostream>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		cin  >> a[i];
	}
	for(int i=0;i<5;i++){
		if(a[i]==74){
			cout << " vi tri cua so 74 la "<< i;
			break;
		}
	}
return 0;
}
#include<iostream>
using namespace std;
int main (){
	int n;cin >> n;
	int a[n];
	for( int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			cout << " khong tang";
			return 0;	
		}
	}
	cout << " tang dan ";
return 0;	
}*/
#include<iostream>
using namespace std;
int main(){
	int n;cin >> n;
	int a[n+1];
	int count=0;
	for(int i=0;i<=n-1;i++){
		cin >> a[i];
		
	}
	for(int i=0; i<n;i++){
		if(a[i]==a[3]) count++;
		}
	cout << " so la xuat hien cua phan tu thu ba "<< count;
return 0;	
}
