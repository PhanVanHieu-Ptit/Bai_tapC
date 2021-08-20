/*#include<stdio.h>

#include<conio.h>

int main()

{ int n,i,j,d;

printf("Nhap gia tri N : "); scanf("%d", &n);

printf("Cac so nguyen to khong vuot qua %d la :\n",n);

for (d=0,i=2;i<=n;i++)

{for (j=2;j<=i/2; j++)

        if(i%j==0)break;

        if (j==i/2+1)

        {d++;

             printf(" %d",i);

         }

 }

 printf("\nTong so co %d so nguyen to",d);

 getch();

} */
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main(){
	int n,d,j;
	printf(" Nhap n: "); scanf("%d",&n);
	printf(" Cac so nguyen to nho hon %d la: \n",n);
	for(int i=2;i<n;i++){
		for( j=2;j<=i/2;j++)
		 if(i%j==0) break;
		 if(j==i/2+1){
		 	d++;
		 	printf("%d ",i);
		 }
	}
	printf("\nCo tong cong %d so nguyen to",d);
	getch();
}
