#include<iostream>
#include<math.h>
using namespace std;
int kt_chinh_phuong(int a){
	
	int i=sqrt(a);
	
	if(i*i==a) return 1;
	
	else return 0;
}
struct botest{
	
	int a,b;
};
int main(){
	int n;
	
	cout<<"Nhap so bo test : "; cin>>n;
	
	botest bt[n+1];
	
	for(int i=0;i<n;i++){
		
		cout<<"\nNhap du lieu bo test "<<i+1<<" :\n";
		cout<<"\nNhap so thu nhat : "; cin>>bt[i].a;
		cout<<"\nNhap so thu hai : "; cin>>bt[i].b;
	}
	int c[n+1];
	
	for(int  i=0;i<n;i++) c[i]=0;
	
	for(int i=0;i<n;i++){
		
		for(int j=bt[i].a;j<=bt[i].b;j++){
			
			if(kt_chinh_phuong(j)==1) {
				c[i]++;
			}
		}
	}
	for(int i=0;i<n;i++)
	
	 cout<<c[i]<<endl;
	 
	return 0; 
}
