/*#include<stdio.h>

#include<conio.h>

#include<iostream>

#define max 100

using namespace std;

struct thuebao

{char ht[30];

float sdtt,sdtn,sotien;

};

thuebao nhap();

int thongke(thuebao [],int,float,float);

void xuat(thuebao [],int);

int main()

{thuebao a[max];

float dc;

int i,j,n,d;

cout<<"Nhap so thue bao n<="<<max<<", n= "; cin>>n;

cout<<"Nhap du lieu cua cac thue bao :\n";

for (i=0;i<n;i++)

{cout<<"Thue bao thu "<<i+1<<" :\n";

a[i]=nhap();

}

cout<<"\nGo Enter Tiep tuc ...";getch();

cout<<"\nBang thanh toan :\n\n";

xuat(a,n);

cout<<"\nGo Enter Tiep tuc ...";getch();

d=thongke(a,n,0,100);

printf("\nSo thue bao su dung <=100 so la %d, chiem %2.1f %\n\n",d,(float)d/n*100);

d=thongke(a,n,101,300);

printf("\nSo thue bao su dung tu 101 den 300 so la %d, chiem %2.1f %\n\n",d,(float)d/n*100);

d=thongke(a,n,301,3000);

printf("\nSo thue bao su dung tu tren 300 so la %d, chiem %2.1f %\n\n",d,(float)d/n*100);

cout<<"\nGo Enter ket thuc ...";getch();

}

thuebao nhap()

{thuebao ah;

float sd=0;

cout<<"Ho ten : ";gets(ah.ht);

do

{if (sd<0) cout<<"Nhap sai ! Hay nhap lai :\n";

cout<<"So dien thang truoc : ";cin>>ah.sdtt;

cout<<"So dien thang nay : ";cin>>ah.sdtn;

sd=ah.sdtn-ah.sdtt;

}while (sd<0);

if (sd<=100) ah.sotien=550*sd;

else if (sd<=150) ah.sotien=55000.0+900*(sd-100);

     else if (sd<=200) ah.sotien=100000.0+1210*(sd-150);

          else if (sd<=250) ah.sotien=160500.0+1340*(sd-200);

               else if (sd<=300) ah.sotien=227500.0+1500*(sd-250);

                   else ah.sotien=302500.0+2000*(sd-300);

return ah;

}

void xuat(thuebao x[],int k)

{int i,j;

printf("%-4s%-20s%-15s%-15s%-15s\n",

"Stt","Ho ten","SD thang truoc","SD thang nay","Tong so tien");

for (i=0,j=0;i<k;i++)

{j++;

printf("%-4d%-20s%-15.0f%-15.0f%-15.0f\n",

j,x[i].ht,x[i].sdtt,x[i].sdtn,x[i].sotien);

}

}

int thongke(thuebao x[],int n,float cd,float ct)

{int i,d=0;float sd;

for (i=0;i<n;i++)

{sd=x[i].sdtn-x[i].sdtt;

if ((sd>=cd) && (sd<=ct)) d++;

}

return d;

} */
#include<iostream>

#include<conio.h>

#include<stdio.h>

#define max 100

using namespace std;

struct thuebao{
	char ht[30];
	
	float sdtt,sdtn,tien;
};
thuebao nhap();

int thongke( thuebao[],int,float, float);

void xuat(thuebao[],int);

int main(){
	
	thuebao a[max];
	
	float dc;
	
	int i,j,n,d;
	
	cout <<"Nhap so thue bao < "<<max<<", n= "; cin >>n;
	
	cout <<"Nhap du lieu cac thue bao:\n";
	
	for(i=0;i<n;i++){
		
		cout <<"Thue bao thu "<<i+1<<":\n";
		
		a[i]=nhap();
	} 
	cout <<"\n Go Enter Tiep Tuc ..."; getch();
	
	cout <<"\n Bang thanh toan:\n\n";
	
	xuat(a,n);
	
	cout <<"\n Go Enter Tiep tuc..."; getch();
	
	d=thongke(a,n,0,100);
	
	printf("\n So thue bao su dung <=100 so la %d, chiem %2,1f\n\n",d,(float)d/n*100);
	
	d=thongke(a,n,101,300);
	
	printf("\n O thue bo su dung thu 101 den 300 so la %d, chiem %2.1f\n\n",d,(float)d/n*100);
	
	d=thongke(a,n,301,3000);
	
	printf("\n So thue bao su dung tren 300 so la %d, chiem %2.1f\n\n",d,(float)d/n*100);
	
	cout <<"\n Go Enter ket thuc ..."; getch();
}
thuebao nhap(){
	
	thuebao ah; float sd=0;
	
	cout <<"Ho ten: "; gets(ah.ht);
	
	do{
		if(sd<0) cout <<" Nhap sai ! Nhap lai : \n";
		
		cout <<" So dien thang truoc: "; cin >>ah.sdtt;
		
		cout <<"So dien thang nay: "; cin >>ah.sdtn;
		
		sd=ah.sdtn-ah.sdtt;
	}
	while(sd<0);
	
	if(sd<=100) ah.sdtn=550*sd;
	
	else if(sd<=150) ah.sdtn=55000.0+900*(sd-100);
	
	else if(sd<=200) ah.sdtn=100000.0+1210*(sd-150);
	
	else if(sd<=250) ah.sdtn=160500.0+1340*(sd-200);
	
	else if(sd<=300) ah.sdtn=227500.0+1500*(sd-250);
	
	else ah.sdtn=302500.0+2000*(sd-300);
	
	return ah;
}
void xuat(thuebao x[],int k){
	
	int i,j;
	
	printf("%-4s%-20s%-15s%-15s%-15s\n","stt","ho ten","SD thang truoc","SD thang nay","tong tien");
	
	for(i=0,j=0;i<k;i++){
		j++;
		
		printf("%-4d%-20s%-15.0f%-15.0f%-15.0f\n",j,x[i].ht,x[i].sdtt,x[i].sdtn,x[i].tien);
	}
}
int thongke(thuebao x[],int n, float cd, float ct){
	
	int i,d=0; float sd;
	
	for(i=0;i<n;i++){
		
		sd=x[i].sdtn-x[i].sdtt;
		
		if((sd>=cd)&&(sd<ct)) d++;
	}
	return d;
}
