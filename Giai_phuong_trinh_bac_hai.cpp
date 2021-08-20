/*#include<stdio.h>

#include<conio.h>

#include<math.h>

int main()

{float a,b,c,d;

printf("Nhap cac he so a, b, c : "); scanf("%f%f%f",&a,&b,&c);

if (a)

{d=b*b-4*a*c;

if (d<0) printf("Vo nghiem !");

if (d==0) printf("Nghiem kep x=%4.2f",-0.5*b/a);

if (d>0)

{printf("Hai nghiem phan biet :\n");

printf("x1=%4.2f",0.5*(-b-sqrt(d))/a);

printf(" x2=%4.2f",0.5*(-b+sqrt(d))/a);

}

}else if (b) printf("Mot nghiem x=%4.2f",-c/b);

else if (c) printf("Vo nghiem !");

else printf("Vo so nghiem !");

getch();

}*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	float a, b,c,denta; 
	//printf("Nhap a,b,c: "); scanf("%f%f%f",&a,&b,&c);
	cout << " Nhap a,b,c: "; cin>> a >> b >> c;
	denta=b*b-4*a*c;
	if(a!=0){
		if(denta<0)
		 //printf("He phuong trinh vo nghiem");
		 cout << " He phuong trinh vo nghiem";
		else if(denta==0){
	     //printf(" He co nghiem kep la:%4.2f ",-0.5*b/a); 
	     cout << " He co nghiem kep la: " << -0.5*b/a;
		}
		else{
			//printf(" He co hai nghiem phan biet :\n");
			cout << " He co hai nghiem phan biet: \n";
			//printf("x1= %4.2f",0.5*(-b-sqrt(denta))/a);
			cout << "x1= " << 0.5*(-b-sqrt(denta))/a;
			//printf("x2= %4.2f",0.5*(-b+sqrt(denta))/a);
			cout << "x2= " << 0.5*(-b+sqrt(denta))/a;
		}
		
	}
	else if(a==0){
		if(b==0){
			//printf("He vo nghiem");
			cout << "He vo nghiem";
		}
		else{
			//printf("He co nghiem la: %4.2f",-c/b);
			cout << " He co nghiem la: " << -c/b;
		}
	}
	//getch();
	return 0;
}
