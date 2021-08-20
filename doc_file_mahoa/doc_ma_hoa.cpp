#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<fstream>

using namespace std;

struct sinhvien{
	int ma;
	char ten[30];
	float diem;
};
sinhvien *nhapsinhvien(){
	
	sinhvien *sv=new sinhvien;
	
	cout<<"nhap ma so: "; cin>>sv->ma;
	
	cout<<"nhap ten: "; 
	
	fflush(stdin);
	
    gets(sv->ten);
    
    cout<<"Nhap diem: "; cin>>sv->diem;
    
    return sv;
}
void nhapDS(sinhvien **&dssv, int n){
	
	for(int i=0;i<n;i++){
		
		sinhvien *sv= nhapsinhvien();
		
		*(dssv+i)=sv;
	}
}
void xuat(sinhvien *sv){
	
	cout<<sv->ma<<"\t"<<sv->ten<<"\t"<<sv->diem<<endl;
}
void xuatDS(sinhvien **dssv, int n){
	
	for(int i=0;i<n;i++){
		
		sinhvien *sv=*(dssv+i);
		
		xuat(sv);
	}
}
void luufile(sinhvien **dssv, int n){
	
	ofstream outfile("DSSV.txt",ofstream::binary);
	
	for(int i=0;i<n;i++){
		
		sinhvien *sv=*(dssv+i);
		
		outfile.write((char *)sv,sizeof(sinhvien));
	}
	outfile.close();
	
}
void docfile(sinhvien **&dssv, int &n){
	
	ifstream infile("DSSV.txt",ifstream ::binary);
	infile.seekg(0,infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	n=size/sizeof(sinhvien);
	
	dssv=new sinhvien*[n];
	
	for(int i=0;i<n;i++){
		
		sinhvien *sv=new sinhvien;
		
		infile.read((char *)sv,sizeof(sinhvien));
		
		*(dssv+i)=sv;
	}
	infile.close();
	
}
int main(){
	
	int n;
	
	cout<<"Nhap so luong sinh vien: "; cin>>n;
	
	sinhvien **dssv= new sinhvien*[n];
	
	/*cout<<"Nhap thong tin sinh vien:\n";
	
	nhapDS(dssv,n);
	
	cout<<"Danh sach sinh vien:\n";
	
	xuatDS(dssv,n);
	
	luufile(dssv,n);*/
	
	docfile(dssv,n);
	
	xuatDS(dssv,n);
	
	return 0;
}

