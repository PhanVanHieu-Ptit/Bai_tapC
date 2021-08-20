#include<conio.h>

#include<stdio.h>

#include<mylib.h>

#include<iostream>

const int MAX=100;

using namespace std;

struct sinhvien{
	
	int maso;
	char hoten[30];
	char phai[5];
	float diem;
	int hang;
};
int timkiem(sinhvien *dssv, int n,int ms);
void nhap(sinhvien *dssv,int &n);
void xuat(sinhvien *dssv, int n);
void savelist(sinhvien *dssv, int &n, char *tenfile);
void openlist(sinhvien *dssv, int &n, char *tenfile);
void sapsep(sinhvien *dssv,int n);
int xoasv(sinhvien *dssv, int &n, int masv);
const int somuc=8;
const int dong=5;
const int cot=20;
const int up=72;
const int down=80;

char danhsach[somuc][50]={"1.Nhap danh sach sinh vien",
                          "2.Liet ke danh sach       ",
                          "3.Tim sinh vien theo ma so",
                          "4.Sap xep DSSV theo diem  ",
                          "5.Xoa sinh vien theo ma so",
                          "6.Ghi DSSV vao file       ",
                          "7.load DSSV vao bo nho    ",
                          "8.Ket thuc chuong trinh    "
};
void Normal(){
	SetColor(15);
	SetBGColor(0);
}
void Highlight(){
	SetColor(15);
	SetBGColor(5);
}
int menu(char ds[somuc][50]){
	Normal();
	clrscr();
	for(int i=0;i<somuc;i++){
		gotoxy(cot,dong+i);
		cout<<ds[i];
	}
	Highlight(); int chon=0;
	gotoxy(cot,dong+chon);
	cout<<ds[chon];
	char kytu;
	do{
		kytu=getch();
		if(kytu==0) kytu=getch();
		switch(kytu){
			case up:if(chon>0){
				Normal();
				gotoxy(cot,dong+chon);
				cout<<ds[chon];
				chon--;
				Highlight();
				gotoxy(cot,dong+chon);
				cout<<ds[chon];
			}break;
			case down:if(chon+1<somuc){
				Normal();
				gotoxy(cot,dong+chon);
				cout<<ds[chon];
				chon++;
				Highlight();
				gotoxy(cot,dong+chon);
				cout<<ds[chon];
			}break;
			
			case 13:return chon+1;
				
		}
		
	}while(1);
}
int main(){
	sinhvien dssv[MAX];
	int n=0; char tenfile[30]="D:/DSSV.TXT";
	int chon;
	while(1){
		chon=menu(danhsach);
		Normal();
		system("cls");
		switch(chon){
			case 1: nhap(dssv,n); break;
			case 2: xuat(dssv,n); break;
			case 3: ; break;
		   //case 4: sapxep(dssv,n); break;
			//case 5: xoa(dssv,n,masv);break;
			case 6: savelist(dssv,n,tenfile);break;
			case 7: openlist(dssv,n,tenfile);break;
			case somuc:return chon+1;
		}
}
}

int timkiem(sinhvien *dssv, int n,int ms){
	for(int i=0;i<n;i++)
	 if(dssv[i].maso==ms) return i;
	  
	return -1;
	
}
void nhap(sinhvien *dssv,int &n){
	
	int ms;
	while(1){
		
		printf("Nhap ma so: "); scanf("%d",&ms);
		
		if(ms==0) break;
		
		//if(timkiem(dssv,n,ms)>0) cout<<"Ma so da bi trung !"; continue;
		
		dssv[n].maso=ms;
		printf("Nhap ho ten: "); fflush(stdin); gets(dssv[n].hoten);
		printf("Nhap diem:   "); cin>>dssv[n].diem;
		printf("Nhap gioi tinh: "); fflush(stdin); gets(dssv[n].phai);
		dssv[n].hang=0;
		
		n++;
	}
}

void xuat(sinhvien *dssv, int n){
	
	for(int i=0;i<n;i++)
	 printf("\n%-5d%-30s%-10s%6.1f%5d",dssv[i].maso,dssv[i].hoten,dssv[i].phai,dssv[i].diem,dssv[i].hang);
    getch();
}
void savelist(sinhvien *dssv, int &n, char *tenfile){
	FILE *f;
	f=fopen(tenfile,"wb");
	if(f==NULL){
		
		printf("Loi mo file de ghi ");
		
		getch();
		
		return;
	}
	for(int i=0;i<n;i++)
	 fwrite(&dssv[i],sizeof(sinhvien),1,f);
	 
	 fclose(f);
}
void openlist(sinhvien *dssv, int &n, char *tenfile){
	FILE *f;
	f=fopen(tenfile,"rb");
	if(f==NULL){
		printf("Loi mo file de doc");
		
		getch();
		return;
	}
	n=0;
	while(fread(&dssv[n],sizeof(sinhvien),1,f)!=0) n++;
	
	fclose(f);
}
void sapsep(sinhvien *dssv,int n){
	int imin; sinhvien sv;
	
	for(int i=0;i<n-1;i++){
		imin=i;
		for(int j=i+1;j<n;j++)
         if(dssv[i].diem<dssv[imin].diem) imin=j;
          sv=dssv[i];
          dssv[i]=dssv[imin];
          dssv[imin]=sv;
	}
}
int xoasv(sinhvien *dssv, int &n, int masv){
	
	for(int i=0;i<n;i++)
	 if(dssv[i].maso==masv){
	 	for(int j=i+1;j<n;j++)
	 	dssv[j-1]=dssv[j];
	 	n--;
	 	return 1;
	 }
}

