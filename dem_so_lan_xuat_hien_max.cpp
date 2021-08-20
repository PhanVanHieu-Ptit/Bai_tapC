/*#include<iostream>

#include<stdio.h >

#include<conio.h>



using namespace std;

const int MAX=100;

void nhap(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<"Phan tu thu"<<i+1<<" = "; cin>>a[i];
	}
}
void xuat(int a[MAX], int n){
	
	for(int i=0;i<n;i++)
	
	 cout<<a[i]<<" ";
}

int Maxlen(int a[],int b[MAX], int n, int &dem);

int main(){
	
	int a[MAX],b[MAX],n,dem=0,max;
	
	cout<<"Nhap n ="; cin>>n;
	
	cout<<"\nNhap cac phan tu cua mang:\n";
	
	nhap(a,n);
	
	cout<<"\nMang ban dau: ";
	
	xuat(a,n);
	
	Maxlen(a,b,n,dem);
	
	cout<<"\nSo xuat hien nhieu nhat: "<<max;
	
    printf(" voi %d lan xuat hien",dem);
	
   return 0;
}
int Maxlen(int a[MAX],int b[MAX], int n, int &dem){
	int max;
	for(int i=0;i<n;i++) b[i]=0;
	
	for(int i=0;i<n;i++) b[a[i]]++;
	max=a[0];
	dem=b[a[0]];
	for(int i=0;i<n;i++){
		
		if(dem<b[a[i]]){
			
			dem=b[a[i]];
			
		}
	}

	return max;
}*/
#include<stdio.h>
#include<conio.h>
int main(){
	//khai bao mangdem de chua so lan xuat hien cua moi phan tu co trong mangA.
	int mangA[50]={},soPhantu,mangdem[50]={};
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&soPhantu);
	//Nhap mang.
	for(int i=0;i<soPhantu;i++){
		if(i==0)
			printf("Nhap gia tri cho cac phan tu trong mang:\n");
		printf("A[%d]=",i);
		scanf("%d",&mangA[i]);
	}
	for(int i=0;i<soPhantu;i++){
		int dem =1;//khoi tao bien dem bang 1 vi moi phan tu it nhat phai xuat hien 1 lan.
		mangdem[i]=dem;// so lan xuat hien cua phan tu MangA[i] se ung voi gia tri cua phantu mangdem[i]
		for(int j=i+1;j<soPhantu;j++){
			if(mangA[i]==mangA[j]){//kiem tra su xuat hien cua phan tu Mang[i] bang cach so sanh voi phan tu MangA[j],neu 2 phan tu nay bang nhau thi xuat hien them mot phan tu MangA[i] nua va phai tang dem len 1.
				mangdem[i]=++dem;
				for(int k=j;k<soPhantu;k++){//sau khi kiem tra neu phantu MangA[j]=MangA[j] thi sau khi tang bien dem len 1 va xoa phan tu MangA[j] de tranh lap lai viec dem phan tu do.
					mangA[k]=mangA[k+1];
				}
				soPhantu--;//giam so phan tu di 1 vi ta cua xoa di mot phan tu co gia tri bang phan tu Mang A[i]
				j--;//giam j de viec de tranh bo xot di 1 phan tu trong cac lan kiem tra sau.
			}
		}
	}
	int max=0,vi_tri=0;//bien max chua so lan xuat hien nhieu nhat,vi_tri de chua vi tri cua phan tu xuat hien nhieu nhat trong mangA
	for(int i=0;i<soPhantu;i++){
		if(mangdem[i]>max){//so sanh max voi cac phan tu trong mangdem neu phan tu mangdem[i] lon hon max thi gan cho max,dong thoi gan chi so i cho vi_tri
			max=mangdem[i];
			vi_tri=mangA[i];
		}
}
		printf("\nPhan tu %d trong mangA xuat hien nhieu nhat ,cu the la %d lan.\n",vi_tri,max);
	getch();
	return 0;
}
