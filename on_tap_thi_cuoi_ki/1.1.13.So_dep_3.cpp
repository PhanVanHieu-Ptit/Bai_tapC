#include<iostream>// sai 
#include<math.h>
using namespace std;

bool kt_nguyen_to(int a){
	if(a<2) return 0;
	
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int tong(int a){
	int tong=0;
	
	while(a>0){
		
		tong=tong+a%10;
		a/=10;
	}
	return tong;
}
int tach(int a[9], int b){
	
	int t=0;
	
	while(b>0){
		
		a[t]=b%10;
		b/=10;
		t++;
	}
	return t;
}
bool kt_le(int a[9], int &t){
	
	for(int j=0;j<=t;j++){
		if(a[j]%2==0) return 0;
	}
	return 1;
}
bool thuan_nghich(int a){
	
	int b=a,c=0;
	
	if(a<10) return 0;
	
	while(a>0){
		
		c=c*10+a%10;
		a/=10;
	}
	if(b==c) return 1;
	
	return 0;
}

struct botest{
	
	int a,b;
};
int main(){
	int a[9];
	int n;
	
	cout<<"Nhap so bo test : "; cin>>n;
	
	botest bt[n+1];
	
	for(int i=0;i<n;i++){
		
		cout<<"\nNhap du lieu bo test "<<i+1<<" :\n";
		cout<<"\nNhap so thu nhat: "; cin>>bt[i].a;
		cout<<"\nNhap so thu hai: "; cin>>bt[i].b;
	}
    int c[n+1];
    for(int i=0;i<n;i++) c[i]=0;
    for(int i=0;i<n;i++){
    	
    	for(int j=bt[i].a; j<bt[i].b;j++){
    		int t=tach(a,j);
    		if(thuan_nghich(j) && kt_nguyen_to(tong(j)) && kt_le(a,t)) c[i]++;
		}
	}

	for(int i=0;i<n;i++) cout<<c[i]<<endl;
	return 0;
}
