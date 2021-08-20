#include<conio.h>

int T1(int n){
	int s=0;
 
  for(int i=1;i<=n;i++)
 
  s+=i;
  
  return s;
}
 int T2(int n){
 	
 	int s=0;
 	
 	for( ;n;n--)
 	
 	 s+=n;
 	 
 	 return s;
 }
 int main(){
 	
 	int n=10;
 	
 	int s=T2(n);//n=10
 }
