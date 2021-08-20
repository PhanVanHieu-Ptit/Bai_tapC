#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<stdlib.h>

const int MAX=100;

using namespace std;

struct hocvien{
	
	int maso;
	
	char hoten[30];
	
	char *phai;
	
	float diem;
	
	unsigned char hang;
};

void nhap(hocvien sv[], int n);

int main(){
	
	int n; hocvien sv[MAX];
	
	cout<<"Nhap so luong sinh vien: "; cin>>n;
	
	cout<<"Nhap thong tin sinh vien: ";
	
	nhap(sv,n);
	
}

void nhap(hocvien sv[], int n){
	
	for(int i=0; i<n; i++){
		
		cout<<"Sinh vien thu "<<i+1<<" : \n";
		
		cout<<"\n Nhap ma so: "; cin>>sv[i].maso;
		
		cout<<"\n Nhap ho ten: "; fflush(stdin);  gets(sv[i].hoten);
		
		cout<<"\n Nhap diem: "; cin>>sv[i].diem;
		
		cout<<"\n Nhap gioi tinh: "; fflush(stdin);  gets(sv[i].phai);
		
	}
}


