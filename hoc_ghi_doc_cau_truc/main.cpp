#include <iostream>
#include<string.h>
#include<fstream>

using namespace std;

struct nhanvien{
	
	int ma;
	char ten[255];
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void luufile(){
	nhanvien nv[3];
	
	nv[0].ma=1;
	strcpy(nv[0].ten,"Nguyen Van Teo");
	
	nv[1].ma=2;
	strcpy(nv[1].ten,"Huynh Van Binh");
	
	nv[2].ma=3;
	strcpy(nv[2].ten,"Luu Y Tren");
	
	ofstream outfile("csdl.txt",ofstream::binary);
    outfile.write((char *) nv,sizeof(nv));
    outfile.close();
}
void xuat( nhanvien nv[], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<nv[i].ma<<"\t"<<nv[i].ten<<endl;
	}
}
void docfile(){
	ifstream infile("csdl.txt",ifstream::binary);
	infile.seekg(0,infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	int real=size/sizeof(nhanvien);
	nhanvien nv[real];
	infile.read((char *)nv,sizeof(nv));
	infile.close();
	xuat(nv,real);
	}
int main(int argc, char** argv) {
	
	luufile();
	docfile();
	
	return 0;
}
