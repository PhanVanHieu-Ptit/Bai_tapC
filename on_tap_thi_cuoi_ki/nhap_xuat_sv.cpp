#include<iostream>

#include<string.h>

#include<fstream>

#include<conio.h>

#include<stdio.h>

const int MAX=100;

using namespace std;

struct sinhvien{
	
	int maso;
	
	char hoten[50];
	
	float diem;
	
	char phai[5];
};
void nhap(sinhvien sv[MAX], int &n){
	
while(1){
    	
    cout<<"Nhap thong tin sinh vien thu "<<n+1<<" :\n";
    	
    cout<<"Nhap ma so: "; cin>>sv[n].maso;
    	
    if(sv[n].maso==0) break;
	
	cout<<"Nhap ho ten: "; 
	
	fflush(stdin);
	
	gets(sv[n].hoten);
	
	cout<<"Nhap diem: ";  cin>>sv[n].diem;
	
	cout<<"Nhap gioi tinh: ";
	
	fflush(stdin);
	
	gets(sv[n].phai);
	
	n++;
	}
}
void xuat(sinhvien &a){
	
	cout<<a.maso<<"\t"<<a.hoten<<"\t"<<a.diem<<"\t"<<a.phai<<endl;
}
void xuatDS(sinhvien sv[MAX], int n){
	
	for(int i=0; i<n;i++){
		
		xuat(sv[i]);
	}
}
void luufile(sinhvien sv[MAX], int n){
	
	ofstream outfile("DSSV.bin",ofstream::binary);
	
	for(int i=0;i<n;i++){
		
		sinhvien a=sv[i];
		
		outfile.write((char *)&a,sizeof(sinhvien));
	}
	outfile.close();
}
void docfile(sinhvien sv[MAX], int &n){
	
	ifstream infile("DSSV.txt",ifstream::binary);
	
	infile.seekg(0,infile.end);
	
	long size=infile.tellg();
	
	infile.seekg(0);
	
	n=size/sizeof(sinhvien);
	
	sv=new sinhvien[n];
	
	for(int i=0;i<n;i++){
		
		sinhvien a;
		
		infile.read((char *)&a,sizeof(sinhvien));
		
		sv[i]=a;
	}
	infile.close();
}
int main(){
	
	int n=0;
	
	sinhvien sv[MAX];
	
//	docfile(sv,n);
	
	nhap(sv,n);
	
	xuatDS(sv,n);
	
	luufile(sv,n);
	
	
	
	cout<<"\nDanh sach sinh vien doc tu file:\n";
	
	xuatDS(sv,n);
	
	return 0;
}
