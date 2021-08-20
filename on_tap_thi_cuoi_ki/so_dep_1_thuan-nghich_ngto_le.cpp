#include<iostream>

using namespace std;

int kt_thuan_nghich(int a){
	
	int b=a,c=0;
	
	if(a<=10) return 0;
	
	while(a>0){
		
		c=c*10+a%10;
		
		a/=10;
	}
	if(b==c) return 1;
	
	return 0;
}
int tong(int a){
	
	int b=0;
	
	while(a>0){
		b=b+a%10;
		a/=10;
	}
	return b;
}
int kt_so_nguyen_to(int a){
	
	if(a<2) return 0;
	
	for(int i=2;i<a;i++){
		
		if(a%i==0) return 0;
	}
	return 1;
}
int kt_le(int a){
	int b[9];
	int i=0;
	while(a>0){
		
		b[i]=a%10;
		
		a/=10;
		
		i++	;
	}
	for(int j=0;j<i;j++){
		
		if(b[j]%2==0) return 0;
	}
	return 1;
}
struct bo_test{
	
	int a, b;
};
int main(){

	int n,dem=0;
	
	cout<<"Nhap so bo test: "; cin>>n;
	
	bo_test a[n];
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap so cua bo test thu "<<i+1<<" :\n";
		
		cout<<"Nhap so thu nhat: "; cin>>a[i].a;
		
		cout<<"Nhap so thu hai: "; cin>>a[i].b;
	}
	int b[n];
	for(int i=0;i<n;i++) b[i]=0;
	for(int i=0;i<n;i++){
		
		for(int j=a[i].a;j<a[i].b;j++){
			
			if(kt_thuan_nghich(j)==1 &&kt_so_nguyen_to(tong(j))==1 && kt_le(j)==1)
			     b[i]++;
		}
	}
	for(int i=0;i<n;i++){
		
		cout<<b[i]<<endl;
	}	
	return 0;
}
