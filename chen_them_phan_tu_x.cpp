#include <iostream>// CO loi khi chen vao dau va cuoi
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
	
	if(x<=a[0]) return 0;
	
	else if(x>=a[n-1]) return n+1;
	
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
void themx(int a[MAX],int n, int x){
	
	int *b=new int [n+1];
    int k=timvt(a,n,x);
    
    if(k==0){
    	b[k]=x;
    	for(int i=0;i<n;i++){
    		b[i+1]=a[i];
		}
	}
	else if(k==n+1){
		b[k-1]=x;
		
		for(int i=0;i<n;i++){
			
			b[i]=a[i];
		}
	}
	else {
	   for(int i=0;i<n;i++){
		
		b[i]=a[i];
		
		b[k]=x;
	}
	   for(int i=k+1;i<n+1;i++){
		
		b[i]=a[i-1];
	}
	}
	 xuat(b,n+1);
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
	
	themx(a,n,x);
	
	return 0;
	
}
