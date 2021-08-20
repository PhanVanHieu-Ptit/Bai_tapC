#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<math.h>

using namespace std;

int giaiptb4(float a, float b, float c);

int giaiptb2(float b, float c);

int main(){
	
	float a,b,c;
	
	cout <<" Nhap he so a,b,c : ";cin >> a >> b>> c;
	
	giaiptb4(a,b,c);
}
int giaiptb4(float a, float b, float c){
	
	float d;
	
	if(a!= 0 ){
		
		d=b*b-4*a*c;
		
		if(d<0) cout <<" Phuong trinh vo nghiem !";
		
		else if(d==0){
			
			if(-b/(2*a) > 0){
				
			cout <<" Phuong trinh co hai nghiem phan biet:\n";
			
			cout <<" X1 = "<<sqrt(-b/(2*a));
			
			cout <<"\nX2 = "<<-sqrt(-b/(2*a));
			}
			else if(-b/(2*a)==0) cout <<"Phuong trinh co nghiem kep X = 0";
			
			else cout <<"Phuong trinh vo nghiem!";
		}
		else{
			if((-b-sqrt(d))/(2*a)>0) {
			 
			 cout<<"phuong trinh co nghiem la:\n ";
			 
			 cout<<"X1 = "<<sqrt((-b-sqrt(d))/(2*a));
			 
			 cout <<"\nX2 = "<<-sqrt((-b-sqrt(d))/(2*a));	
			}
			else if((-b-sqrt(d))/(2*a)==0 || (-b+sqrt(d))/(2*a)==0)
			 cout <<"Phuong trinh co nghiem kep X = 0";
			
			else if((-b-sqrt(d))/(2*a)<0 || (-b+sqrt(d))/(2*a)<0) 
			 cout <<"Phuong trinh vo nghiem";
			
			else if((-b+sqrt(d))/(2*a)>0){
				
				cout <<"Phuong trinh co nghiem: ";
				
				cout <<"X3 = "<<sqrt((-b+sqrt(d))/(2*a));
				
				cout <<"\nX4 = "<<-sqrt((-b+sqrt(d))/(2*a));
			}
		} 
	}
	else{
		giaiptb2(b,c);
	}
}
int giaiptb2(float b, float c){
	
	float d;
	
	if(b!=0){
		
		d=-4*b*c;
		
		if(d<0) cout <<"Phuong trinh vo nghiem";
		
		else if(d==0) cout <<" Phuong trinh co nghiem kep x = 0";
		
		else {
			cout <<" Phuong trinh co 2 nghiem phan biet: ";
			
			cout <<" X1 = "<<-sqrt(d)/(2*b);
			
			cout <<" X2 = "<<sqrt(d)/(2*b);
		}
	}
	else {
		
		if(c==0) cout <<"Vo so nghiem!";
		
		else cout <<" Vo Dinh !!";
	}
}
