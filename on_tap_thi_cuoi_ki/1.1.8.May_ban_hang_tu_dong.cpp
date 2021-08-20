#include<iostream>

using namespace std;

struct sanpham{
	
	int a,b;
};
void doitien(int a, int b, int c[3], int d[3]){
	
	int m=b-a;
	
	for(int i=0;i<3;i++) d[i]=0;
	for(int i=0;i<3;i++) {
		
		d[i]=m/c[i];
		m=m-d[i]*c[i];
	}
		
}

struct thongke{
	int c[3]={10,5,1};
	int d[3];
};
int main(){
	int n;
	
	cout<<"Nhap so bo test: "; cin>>n;
	
	sanpham sp[n+1];
	
	for(int i=0;i<n; i++){
		
		cout<<"\nNhap du lieu cho test "<<i+1<<" :\n";
		cout<<"\nNhap gia san pham : "; cin>>sp[i].a;
		cout<<"\nNhap so tien ban dua: "; cin>>sp[i].b;
	}
	thongke tk[n+1];
	for(int i=0;i<n;i++){
		
		doitien(sp[i].a,sp[i].b,tk[i].c,tk[i].d);
	}
	for(int i=0;i<n;i++){
		
		cout<<sp[i].b-sp[i].a<<" = ";
		
		for(int j=0;j<3;j++){
			
				cout<<tk[i].d[j]<<"*"<<tk[i].c[j];
				
				if(j!=2) cout<<" + ";
				
				else cout<<" ";
			
		}
		cout<<endl;
	}
	return 0;
}
