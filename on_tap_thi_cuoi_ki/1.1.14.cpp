#include<iostream>
#include<math.h>
using namespace std;

bool kt1(int a, int k)// kiem tra co k chu so hay khong
{
	if(a>=pow(10,k-1) && a<=(pow(10,k)-1)) return 1;
	
	return 0;
}

bool kt2(int a)// kiem tra so nguyen to
{
	if(a<2) return 0;
	
	for(int i=2;i<=sqrt(a);i++){
		
		if(a%i==0) return 0;
	}
	return 1;
}

bool kt3(int a)// kiem tra dao nguoc co la so nguyen to khong
{
	
	int c=0;
	while (b>0){
		
		c=c*10+a%10;
		a/=10;
	}
 	if(kt2(c)==1) return 1;
 	
 	return 0
}

bool kt4(int a){
	
	while(a>0){
		
		if(kt2(a%10)==0) return 0;
		
		a/=10;
	}
	return 1;
}
int main(){
	
	
}
