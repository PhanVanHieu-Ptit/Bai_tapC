#include<iostream>

#include<stdio.h>

#include<conio.h>



using namespace std;

void Menu(){
	cout<<"******************************************************\n";
	cout<<"*                     MENU                           *\n";
	cout<<"******************************************************\n";
	cout<<"*           1.Nhap thong tin sinh vien               *\n";
	cout<<"*           2.Xuat thong tin sinh vien               *\n";
	cout<<"*           3.Xem diem toan cao nhat                 *\n";
	cout<<"******************************************************\n";
}
struct sinhvien{
	
	int ID;
	
	char hoten[30];
	
	float toan,ly,hoa;
};
sinhvien *nhapsinhvien(){
	sinhvien *sv=new sinhvien;
	
	    cout<<"Nhap ID: ";
		
	    cin>>sv->ID;
		
		cout<<"Nhap Ho Ten: ";
		
		fflush(stdin);
		
		gets(sv->hoten);
		
		cout<<"Nhap diem toan: "; cin>>sv->toan;
		
		cout<<"Nhap diem ly : "; cin>>sv->ly;
		
		cout<<"Nhap diem hoa: "; cin>>sv->hoa;
		
		return sv;
}
void nhapds(sinhvien **&dssv,int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap sinh vien thu "<<i+1<<" :\n";
		
		sinhvien *sv=nhapsinhvien();
		
		*(dssv+i)=sv;
	}
}
void xuatsinhvien(sinhvien *sv){
	
	cout<<sv->ID<<" - "<<sv->hoten<<" - "<<sv->toan<<endl;
}
void xuatdssv(sinhvien **dssv,int n){
	
	for(int i=0;i<n;i++){
		
		sinhvien *sv=*(dssv+i);
		
		xuatsinhvien(sv);
	}
}
int main(){
	
	Menu();
	int n,b;
    char c;
    sinhvien **dssv=new sinhvien*[n];
do{ 
  

  do{
	
	cout<<"\nNhap lua chon cua ban:(1,2,3) "; cin>>b;
	
	if(b<1 || b>3) cout<<"Nhap sai ! Moi Ban Nhap lai ";
	
   }while(b<1 || b>3);
   
	if(b==1){
		
	cout<<"Nhap so luong sinh vien "; cin>>n;
	}
	
	if(b==2) 
	 cout<<"===================================================\n";
	
	switch(b){
		
		case 1: nhapds(dssv,n); break;
		
		case 2: xuatdssv(dssv,n);
	      cout<<"====================================================\n";
		 break;
		
		case 3:break; 
	}
	cout<<"Ban co muon tiep tuc ...(c/k)"; c=getch();
	}
	while(c=='c'|| c=='C');
	
	return 0;
}
