/*#include<stdio.h>

#include<conio.h>

#include<iostream>

#define max 50

using namespace std;

int main()

{struct

{char ht[30];

char sbd[10];

float dt,dl,dh,td;

} a[max];

float dc;

int i,j,n;


cout<<"Nhap so thi sinh n<="<<max<<", n= ";

cin>>n;

cout<<"Nhap du lieu cua cac thi sinh :\n";

for (i=0;i<n;i++)

{cout<<"Thi sinh thu "<<i+1<<" :\n";

cout<<"Ho ten : ";gets(a[i].ht);

cout<<"So bao danh : ";gets(a[i].sbd);

cout<<"Diem toan : ";cin>>a[i].dt;

cout<<"Diem ly : ";cin>>a[i].dl;

cout<<"Diem hoa : ";cin>>a[i].dh;

a[i].td=a[i].dt+a[i].dl+a[i].dh;

}

cout<<"Nhap diem chuan dc="; cin>>dc;

cout<<"\nGo Enter Tiep tuc ...";getch();


cout<<"\nDanh sach thi sinh :\n\n";

printf("%-4s%-20s%-10s%-10s%-10s%-10s%-10s\n",

       "Stt","Ho ten","SBD","Dtoan","Dly","Dhoa","Tong");

for (i=0;i<n;i++)

printf("%-4d%-20s%-10s%-10.1f%-10.1f%-10.1f%-10.1f\n",

       i+1,a[i].ht,a[i].sbd,a[i].dt,a[i].dl,a[i].dh,a[i].td);

cout<<"\nGo Enter Tiep tuc ...";getch();


cout<<"\nDanh sach thi sinh trung tuyen :\n\n";

printf("%-4s%-20s%-10s%-10s%-10s%-10s%-10s\n",

       "Stt","Ho ten","SBD","Dtoan","Dly","Dhoa","Tong");

for (i=0,j=0;i<n;i++)

if (a[i].td>=dc)

{j++;

printf("%-4d%-20s%-10s%-10.1f%-10.1f%-10.1f%-10.1f\n",

      j,a[i].ht,a[i].sbd,a[i].dt,a[i].dl,a[i].dh,a[i].td);

}

cout<<"\nGo Enter ket thuc ...";getch();

}*/
#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<string.h>

#include<stdlib.h>

#include<stdlib.h>

#define max 50

using namespace std;

struct sinhvien{
		
	char ht[30];
	
	char sbd[10];
	
	float dt,dl,dh,td;
};
int main(){
	
	
	int a[max];
	
	sinhvien sv[max];
	
	float dc;
	
	int i,j,n;
	
	cout <<" Nhap so thi sinh n<= " <<max <<", n = "; cin >>n;
	
	cout <<" Nhap du lieu cac thi sinh: \n";
	
	for ( i=0;i<n;i++){
		
		cout <<" Thi sinh thu "<<i+1 <<" :\n ";
		
		cout<<"Ho ten : ";gets(sv[i].ht);//cout <<"\n Ho ten : " ; gets(a[i].ht);
		
		cout <<"\n So bao danh: "; gets(sv[i].sbd);
		
		cout <<"\n Diem toan: "; cin>> sv[i].dt;
		
		cout <<"\n Diem ly: "; cin>> sv[i].dl;
		
		cout <<"\n Diem hoa: "; cin>> sv[i].dh;
		
		sv[i].td= sv[i].dt + sv[i].dl + sv[i].dh;
	}	

     cout <<"\n Nhap diem chuan dc = "; cin >>dc;

     cout <<"\n Go Enter Tiep tuc ... "; getch();

     cout <<"\n Danh sach thi sinh: \n\n";

     printf("%-4s%-20s%-10s%-10s%-10s%-10s%-10s\n",
       "stt","Hoten","SBD","DToan","DLy","DHoa","Tong");
    for(i=0;i<n;i++)
	
	printf("%-4d%-20s%-10s%-10.1f%-10.1f%-10.1f%-10.1f\n",
	       i+1, sv[i].ht,sv[i].sbd, sv[i].dt, sv[i].dl, sv[i].dh, sv[i].td);
	       
    cout<<"\n Go Enter Tiep tuc ..."; getch();
	     
	cout <<"\n Danh sach trung tuyen:\n\n";
	
	printf("%-4s%-20s%-10s%-10s%-10s%-10s%-10s\n",
	      "stt","Hoten","SBD","DToan","DLy","DHoa","Tong");	
		  
	for(i=0,j=0;i<n;i++)
	
	if(sv[i].td>=dc){
		
		j++;
		
		printf("%-4d%-20s%-10s%-10.1f%-10.1f%-10.1f%-10.1f\n",
		   j, sv[i].ht, sv[i].sbd,sv[i].dt, sv[i].dl, sv[i].dh, sv[i].td);
		  	   
	}	   
	
	cout <<"\n Go Enter ket thuc ..."; getch();  
}


