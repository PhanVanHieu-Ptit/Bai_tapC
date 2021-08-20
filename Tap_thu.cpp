#include <iostream>
const int MAX=100;
using namespace std;
void nhap(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
void xuat(int *a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int timvt(int a[MAX], int n, int x){
	
	int left=0;
	
	int right=n-1;
	
	int j;
	
	while(left<=right){
		j=(left+ right)/2;
		if(a[j]>=x &&a[j-1]<=x) return j;
		
		if(x>a[j]) left=j+1;
		
		else right=j-1;
	}
	return -1;
}
void themx(int a[MAX],int n, int x, int k){
	
	int *b=new int [n+1];
	
	for(int i=0;i<n;i++){
		
		b[i]=a[i];
		
		b[k]=x;
	}
	for(int i=k+1;i<n+1;i++){
		
		b[i]=a[i-1];
	}
/*	delete a;
	
	n++;
	a=new int [n];
	
	for(int i=0;i<n;i++)
	
	 a[i]=b[i];*/
	 
	 xuat(b,n);
}
int main()
{
	int a[MAX],n;
	
	cout<<"Nhap so luong phan tu: "; cin>>n;
	
	nhap(a,n);
	
	cout<<"Mang ban dau: ";
	
	xuat(a,n);
	
	int x;
	
	cout<<"Nhap phan tu can them : "; cin>>x;
	
	int k=timvt(a,n,x);
	
	themx(a,n,x,k);
	
	return 0;
	
}
