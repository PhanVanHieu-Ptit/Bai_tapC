#include <iostream>
#include<string.h>

using namespace std;

struct diachi{
	
	char tenduong[30];
	char tenquan[30];
	char tentinh[30];
};
struct nhanvien{
	
	char ten[10];
	int ma;
	int tuoi;
	diachi nha;
	diachi coquan;
};


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	nhanvien teo;
	
	teo.ma=1;
	teo.tuoi=28;
	strcpy(teo.ten,"Nguyen Van Teo");
	
	strcpy(teo.nha.tenduong,"Le Van Viet");
	strcpy(teo.nha.tenquan,"Quan 9");
	strcpy(teo.nha.tentinh,"Tp.HCM");
	
	strcpy(teo.coquan.tenduong,"Le Thanh Tong");
    strcpy(teo.coquan.tenquan," Quan 8");
    strcpy(teo.coquan.tentinh,"Tp.HCM");
    
    cout<<"Thong tin cua nha vien:\n\n";
    
    cout<<teo.ten<<"\n"<<"Ma so: "<<teo.ma<<", tuoi: "<<teo.tuoi<<"\nDia chi nha:\nDuong ";
    cout<<teo.nha.tenduong<<", "<<teo.nha.tenquan<<", "<<teo.nha.tentinh;
    cout<<"\nDia chi cong ty:\nDuong "<<teo.coquan.tenduong<<", "<<teo.coquan.tenquan<<", "<<teo.coquan.tentinh;
	
	nhanvien *pty= new nhanvien;
	
	
	pty->ma=2;
	
	strcpy(pty->ten,"Huynh Van Ty");
	strcpy(pty->nha.tenduong,"123 Hoang Dieu");
	strcpy(pty->nha.tenquan,"Quan 3");
	strcpy(pty->nha.tentinh,"Tp. HCM");
	strcpy(pty->coquan.tenduong,"Nguyen Nam");
	strcpy(pty->coquan.tenquan,"Quan 2");
	strcpy(pty->coquan.tentinh,"Tp.HCM");
	
	pty->tuoi=35;
	
	cout<<"\n"<<pty->ten<<" Ma so: "<<pty->ma<<", tuoi: "<<pty->tuoi<<"\nDia chi nha:\n";
	cout<<"Duong "<<pty->nha.tenduong<<", "<<pty->nha.tenquan<<", "<<pty->nha.tentinh;
	cout<<"\nDia chi cong ty:\nDuong "<<pty->coquan.tenduong<<", "<<pty->coquan.tenquan<<", "<<pty->coquan.tentinh;
	return 0;
}
