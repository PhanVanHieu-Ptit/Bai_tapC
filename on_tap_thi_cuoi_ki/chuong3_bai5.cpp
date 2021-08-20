#include<iostream>

#include<stdio.h>

#include<conio.h>

#include<string.h>

#include<fstream>

const int MAX=100;

using namespace std;

struct sinhvien{
	
	int maso;
	
	char hoten[30];
	
	char phai[5];
	
	float diem;
	
	int hang;
};


void nhapsv(sinhvien sv[MAX], int &n){
	
	int ms;
	
	while(1){
		
	cout<<"\nNhap thong tin sinh vien thu "<<n+1<<":\n";
		
	cout<<"Nhap ma so: "; cin>>ms;
	
	if(ms==0) break;
	
	sv[n].maso=ms;
    	
    cout<<"Nhap ho ten: "; 
	
	fflush(stdin);
	
	gets(sv[n].hoten);
	
	cout<<"Nhap diem: "; cin>>sv[n].diem;
	
	cout<<"Nhap gioi tinh: ";
	
	fflush(stdin);
	
	gets(sv[n].phai);
	
	n++;
    }
}


void xuatsv(sinhvien sv){
	
	cout<<sv.maso<<"\t"<<sv.hoten<<"\t"<<sv.diem<<"\t"<<sv.phai<<endl;
}


void xuat(sinhvien sv[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		xuatsv(sv[i]);
	}
}


int tim(sinhvien sv[MAX], int n, int ms){
	
	for(int i=0;i<n;i++){
		
		if(sv[i].maso==ms){
			
			return i;
			
			break;
		}
	}
	return -1;
}


void sapxep_tang(sinhvien sv[MAX], int n){
	sinhvien tg;
	for(int i=0;i<n;i++){
		
		for(int j=i+1;j<n;j++){
			
			if(sv[i].diem>sv[j].diem){
				
				tg=sv[i];
				sv[i]=sv[j];
				sv[j]=tg;
			}
		}
	}
}
/*int timvt(sinhvien sv[MAX], int n, int m){
	
	if(sv[0].diem>=m) return 0;
	
	else if(sv[n-1].diem<=m) return n-1;
	
	int left=0, right=n-1;
	
	int j;
	
	while(left<=right){
		
		j=(left+right)/2;
		
		if(sv[j].diem>=m && sv[j-1].diem<=m) return j;
		
		if(sv[j].diem>m) left=j+1;
		
		else right=j-1;
	}
}
void nhap(sinhvien &a,int diem){
	
	a.diem=diem;
	
	cout<<"Nhap ma so : "; cin>>a.maso;
	
	cout<<"Nhap ten : "; 
	
	fflush(stdin);
	
	gets(a.hoten);
	
	cout<<"Nhap gioi tinh: ";
	
	fflush(stdin);
	
	gets(a.phai);
	
}
void themsv(sinhvien sv[MAX], int &n, int diem, sinhvien tg[MAX+1]){
	
	int k=timvt(sv,n,diem);
		
		if(k==0){
			
			for(int i=0;i<n;i++){
				
			   nhap(tg[0],diem);	
			
			    tg[i+1]=sv[i];
			}
		}
		else if(k==n-1){
			for(int i=0;i<n;i++){
				
			   tg[i]=sv[i];
			
			   nhap(tg[k+1],diem);
			}
		}
		else{
			
			for(int i=0;i<k;i++){
				
				tg[i]=sv[i];
				
				nhap(tg[k],diem);
			}
			for(int i=k+1;i<n+1;i++)
			
			 tg[i]=sv[i-1];
		}
	n++;
}
*/
int ktms(sinhvien sv[MAX], int n,int ms){
	
	for(int i=0;i<n;i++){
		
		if(sv[i].maso==ms) {
			
			return i;
		
		}
	}
	
	return -1;
}
void sua(sinhvien sv[MAX], int n, int ms_sua){
	
	int k=ktms(sv,n,ms_sua);
		
	if(k>=0){
			
		    cout<<"\nSua ten: ";
			
			fflush(stdin);
			
			gets(sv[k].hoten);
			
			cout<<"\nSua diem: "; cin>>sv[k].diem;
			
			cout<<"\nSua gioi tinh: ";
			
			
			fflush(stdin);
			
			gets(sv[k].phai);
	}
	else cout<<"\nMa so khong ton tai";
}
int xoasv(sinhvien sv[MAX], int &n, int ms_xoa){
	
	int k=ktms(sv,n,ms_xoa);
	
	if(k>=0){
		
		for(; k<n-1;k++){
			
			sv[k]=sv[k+1];
		}
	}
	if(k==-1) cout<<"\nMa so khong ton tai: ";
	
	n--;
}
int luufile(sinhvien sv[MAX], int n){
	
	ofstream outfile("DSHV.TXT", ofstream::binary);
	if(outfile.fail()==1){
		
		cout<<"\nFile nay khong ton tai";
		
		getch();
		
		return 0;
	}
	for(int i=0;i<n;i++){
		
		sinhvien a=sv[i];
		
		outfile.write((char *) &a, sizeof(sinhvien));
	}
	outfile.close();
}
int docfile(sinhvien sv[MAX], int n){
	
	ifstream infile("DSHV.TXT",ios::binary);
	
	if(infile.fail()==1){
		
		cout<<"\nFile nay khong ton tai";
		
		getch();
		
		return 0;
	}
	infile.seekg(0,infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	n=size/sizeof(sinhvien);
	
	sv=new sinhvien[n];
	
	for(int i=0;i<n;i++){
		
		sinhvien a;
		
		infile.read((char *)&a,sizeof(sinhvien));
		
		sv[i]=a;
	}
	infile.close();
}
void sapxep(sinhvien sv[MAX], int n){
	sinhvien tg;
	for(int i=0;i<n;i++){
		
		for(int j=i+1;j<n;j++){
			
			if(sv[i].diem>sv[j].diem){
				
				tg=sv[i];
				sv[i]=sv[j];
				sv[j]=tg;
				
			}
		}
	}
}
int main(){
	
	sinhvien sv[MAX];
	
	int n=0;
	
	nhapsv(sv,n);
	
	cout<<"\nDanh sach sinh vien:\n\n";
	
	xuat(sv, n);
	
	int ms;
	
	cout<<"\nNhap ma so cua sinh vien can tim: "; cin>>ms;
	
    if(	tim(sv,n,ms)>=0){
    	
    	xuatsv(sv[tim(sv,n,ms)]);
	}
	else cout<<"\nMa so khong ton tai\n";
	
	sapxep_tang(sv,n);
	
	cout<<"\nDanh sach sinh vien tang dan theo diem:\n\n";
	
	xuat(sv,n);
	
/*	int diem;
	
	cout<<"\nNhap diem sinh vien can them : "; cin>>diem;
	
	sinhvien tg[MAX+1];
	
	themsv(sv, n,diem, tg);
	
	cout<<"\nDanh sach sinh vien sau khi them:\n\n";
	
	xuat(sv,n);*/
	
	int ms_sua;
	
	cout<<"\nNhap ma so sinh vien can chinh sua thong tin: "; cin>>ms_sua;
	
	sua(sv,n,ms_sua);
	
	cout<<"\nDanh sach sinh vien sau khi sua:\n\n";
	
	xuat(sv,n);
	
	int ms_xoa;
	
	cout<<"\nNhap ma so sinh vien can xoa: "; cin>>ms_xoa;
	
	xoasv(sv,n,ms_xoa);
	
	cout<<"\nDanh sach sinh vien sau khi xoa:\n\n";
	
	xuat(sv,n);
	
    luufile(sv,n);
    
    docfile(sv,n);
    
    cout<<"\nDanh sach sinh vien doc tu file:\n\n";
    
    xuat(sv,n);
	
	return 0;
}

