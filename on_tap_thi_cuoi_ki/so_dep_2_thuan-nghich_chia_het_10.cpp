#include<iostream>

#include<math.h>

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
	
	int tong=0;
	
	while(a>0){
		
		tong=tong+a%10;
		a/=10;
	}
	return tong;
}
int main(){
	int n;
	
	cout<<"Nhap so bo test: "; cin>>n;
	
	int a[n],b[n];
	
	for(int i=0;i<n;i++) b[i]=0;
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap so chu so cua test "<<i+1<<" : ";cin>>a[i]; 
	}
	for(int i=0;i<n;i++){
		
		for(int j=pow(10,a[i]-1);j<pow(10,a[i])-1;j++){
			
			if(kt_thuan_nghich(j)==1 && tong(j)%10==0) b[i]++;
		}
	}
	for(int i=0;i<n;i++){
		
		cout<<b[i]<<endl;
	}
	return 0;
}
