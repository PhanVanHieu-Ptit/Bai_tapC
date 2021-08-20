#include <iostream>
#include<fstream>
#include<string.h>

using namespace std;

struct sinhvien{
	
	int ma;
	
	char ten[255];
	
	double dtb;
};

sinhvien *nhapsinhvien(){
	
	sinhvien *nv=new sinhvien;
	cout<<"Nhap ma: "; cin>>nv->ma;
	
	cin.ignore();
	
	cout<<"Nhap ten: ";
	
	gets(nv->ten);
	
	cout<<"Nhap diem: "; cin>>nv->dtb;
	
	return nv;
}
void nhapdsSinhvien(sinhvien **&dssv,int siso);
void xuatsinhvien(sinhvien *nv);
void xuatdssv(sinhvien **dssv,int siso);
void luufile(sinhvien **dssv,int siso);
void docfile(sinhvien **&dssv,int &siso);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int siso;
	
	cout<<"nhap si so: "; cin>>siso;
	
	sinhvien **dssv= new sinhvien *[siso];
	
	nhapdsSinhvien(dssv,siso);
	
	cout<<"Danh sach sinh vien sau khi nhap:\n\n";
	
	xuatdssv(dssv,siso);
	
	luufile(dssv,siso);
	
	docfile(dssv,siso);
	
	return 0;
}
void nhapdsSinhvien(sinhvien **&dssv,int siso){
	
	for(int i=0;i<siso;i++){
		
		cout<<"Nhap sinh vien thu "<<i+1<<":\n";
		
		sinhvien *sv=nhapsinhvien();
		
		*(dssv+i)=sv;
	}
	
}
void xuatsinhvien(sinhvien *nv){
	
	cout<<nv->ma<<" - "<<nv->ten<<" - "<<nv->dtb<<endl;
}
void xuatdssv(sinhvien **dssv,int siso){
	
	for(int i=0;i<siso;i++){
		
		sinhvien *sv=*(dssv+i);
		
		xuatsinhvien(sv);
	}
}
void luufile(sinhvien **dssv,int siso){
	
	ofstream outfile("csdlSV.txt",ofstream::binary);
	for(int i=0;i<siso;i++){
		
		sinhvien *sv= *(dssv+i);
		outfile.write((char *) sv, sizeof(sv));
	}
	outfile.close();
	}
void docfile(sinhvien **&dssv,int &siso){
	
	ifstream infile("csdlSV.txt",ifstream::binary);
	
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
