#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<string.h>

#include<fstream>

const int MAX=1000;

using namespace std;

struct giangvien{
	
	int maso;
	
	char hoten[30];
	
	char makhoa[5];
};
int kt(giangvien a[MAX], int n, int ms){
	
	for(int i=0;i<n;i++){
		
		if(a[i].maso==ms) return 1;
	}
	return 0;
}
int nhap(giangvien a[MAX], int &n){
	
	for(int i=0;i<MAX;i++){
		
		cout<<"Nhap thong tin giang vien thu "<<i+1<<" :\n";
		do{
		cout<<"\nNhap ma so: ";
		
		cin>>a[i].maso;
		
		if(a[i].maso<=0) return 0;
		
		if(kt(a,n,a[i].maso)==1) cout<<"CO LOI, nhap lai"; 
		}
		while(kt(a,n,a[i].maso)==1);
	
		cout<<"Nhap ho ten: ";
		
		fflush(stdin);
		
		gets(a[i].hoten);
		
		cout<<"Nhap ma khoa: ";
		
		cin>>a[i].makhoa;
		
		n++;
	}
}
void xuat(giangvien a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<a[i].maso<<"\t"<<a[i].hoten<<"\t"<<a[i].makhoa<<endl;
	}
}
void xoa(giangvien a[MAX], int &n, int MS){
	
	for(int i=0;i<n;i++){
		
		if(a[i].maso==MS){
			
		  for(int j=i+1;j<n;j++){
				a[i]=a[j];
			
		}
		n--;	
		}
	}
}
void luufile(giangvien a[MAX], int n){
	ofstream outfile("DSGV.txt", ofstream::binary);
	
	for(int i=0;i<n;i++){
		
		giangvien sv=a[i];
		
		outfile.write((char *)&sv,sizeof(giangvien));
	}
	outfile.close();
}
int main(){
	
	giangvien a[MAX];
	
	int n=0;
	
//	int n;
	
//	cout<<"Nhap so luong giang vien: "; cin>>n;
	
	nhap(a,n);
	
	cout<<"Danh sach thong tin giang vien:\n\n";
	
	xuat(a,n);
	
	int MS;
	
	cout<<"Nhap ma so cua giang vien can xoa: "; cin>>MS;
	
	xoa(a,n,MS);
	
	cout<<"Danh sach sau khi xoa:\n";
	
	xuat(a,n);
	
	luufile(a,n);
	
	return 0;
}
