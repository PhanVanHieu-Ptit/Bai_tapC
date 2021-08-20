#include<iostream>
#include<math.h>
using namespace std;
struct donvi{
	
	int c[9];
};
int kt_nguyen_to(int a){
	if(a<2) return 0;
	
	for(int i=2;i<=sqrt(a);i++){
		
		if(a%i==0) return 0;
	}
	return 1;
}
int tong(int a){
	
	int tong=0;
	
	while(a>0){
		
		tong+=a%10;
		a/=10;
	}
	return tong;
}
void tach(int a,donvi &dv){
	
	for(int i=0;i<9;i++) dv.c[i]=0;
	int i=0;
	while(a>0){
	  dv.c[i]=a%10;
	  a/=10;
	  i++;	
	}
	for(; i<9;i++) dv.c[i]=-1;
}
struct botest{
	
	int a,b;
};
int kt_tung_dv(donvi dv){
	
	for(int i=0;i<9;i++){
		
		if(dv.c[i]!=-1 && kt_nguyen_to(dv.c[i])==0) return 0;
	}
	return 1;
}

int main(){
	
	int n;
	
	cout<<"Nhap so bo test : "; cin>>n;
	
	botest bt[n+1];
	
	for(int i=0;i<n;i++){
		
		cout<<"\nNhap du lieu cho bo test "<<i+1<<" :\n";
		cout<<"\nNhap so thu nhat : "; cin>>bt[i].a;
		cout<<"\nNhap so thu hai : "; cin>>bt[i].b;
	}
	donvi dsdv[n+1],dv;
	int d[n+1];
	for(int i=0;i<n;i++){
		for(int j=bt[i].a;j<bt[i].b;j++){
			tach(j,dsdv[i]);
			if(kt_nguyen_to(j) && kt_nguyen_to(tong(j)) && kt_tung_dv(dsdv[i])) d[i]++;
		}
	}
	for(int i=0;i<n;i++)
	
	 cout<<d[i]<<endl;
	 
	return 0;
	
}
