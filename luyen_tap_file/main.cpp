#include <iostream>
#include<fstream>
#include<string.h>
#include<mylib.h>
using namespace std;

void Menu(){
 cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
 cout<<"+                      MENU                          +\n";
 cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
 cout<<"+             1.Nhap danh sach sinh vien             +\n";
 cout<<"+             2.Hien danh sach sinh vien             +\n";
 cout<<"+             3.Tim kiem sinh vien bang ma so        +\n";
 cout<<"+             4.Tim kiem sinh vien bang ten          +\n";
 cout<<"+             5.Sap xep tang dan theo diem           +\n";
 cout<<"+             6.Luu danh sach sinh vien              +\n";
 cout<<"+             7.Doc du lieu sinh vien                +\n";
 cout<<"+             8. Thoat, ket thuc chuong trinh        +\n";
 cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

struct sinhvien{
	
	int maso;
	char ten[30];
	float dtb;
};
sinhvien *nhapsinhvien(){
	
	sinhvien *sv=new sinhvien;
	
	cout<<"Nhap ma: "; cin>>sv->maso;
	
	cout<<"Nhap ten: ";
	
	fflush(stdin);
	
	gets(sv->ten);
	
	cout<<"Nhap diem: "; cin>>sv->dtb;
	
	return sv;
}
void nhapDS(sinhvien **&dssv, int siso);

void xuatsinhvien(sinhvien *sv);

void xuatDS(sinhvien **dssv, int siso);

void luufile(sinhvien **dssv, int siso);

void docfile(sinhvien **&dssv, int &siso);

void timMS( sinhvien **dssv, int siso,int ms);

void timSV(sinhvien **dssv, int siso, char t[30]);

void sapxeptang(sinhvien **dssv, int siso);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int siso,chon,ms;
	
	char c,t[30];
	
	sinhvien **dssv=new sinhvien*[siso];
	do{ Menu();
		do{
		cout<<"\nNhap su lua chon cua ban:(1-8) "; cin>>chon;
		
		if(chon<0 ||chon>8) {
			
			cout<<"Nhap sai, nhap lai";
			
			Menu();
		}
	}
	while(chon<0||chon>8);
	
	switch(chon){
		
		case 1:cout<<"Nhap so luong sinh vien: ";cin>>siso;
		        nhapDS(dssv,siso); break;
		case 2: xuatDS(dssv,siso); break;
		case 3: cout<<"Nhap ma so can tim: "; cin>>ms;
		        timMS(dssv,siso,ms);break;
		case 4:cout<<"Nhap ten sinh vien can tim: "; 
		     fflush(stdin);
		     gets(t);
		     timSV(dssv,siso,t);break;
		case 5: sapxeptang(dssv,siso);break;
		case 6: luufile(dssv,siso);break;
		case 7: docfile(dssv,siso);break;
		case 8:  return 0;
	}
	cout<<"Tiep tuc ...(c/k)"; cin>>c;
     clrscr();
	}
	while(c=='c'|| c=='C');
	
	return 0;
}
void nhapDS(sinhvien **&dssv, int siso){
	
	cout<<"Nhap thong tin sinh vien:\n";
	for(int i=0;i<siso;i++){
		
		cout<<"Sinh vien thu "<<i+1<<" :\n";
		
		sinhvien *sv=nhapsinhvien();
		
		*(dssv+i)=sv;
			
	}
	clrscr();
}
void xuatsinhvien(sinhvien *sv){
	
	cout<<sv->maso<<"\t"<<sv->ten<<"\t"<<sv->dtb<<endl;
}
void xuatDS(sinhvien **dssv, int siso){
	
	clrscr();
	
	for(int i=0;i<siso;i++){
		
		sinhvien *sv=*(dssv+i);
		
		xuatsinhvien(sv);
	}
}
void luufile(sinhvien **dssv, int siso){
	
	ofstream outfile("DSSV.txt",ofstream ::binary);
	
	for(int i=0;i<siso;i++){
		
		sinhvien *sv=*(dssv+i);
		
		outfile.write((char *)sv,sizeof(sinhvien));
	}
	outfile.close();
	
}
void docfile(sinhvien **&dssv, int &siso){
	
	ifstream infile("DSSV.txt",ifstream ::binary);
	infile.seekg(0,infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	siso=size/sizeof(sinhvien);
	
	dssv=new sinhvien*[siso];
	
	for(int i=0;i<siso;i++){
		
		sinhvien *sv=new sinhvien;
		
		infile.read((char *)sv,sizeof(sinhvien));
		
		*(dssv+i)=sv;
	}
	infile.close();
	
}
void timMS( sinhvien **dssv, int siso,int ms){
	
	clrscr();
	
	for(int i=0;i<siso;i++){
		
		sinhvien *sv=*(dssv+i);
	    
	    if(ms==sv->maso)
	     
	    xuatsinhvien(sv);
	}
}
void timSV(sinhvien **dssv, int siso, char t[30]){
	
	clrscr();
	
	for(int i=0;i<siso;i++){
		
		sinhvien *sv=*(dssv+i);
		
		int kq=strcmp(t,sv->ten);
		
		if(kq==0)
		
		 xuatsinhvien(sv);
	}
}
void sapxeptang(sinhvien **dssv, int siso){
	
	clrscr();
	
	for(int i=0;i<siso-1;i++){
		
		for(int j=i+1;j<siso;j++){
			
			sinhvien *sv1=*(dssv+i);
			sinhvien *sv2=*(dssv+j);
			
			if(sv1->dtb>sv2->dtb){
				
				*(dssv+i)=sv2;
				*(dssv+j)=sv1;
			}
		}
	}
}
