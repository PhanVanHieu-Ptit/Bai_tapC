#include<iostream>
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<conio.h>
using namespace std;
typedef struct{
	char tenDV[20];
	float TL,GT,DG;
	int so_DV_duoc_chon;
}DoVat;
DoVat *ReadFromFile(float *W, int *n){
	FILE *f;
	f=fopen("CaiTui1.TXT","r");
	fscanf(f,"%f", W);
	DoVat *dsdv;
	dsdv = (DoVat*)malloc(sizeof(DoVat));
	int i=0;
	while(!feof(f)){
		fscanf(f,"%f%f%f[^\n]",&dsdv[i].TL,&dsdv[i].GT,&dsdv[i].tenDV);
		dsdv[i].DG=dsdv[i].GT/dsdv[i].TL;
		dsdv[i].so_DV_duoc_chon=0;
		i++;
		dsdv = realloc(dsdv , sizeof(DoVat)*(i+1));// LOI 
	} 
	*n=i;
	fclose(f);
	return dsdv;
}
void swap(DoVat* a, DoVat* b){
	DoVat tmp=*a;
	*a=*b;
	*b=tmp;
}
void bubbleSort(DoVat *dsdv, int n){
	for(int i=0;i<=n-1;i++){
		for(int j=n-1;j>=i+1;j--){
			if(dsdv[j].DG>dsdv[j-1].DG) swap(&dsdv[j],&dsdv[j-1]);
		}
	}
}
void Indsdv(DoVat *dsdv, int n, float W){
	int i;
	float TongTL=0, TongGT=0;
	printf("Thuat toan THAM LAM bai toan cai tui:\n");
	printf("|---|----------------------------------------------------------------------|\n");
	printf("|STT|     Ten Do Vat   | Trong luong | Gia tri | Don gia | So DV duoc chon |\n");
	printf("|---|------------------|-------------|---------|---------|-----------------|\n");
    for(int i=0;i<n;i++){
    	printf("|%-3d|%-20s|%9.2f|%9.2f|%9.2f|%8d      |\n",i+1,dsdv[i].tenDV,dsdv[i].TL,dsdv[i].GT,dsdv[i].DG,dsdv[i].so_DV_duoc_chon);
    	TongTL+=dsdv[i].TL;
    	TongGT+=dsdv[i].GT;
	}
    printf("|---|------------------|-------------|---------|---------|-----------------|\n");
    printf("Trong luong cua ba lo = %9.2f\n",W);
    printf("Tong trong luong cac do vat duoc chon: %9.2f\nTong gia tri cac do vat duov chon: %9.2f",TongTL,TongGT);
}
void Greedy(DoVat*dsdv, int n, float W){
	for(int i=0;i<n;i++){
		dsdv[i].so_DV_duoc_chon= (W/dsdv[i].TL);
		W=W-dsdv[i].so_DV_duoc_chon*dsdv[i].TL;
	}
}
int main(){
	int n;
	float W;
	DoVat *dsdv;
	dsdv=ReadFromFile(&W, &n);
	bubbleSort(dsdv,n);
	Greedy(dsdv,n,W);
	Indsdv(dsdv,n,W);
	free(dsdv);
	return 0;
}

