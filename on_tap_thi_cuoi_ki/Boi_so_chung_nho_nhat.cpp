#include<iostream>

using namespace std;

struct bo_test{
	
	int a,b;
};
int max(int a, int b){
	
	int max=a;
	
	if(max<b) max=b;
	
	return max;
}
int main(){
	int n;
	
	bo_test a[n];
	
	cout<<"Nhap so bo test: "; cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"\nNhap hai so cua test "<<i+1<<" :\n";
		cout<<"Nhap so thu nhat : "; cin>>a[i].a;
		cout<<"Nhap so thu hai : "; cin>>a[i].b;
	}
	int c[n],d[n];
	for(int i=0;i<n;i++){
		c[i]=0;
		d[i]=0;
	}
	for(int i=0;i<n;i++){
		
		c[i]=max(a[i].a,a[i].b);
	}
	for(int i=0;i<n;i++){// co loi
		
		for(int j=c[i]; j<=a[i].a*a[i].b;j++){
			
			if(j%a[i].a==0 && j%a[i].b==0){
				
				d[i]=j;
				
				break;
				
			}
		}
	}
	for(int i=0;i<n;i++){
		
		cout<<d[i]<<endl;
	}
	return 0;
}
