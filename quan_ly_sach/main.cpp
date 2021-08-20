#include <iostream>
#include<fstream>
#include<string.h>
const int MAX=100;

using namespace std;
struct book{
	
	char ISBN[20];
	
	char ten[250];
	
	int trang;
	
	char tacgia[150];
};
void nhapsach(book &b){
	
	cout<<"Nhap ISBN: ";
	
	fflush(stdin);
	
	gets(b.ISBN);
	
	cout<<"Nhap ten: ";
	
	fflush(stdin);
	
	gets(b.ten);
	
	cout<<"Nhap trang: ";
	
	cin >>b.trang;
	
	cout<<"Tac gia: ";
	
	cin.ignore();
	
	gets(b.tacgia);
	
}
void nhapdanhsach(book *dsSach, int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"\nNhap sach thu "<<i+1<<" :\n";
		
		nhapsach(dsSach[i]);
	}
}
void xuat(book b){
	
	cout<<b.ISBN<<" - "<<b.ten<<" - "<<b.trang<<" tr - "<<b.tacgia<<endl;
}
void xuatds(book *dsSach, int n){
	
	for(int i=0;i<n;i++){
		
		xuat(dsSach[i]);
	}
}
void luufile(book *dsSach, int n ){
	
	ofstream outfile("csdlSach.txt",ofstream::binary);
	
	for(int i=0;i<n;i++){
		
		book b=dsSach[i];
		
		outfile.write((char *)&b,sizeof(book));
		
	}
	outfile.close();
	
}
void docfile(book *dsSach, int &n){
	
	ifstream infile("csdlSach.txt",ifstream::binary);
	infile.seekg(0,infile.end);
	long size=infile.tellg();
	
	infile.seekg(0);
	
	n=size/sizeof(book);
	
	for(int i=0;i<n;i++){
		
		book b;
		
		infile.read((char *)&b,sizeof(book));
		
		dsSach[i]=b;
	}
	infile.close();

}
void timsach(book dsSach[], int n, char *tg){
	
	for(int i=0;i<n;i++){
		
	 book b=dsSach[i];
	 
	 int kq=stricmp(b.tacgia,tg);
	 
	 if(kq==0){
	 	
	 	xuat(b);
	 }
	}
}
void sapxepgiam(book *dsSach, int n){
	
	for(int i=0;i<n;i++){
		
		for(int j=i+1;j<n;j++){
			
			book b1=dsSach[i];
			book b2=dsSach[j];
			
			if(b1.trang<b2.trang){
				
				dsSach[i]=b2;
				dsSach[j]=b1;
			}
		}
	}
}
void top3(book *dsSach, int n){
	
	int m=n<3?n:3;
	
	for(int i=0;i<m;i++){
		
		xuat(dsSach[i]);
	}
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char tg[150]; 
	
	book dsSach[MAX];
	
	int n; cout<<"Nhap so luong sach: "; cin>>n;
	
	/*cout<<"Nhap thong tin cac sach: ";
	
	nhapdanhsach(dsSach,n);

	sapxepgiam(dsSach,n);
	
	cout<<"Thong tin cac sach:\n\n";
	
    xuatds(dsSach,n);
	
	luufile(dsSach,n);*/
    
	
	docfile(dsSach,n);
	
	xuatds(dsSach,n);
	
	cout<<"************************************\n";
	
	cout<<"Nhap ten tac gia can tim: "; 
	
	fflush(stdin);
	
	gets(tg);
	
	timsach(dsSach,n,tg);
	
	
	cout<<"_____________________________________\n";
	
	cout<<"Top 3 sach co tranh nhieu nhat:\n";
	
	top3(dsSach,n);
	
	
	return 0;
}
