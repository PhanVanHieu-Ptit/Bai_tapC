#include<iostream>

using namespace std;

int tinh(int s, int d, int &x, int &y){
	
	if(x>y) return 0;
	
	x=(s+d)/2;
	y=(s-d)/2;
	
	return 1;
}
struct bo_test{
	
	int s,d;
};
int main(){
	
	int n, x=0,y=0;
	
	cout<<"Nhap so bo test: "; cin>>n;
	
	bo_test a[n];
	
	for(int i=0;i<n;i++){
		
		cout<<"\nNhap so cua bo test "<<i+1<<" : \n";
		
		cout<<"Nhap tong : "; cin>>a[i].s;
		
		cout<<"Nhap hieu : "; cin>>a[i].d;
	}
	for(int i=0;i<n;i++){
		
		int k=tinh(a[i].s,a[i].d,x,y);
		
		if(k==0) cout<<"\nImpossible";
		
		else{
			cout<<x<<" "<<y<<endl;
		}
	}
	return 0;
}
