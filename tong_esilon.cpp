#include<iostream>

#include<conio.h>

#define esl 0.0000001

using namespace std;

int tongngn();

int tongngn2();

int main(){
	
	cout<<"Tong nghich dao cac so den khi so cuoi cung khong dang ke, s = ";
	
	tongngn();
	
	cout<<"\nTong nghich dao cac binh phuong den khi so cuoi cung khong dang ke, s = ";
	
	tongngn2();
}
int tongngn(){
	
	float s=0;
	
	for(int i=1; ;i++){
		
		if(1/(float)i>= esl) s+=1/(float)i;
		
		else break;
	}
	 cout<<s;
		 
}
int tongngn2(){
	
	float s=0;
	
	for(int i=1; ; i++){
		
		if(1/(float)(i*i)>= esl) s+=1/(float)(i*i);
		
		else break;
	}
	cout<<s;
}
