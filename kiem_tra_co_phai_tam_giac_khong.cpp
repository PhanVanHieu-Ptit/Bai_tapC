/*#include<stdio.h>

#include<conio.h>

#include<math.h>

int main()

{float a,b,c,p,s;

int deu,vuong,can;

printf("Nhap cac so thuc a, b, c : "); scanf("%f%f%f",&a,&b,&c);

if (a+b>c&&a+c>b&&b+c>a)

{printf("La ba canh mot tam giac ");

deu=(a==b)&&(b==c);

vuong=(a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a);

can=(a==b)||(a==c)||(b==c);

if(deu)printf(" deu\n");

else if(vuong&&can)printf(" vuong can\n");

     else if(vuong)printf(" vuong\n");

          else if(can)printf(" can\n");

               else printf(" thuong\n");

p=(a+b+c)/2;

printf("Chu vi = %4.2f, Dien tich = %4.2f",2*p,sqrt(p*(p-a)*(p-b)*(p-c)));

}else printf("Khong phai la ba canh mot tam giac\n");

getch();

}*/
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c,p,s;
	int deu,vuong,can;
	printf("Nhap cac so thuc a,b,c: "); scanf("%f%f%f",&a,&b,&c); 
	if(a+b>c && a+c>b && b+c>a){
		printf("La ba canh mot tam giac ");
		deu=(a==b && b==c && a==c);
		can=( a==b or b==c or a==c);
		vuong=(a*a+b*b==c*c or a*a+c*c==b*b or b*b+c*c==a*a);
	    if(deu)
	      printf("deu\n");
	    else if(vuong && can)
	      printf("vuong can\n");
	    else if( vuong)
	      printf("vuong\n");
	    else if(can)
	      printf("can\n"); 
	    else
	      printf("thuong\n");
    p=(a+b+c)/2;
    printf("Chu vi = %4.2f, Dien tich = %4.2f",2*p,sqrt(p*(p-a)*(p-b)*(p-c)));
    }
    else{
    	printf (" Khong phai la tam giac");
	}
     getch();
}
