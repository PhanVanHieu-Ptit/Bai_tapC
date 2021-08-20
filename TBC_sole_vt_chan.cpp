/*#include<iostream>

const int MAX=100;

using namespace std;

int main(){
	
	int a[MAX],n,d=0;
	
	float tbc=0;
	
	cout<<"Nhap n: ";cin>>n;
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap phan tu thu "<<i+1<<" : ";cin>>a[i];
		
		if(a[i]%2!=0 && (i%2==0 || i==0)) {
			tbc+=a[i];
			d++;
		}
	}
	cout<<"TBC cua n phan tu ban vua nhap : "<<tbc/d;
}*/
#include<iostream>
using namespace std;
const int MAX=100;
void nhap(int arr[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap phan tu thu "<<i+1<<" : "; cin>>arr[i];
	}
}
int main(){
	int arr[MAX],n;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Nhap cac phan tu trong mang:  ";
	nhap(arr,n);
	int sum = 0;
    int count = 0;
    for(int i = 1; i < n; i+=2){
        if(arr[i] % 2 == 1){
            ++count;
            sum += arr[i];
        }
    }
    printf("\nTrung binh cong = %f", (float)sum/count);
}
