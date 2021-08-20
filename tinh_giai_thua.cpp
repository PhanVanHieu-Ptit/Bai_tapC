#include<conio.h>

#include<stdio.h>

int giaithua(int n){
	
	long gt=1;
	
	if(n==0 || n==1) return 1;
	
	else 
	 
	 for(int i=2;i<=n;i++) gt*=i;
	 
	 return gt;
}
int GTdequy(int n){
	
	if(n==0 || n==1) return 1;
	
	else return (n*GTdequy(n-1));
}
int main(){
	
	int n; printf("Nhap n: "); scanf("%d",&n);
	
	printf("%d! = %d\n",n,giaithua(n));
	
	printf("%d! = %d ",n,GTdequy(n));
	
	getch();
}
