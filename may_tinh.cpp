#include<iostream>

#include<conio.h>

#include<math.h>

#define e 2.718

using namespace std;

int maytinh(char s,float a,float b);

int main(){
	
	float a,b;
	
	char s; 
	
	cout <<"Chon phep tinh can tinh: "; cin>> s;
	
	if(s=='^'){
		
		cout <<" Nhap co so a = "; cin>>a;
		do{
			cout <<" Nhap so mu x = "; cin>>b;
		
		if(b<0) cout <<" Nhap sai, nhap lai ! (x>0)\n"; 
		}
		while(b<0);
    }
    
	else if(s=='@'){
		do{
			cout<<"Nhap so mu x = "; cin>>b;
			
			if(b<0) cout <<" Nhap sai, nhap lai! (x>0)\n";
		}
		while(b<0);
	}
	else if(s=='/'){
		
		cout <<" Nhap a = "; cin >>a;
		
		do{
			cout<<"Nhap b ="; cin>> b;
			
			if(b==0) cout <<" Nhap sai, nhap lai !(b khac 0)\n";
		}
		while(b==0);
	}
	else{
		
	cout <<" Nhap cac so can tinh a , b: "; cin >>a >>b;
	}	
	 
	maytinh(s,a,b);
	
	getch();	
}
int maytinh(char s, float a, float b){
	
	float kq=0;
	
	switch(s){
		
		case '+': kq=a +b;break;
		
		case '-': kq=a-b;break;
		
		case '*': kq=a*b;break;
		
		case '/': kq=a/b;break;
		
		case '^': kq=pow(a,b);break;
		
		case '@': kq=pow(e,b);
	}
	if(s=='@')
	
	 printf(" e ^ %f = %f",b,kq);
	 
	else printf(" %f %c %f = %f",a,s,b,kq);
}
	 


