#include<iostream>

#include<conio.h>

using namespace std;

int songuyento(int);

int nnguyento(int);

int main(){
	
	int n,d; 
	
	cout<<"Nhap n = "; cin >>n;
	
	songuyento(n);
	
	if(d) cout<<n<<" La so nguyen to";
	
	else cout<<n<<" Khong la so nguyen to";
	
	cout<<"\n Tat ca so nguyen to < "<<n<<" gom: ";
	
	nnguyento(n);
}
int songuyento(int n){
	
	int d =0;
	
	for(int i=2;i<=n;i++){
		
		if((n%i==0)&&(i<n)) {
			
			d=0; break;
		}
		
		else d=1; break;
	}
}
int nnguyento(int n){
	
	int d=0;
	
	int j=1;
	
	while(j<=n){
		
    	j++;
	
	for(int i=2;i<=j;i++){
		
		if(j%i==0) {
			
			d=0; break;
		}
		
		else d=1; break;
	}
		
		if(d) cout<<j<<" ";
	
	}
}
