#include <iostream>

using namespace std;

const int MAX=100;

void nhap(int a[MAX], int n);

void xuat(int a[MAX], int n);

int timK(int a[MAX], int n, int k);

void sapxep(int a[MAX], int n);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,k;
	
	cout<<"Nhap n: "; cin>>n;
	
	int a[MAX];
	
	cout<<"Nhap mang: ";
	
	nhap(a,n);
	
	cout<<"Mang ban dau: ";
	
	xuat(a,n);
	
	cout<<"\nNhap k: "; cin>>k;
	
	if(timK(a,n,k)==-1){
		
		cout<<k <<"\nKhong co trong mang";
	}
	else cout<<k<<" co trong mang, o vi tri "<<timK(a,n,k);
	
	sapxep(a,n);
	
	cout<<"\nMang tang dan: ";
	
	xuat(a,n);
	
	
	return 0;
}
void nhap(int a[MAX], int n){
	
	for(int i=0;i<n;i++) cin>>a[i];
}
void xuat(int a[MAX], int n){
	
	for(int i=0;i<n;i++) cout<<a[i]<<"\t";
}
int timK(int a[MAX], int n, int k){
	
	for(int i=0;i<n;i++){
		
		if(a[i]==k) return i;
		
		
	}
	return -1;
}
void sapxep(int a[MAX], int n){
	
	int tg;
	
	for(int i=0;i<n-1;i++){
		
		for(int j=i+1;j<n;j++){
			
			if(a[i]>a[j]){
				
				tg=a[i];
				
				a[i]=a[j];
				
				a[j]=tg;
			}
		}
	}
}
