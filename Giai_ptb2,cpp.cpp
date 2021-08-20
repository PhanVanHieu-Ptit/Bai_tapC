#include<iostream>

#include<conio.h>

#include<math.h>

using namespace std;

int giaipt(float d, float a, float b, float c);

int main(){
	
	float a,b,c,d;
	
	cout<<" Nhap cac he so a,b,c: "; cin>> a >>b >>c;

	giaipt(d,a,b,c);
	
	getch();
}
int giaipt(float d, float a, float b, float c){
	
	if(a!=0){
		
		d=b*b-4*a*c;
		
		if(d<0) cout <<"\nPhuong trinh vo nghiem !";
		
		else if(d==0) cout <<"\nPhuong trinh co nghiem kep x = "<<-b/(2*a);
		
		else {
			
			cout <<"\nPhuong trinh co hai nghiem phan biet:\n";
			
			cout <<"X1 = "<<(-b-sqrt(d))/(2*a);
			
			cout <<"\n X2 = "<<(-b+sqrt(d))/(2*a);
		}
	}
	else{
		cout <<"\nPhuong trinh tro thanh bac 1:\n";
		
		if(b!=0) cout <<"Nghiem x ="<<-c/b;
		
		else cout <<"Vo nghiem !";
	}
	
	
	
}
