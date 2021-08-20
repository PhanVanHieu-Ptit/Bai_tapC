#include<iostream>

#include<stdio.h>

#include<conio.h>

#include<string.h>

using namespace std;

struct ngaythang{
	 
	 int ngay;
	 
	 int thang;
	 
	 int nam;
};
struct sinhvien{
	
	int maso;
	
	char hodem[50];
	
	char ten[20];
	
	ngaythang ngsinh;
	
	char gioitinh[5];
	
};
void nhap(sinhvien *sv){
	
	cout<<"Ma so: "; cin>>sv->maso;
	
	cout<<"Ho dem: "; cin.ignore();
	
	fgets(sv->hodem, sizeof(sv->hodem),stdin);
	
	cout<<"Ten: "; cin.ignore();
	
	fgets(sv->ten,sizeof(sv->ten),stdin);
	
	cout<<"Ngay sinh: "; cin>>sv->ngsinh.ngay;
	
	cout<<"Thang : "; cin>>sv->ngsinh.thang;
	
	cout<<"Nam : "; cin>>sv->ngsinh.nam;
	
	cout<<"Gioi tinh: "; 
	
	cin.ignore();
	
	fgets(sv->gioitinh,sizeof(sv->gioitinh),stdin);
}
void Hienthisv(sinhvien *sv){
	
	cout<<sv->maso;
	
	cout<<"\t"<<sv->hodem;
	
	cout<<" "<<sv->ten;
	
	cout<<"\t"<<sv->ngsinh.ngay;
	
	cout<<"-"<<sv->ngsinh.thang;
	
	cout<<"-"<<sv->ngsinh.nam;
	
	cout<<"\t"<<sv->gioitinh;
}
void nhapds(sinhvien *p, int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap thong tin sinh vien thu "<<i+1<<":\n";
		
		nhap(p+i);
	}
}
void hienthids(sinhvien *p, int n){
	
	for(int i=0;i<n;i++)
	
	hienthisv( p+i );
	
	cout<<"\n";
}
int main(){
	
	sinhvien *p; int n;
	
	cout<<"nhap so luong sinh vien: ";
	
	cin>>n;
	
	cout<<"Nhap thong tin sinh vien: ";
	
	nhap(sv);
	
	cout<<"Danh sach sinh vien: ";
	
	Hienthids(p,n);
	
	delete p;
	
	getch();
	
	
}
