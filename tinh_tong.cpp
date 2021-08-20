#include<conio.h>

#include<iostream>

#include<math.h>

using namespace std;

int tongn(int);

int tongle(int);

int tongchan(int);

int tongbp(int);

int tongngn(int);

int tonglt(int);

int tongngn2(int);

int main(){
	
	int n;
	
	cout<<"Nhap n = "; cin >>n;
	
	cout<<"\n Tong <= n , s = ";
	
	tongn(n);
	
	cout<<"\n Tong le, s = ";
	
	tongle(n);
	
	cout<<"\n Tong chan, s = ";
	
	tongchan(n);
	
	cout<<"\n Tong binh phuong, s = ";
	
	tongbp(n);
	
	cout<<"\n Tong cua 1/n , s = ";
	
	tongngn(n);
	
	cout<<"\n Tong luy thua, s = ";
	
	tonglt(n);
	
	cout<<"\nTong nghich dao cac binh phuong, s = ";
	
	tongngn2(n);
}
int tongn(int n){
	
	int s=0;
	
	for(int i=1;i<=n;i++)
	 
	 s+=i;
	 
	 cout<<s;
}
int tongle(int n){
	
	int s=1;
	
	for(int i=2;i<=n;i++)
	 
	 if(i%2!=0) s+=i;
	 
	 cout<<s;
}
int tongchan(int n){
	
	int s=0;
	
	for(int i=2;i<=n;i++)
	 
	 if(i%2==0) s+=i;
	 
	 cout<<s;
}
int tongbp(int n){
	
	int s=0;
	
	for(int i=1;i<=n;i++)
	
	s+=i*i;
	
	cout<<s;
}
int tongngn(int n){
	
	float s=0;
	
	for(int i=1;i<=n;i++)
	 
	 s+=1/(float)i;
	 
	 cout<<s;
}
int tonglt(int n){
	
	int s=0;
	
	for(int i=1;i<=n;i++)
	
	s+=pow(2,i);
	
	cout<<s;
}
int tongngn2(int n){
	
  float s=0;
  
  for(int i=1;i<=n;i++)
   
   s+=1/(float)(i*i);
   
   cout<<s;
}
