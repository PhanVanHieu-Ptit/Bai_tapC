/*#include<stdio.h>
#include<conio.h>
int main()
{int a,b;char dv,chuc,tram;

printf("Nhap so bi nhan co 3 chu so a="); scanf("%d",&a);
printf("Nhap so nhan co 3 chu so b="); scanf("%d",&b);
dv=b%10; chuc=b%100/10; tram=b/100;
printf("\nMo phong phep nhan tay\n\n");
printf("%20d\n",a);
printf("%15c%5d\n",'x',b);
printf("%20s\n","-------");
printf("%20d\n",a*dv);
printf("%19d\n",a*chuc);
printf("%18d\n",a*tram);
printf("%20s\n","-------");
printf("%20ld\n",long(a)*b);
getch();

}*/
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main(){
	char don_vi,chuc,tram;
	int a,b;
	//printf("Nhap so bi nhan co ba chu so a = "); scanf("%d",&a);
	cout << " Nhap so bi nhan co ba chu so a = ";
	cin >> a;
	//printf(" Nhap so nhan co ba chu so b= "); scanf("%d",&b);
	cout << " Nhap so nhan co ba chu so b = "; cin >> b;
	don_vi=b%10; chuc=b%100/10; tram=b/100;
	//printf("\n Mo phong phep nhan tay\n\n ");
	cout << "\n Mo phong bang tinh tay phep  nhan \n\n";
	//printf("%20d\n",a);
	cout <<"  " <<  a <<"\n";
	//printf("%15c%5d\n",'x',b);
	cout << 'x' << " " << b <<"\n";
	//printf("%26s\n","-------------");
	cout << "-------------\n";
	//printf("%23d\n",a*don_vi);
	cout << "    " << a*don_vi << "\n";
	//printf("%22d\n",a*chuc);
	cout <<"   " << a*chuc << "\n";
	//printf("%21d\n",a*tram);
	cout <<"  " << a*tram << "\n";
	//printf("%26s\n","-------------");
	cout << "-------------\n";
	//printf("%20ld\n",long(a)*b);
	cout << a*b << "\n";
	//getch();
	return 0;
}
