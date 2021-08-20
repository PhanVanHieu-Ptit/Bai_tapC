#include<iostream>

#include<stdio.h>

#include<conio.h>

#include<string.h>

const int MAX=100;

using namespace std;

struct sinhvien{
	
	char hoten[30];
	
	int tuoi,hang;
	
	float tb1,tb2;
};
void nhap(sinhvien &sv){
	
	cout<<"\nNhap ten: ";
	
	fflush(stdin);
	
	gets(sv.hoten);
	
	cout<<"\nNhap tuoi: "; cin>>sv.tuoi;
	
	cout<<"\nNhap diem TB HKI: "; cin>>sv.tb1;
	
	cout<<"\nNhap diem TB HKII: "; cin>>sv.tb2;	
}
void nhapDS(sinhvien dssv[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap thong tin sinh vien thu "<<i+1<<" :\n";
		
		nhap(dssv[i]);
	}
}
void xuat(sinhvien sv){
	
	cout<<sv.hoten<<"\t"<<sv.tuoi<<"\t"<<sv.tb1<<"\t"<<sv.tb2<<"\t"<<(sv.tb1+sv.tb2)/2<<endl;
}
void xuathang(sinhvien sv){
	
	cout<<sv.hoten<<"\t"<<sv.tuoi<<"\t"<<sv.tb1<<"\t"<<sv.tb2<<"\t"<<(sv.tb1+sv.tb2)/2<<"\t"<<sv.hang<<endl;
}
void xuatDShang(sinhvien dssv[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"\t"<<i+1<<"\t";
		
		xuathang(dssv[i]);
	}
}
void xuatDS(sinhvien dssv[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"\t"<<i+1<<"\t";
		
		xuat(dssv[i]);
	}
}
void sapxep(sinhvien dssv[MAX], int n){
	sinhvien tg;
	for(int i=0;i<n;i++){
		
		for(int j=i+1;j<n;j++){
			
			if((dssv[i].tb1+dssv[i].tb2)/2<(dssv[j].tb1+dssv[j].tb2)/2){
				tg=dssv[i];
				dssv[i]=dssv[j];
				dssv[j]=tg;
			}
		}
	}
	for(int i=0;i<n;i++){
		
		dssv[i].hang=i+1;
	}
}
int main(){
	sinhvien dssv[MAX];
	
	int n;
	
	do{
		
		cout<<"\nNhap so luong sinh vien: "; cin>>n;
		
		if(n<=0 || n>100) cout<<"\nNhap sai, nhap lai";
	}
	while(n<=0 || n>100);
	
	nhapDS(dssv, n);
	
	cout<<"\nDanh sach sinh vien: \n\n";
	
	xuatDS(dssv,n);
	
	sapxep(dssv,n);
	
	cout<<"\nDanh sach sinh vien sau sap xep:\n\n";
	
	xuatDShang(dssv,n);
	
	return 0;
}
