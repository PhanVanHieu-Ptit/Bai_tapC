#include<iostream>

#include<string.h>

#include<stdio.h>

#include<conio.h>

#include<fstream>

const int MAX=100;

using namespace std;



struct sinhvien{
	
	int maso;
	
	char hoten[30];
	
	int tuoi;
	
	char phai[5];
};
sinhvien *nhapsinhvien(){
	
	sinhvien *sv=new sinhvien;
	
	cout<<"Nhap ma so sinh vien: "; cin>>sv->maso;
	
	
	cout<<"Nhap ten: ";
	
	fflush(stdin);
	
	gets(sv->hoten);
	
	cout<<"Nhap gioi tinh: ";
	
	fflush(stdin);
	
	gets(sv->phai);
	
	cout<<"Nhap tuoi: "; cin>>sv->tuoi;
	
	return sv;
}
void nhapDS(sinhvien **&dssv, int n){
	
	for(int i=0;i<n;i++){
		
		sinhvien *sv=nhapsinhvien();
		
		*(dssv+i)=sv;
	}
}
void xuatsinhvien(sinhvien *sv){

  cout<<sv->maso<<"\t"<<sv->hoten<<"\t"<<sv->tuoi<<"\t"<<sv->phai<<endl;
}
void xuatDS(sinhvien **dssv, int n){
	
	for(int i=0;i<n;i++){
		
		sinhvien *sv=*(dssv+i);
		
		xuatsinhvien(sv);
	}
}
void luufile(sinhvien **dssv,int n){
	
	ofstream outfile("HOSO.TXT",ofstream::binary);
	
	for(int i=0;i<n;i++){
		
		sinhvien *sv=*(dssv+i);
		
		outfile.write((char *)sv,sizeof(sinhvien));
	}
	outfile.close();
}
void docfile(sinhvien **&dssv, int &n){
	
	ifstream infile("HOSO.TXT", ifstream::binary);
	
	infile.seekg(0,infile.end);
	
	long size=infile.tellg();
	
	infile.seekg(0);
	
	n=size/sizeof(sinhvien);
	
	dssv=new sinhvien*[n];
	
	for(int i=0;i<n;i++){
		
		sinhvien *sv= new sinhvien;
		
		infile.read((char *)sv,sizeof(sinhvien));
		
		*(dssv+i)=sv;
	}
	infile.close();
}
int timkiemMS(sinhvien **dssv,int n, int ms){
	
	for(int i=0;i<n;i++){
		
		if(ms==dssv[i]->maso)
		{
			xuatsinhvien(dssv[i]); return 0;
		}
	}
	cout<<"Khong ton tai MA SO nay";
}
int timtheoten(sinhvien **dssv, int n, char ten[30]){
	
	for(int i=0;i<n;i++){
		
		if(strcmp(ten,dssv[i]->hoten)==0){
			
			xuatsinhvien(dssv[i]);
			
			return 0;
		}
	}
	cout<<"TEN khong ton tai";
}
int xoa(sinhvien **dssv, int n, int msxoa,int &index){
	
	for(int i=0;i<n;i++){
		
		if(msxoa==dssv[i]->maso){
			
			index++;
			
			for(int j=i+1;j<n;j++){
				
				dssv[j-1]=dssv[j];
			/*dssv[j-1]->maso=dssv[j]->maso;
			
			strcpy(dssv[j-1]->hoten,dssv[j]->hoten);
			
			dssv[j-1]->tuoi=dssv[j]->tuoi;
			
			strcpy(dssv[j-1]->phai,dssv[j]->phai);*/
			}
			
			
			return 0;
		}
	}
	cout<<"Ma so nay khong ton tai";
}
void sapxeptang(sinhvien **&dssv, int n){
	sinhvien *sv=new sinhvien;
	for(int i=0;i<n;i++){
		if(dssv[i]->tuoi>dssv[i+1]->tuoi){
			
		  for(int j=i+1;j<n;j++){
			
		   /*sv=dssv[j-1];
	       dssv[j-1]=dssv[j];
		   dssv[j]=sv;*/
		   sv=*(dssv+j-1);
		   *(dssv+j-1)=*(dssv+j);
		   *(dssv+j)=sv;
	}	
}
}
}
int sua(sinhvien **&dssv, int n, int mssua){
	
	for(int i=0;i<n;i++){
		
		if(dssv[i]->maso==mssua){
			
			cout<<"Sua ma so: ";
			
			cin>>dssv[i]->maso;
			
			cout<<"Sua ten: ";
			
			fflush(stdin);
			
			gets(dssv[i]->hoten);
			
			cout<<"Sua tuoi: ";
			
			cin>>dssv[i]->tuoi;
			
			cout<<"Sua gioi tinh: ";
			
			fflush(stdin);
			
			gets(dssv[i]->phai);
			
			return 0;
		}
	}
	cout<<"Ma so khong ton tai";
}
void them(sinhvien **&dssv,int &n){
	
	int sl;
	
	cout<<"Nhap so luong sinh vien can them: "; cin>>sl;
	
	n+=sl;
	
	for(int i=0;i<n;i++){
		
		sinhvien *sv=nhapsinhvien();
		
		*(dssv+n+i)=sv;
	}
}
int main(){
	
	int n; int index=0; 
	
	do{
		cout<<"\nNhap so luong sinh vien: "; cin>>n;
		
		if(n<0) cout<<"nhap sai , nhap lai";
		
		else if(n==0){
			
			cout<<"Danh sach rong"; return 0;
		}
	}
	while(n<0);
	
	sinhvien **dssv= new sinhvien *[n];
	
	/*nhapDS(dssv,n);
	
	cout<<"Danh sach sinh vien:\n\n";
	
	xuatDS(dssv,n);
	
	luufile(dssv,n);*/
	
	docfile(dssv,n);
	
	cout<<"Danh sach doc tu file:\n";
	
	xuatDS(dssv,n);
	
/*	sapxeptang(dssv,n);//Loi to bu chua duoc tim ra
	
	cout<<"\nDanh sach sinh vien sau khi sap xep:\n";
	
	xuatDS(dssv,n);*/
	
	int ms;
	
	cout<<"\nNhap ma so can tim: "; cin>>ms;
	
	timkiemMS(dssv,n,ms);
	
	int msxoa;
	
	cout<<"\nNhap ma so sinh vien can xoa thong tin: "; cin>>msxoa;
	
	xoa(dssv,n,msxoa, index);
	
	cout<<"\nDanh sach sau khi xoa:\n";
	
	xuatDS(dssv,n-index);
	
	char ten[30];
	
	cout<<"Nhap ten sinh vien can tim: ";
	
	fflush(stdin);
	
	gets(ten);
	
	timtheoten(dssv,n,ten);
	
	int mssua;
	
	cout<<"\nNhap ma so sinh vien can sua thong tin: "; cin>>mssua;
	
	sua(dssv,n,mssua);
	
	cout<<"\nDanh sach sau khi sua:\n";
	
	xuatDS(dssv,n-1);
	
	/*them(dssv,n);// LOI TO LON chua tim duoc
	
	xuatDS(dssv,n);*/

	return 0;
}
