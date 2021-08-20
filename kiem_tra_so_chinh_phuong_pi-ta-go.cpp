/*#include<stdio.h>

#include<conio.h>

#include<math.h>

int socp(int);

int soptg(int);

int main()

{ 

int n;

printf("Nhap so nguyen duong n="); scanf("%d",&n);

if(socp(n))printf("\n%d la so chinh phuong",n);

else printf("\n%d khong phai so chinh phuong",n);

if(soptg(n))printf("\n%d la so Pitago",n);

else printf("\n%d khong phai so Pitago",n);

getch();

}

int socp(int n)

{int t=sqrt(n);

if(n==t*t)return 1;

else return 0;

}

int soptg(int n)

{int i;

if(!socp(n))return 0;

else

{for(i=1;i<n;i++)

if(socp(i)&&socp(n-i))break;

if(i<n)return 1;

else return 0;

}

}*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int socp(int);
int soptg(int);
int main(){
   int n;
   printf(" Nhap n: "); scanf("%d",&n);
   if(socp(n))
    printf("\n %d la so chinh phuong",n);
    else
     printf("\n %d khong phai so chinh phuong ",n);
   if(soptg(n))
    printf("\n %d la so pi ta go ",n);
   else	
    printf("\n %d khong phai so pi ta go ",n);
	getch();  
}
int socp(int n){
	int t=sqrt(n);
	if(n==t*t)
	return 1;
	else return 0;
}
int soptg(int n){
	int i;
	if(!socp(n))return 0;
	else{
		for( i=1;i<n;i++)
		 if(socp(n)&& socp(n-i)) break;
		 if(i<n) return 1;
		 else return 0;
	}

}
