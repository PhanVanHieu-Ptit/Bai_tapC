#include<iostream>

#include<conio.h>

#include<stdio.h>

using namespace std;

const int MAX=100;

void nhap(int a[MAX][MAX], int n, int m){
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			
			cout<<"Nhap phan tu A["<<i+1<<"]["<<j+1<<"] = ";cin>>a[i][j];
			
		}
	}
}
void xuat(int a[MAX][MAX], int n, int m){
	
	for(int i=0;i<n;i++){
		
		for(int j=0; j<m;j++)
		
		cout<<a[i][j]<<" ";
		
		cout<<"\n";
	}
}
int timSomax(int a[MAX][MAX], int n, int m){
	
	int max=a[0][0];
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			
			if(max<a[i][j]) max=a[i][j];
		}
	}
	return max;
}
int timSomin(int a[MAX][MAX], int n, int m){
	
	int min=a[0][0];
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			
			if(a[i][j]<min) min=a[i][j];
		}
	}
	return min;
}

void XoaCot(int a[][MAX], int &n, int m, int r)
{
   for(int i=r;i<n-1;i++)
      for(int j=0;j<m;j++)
         a[i][j]=a[i+1][j];
   n--;
}
void XoaDong(int a[][MAX], int n, int &m, int c)
{
   for(int i=0;i<n;i++)
      for(int j=c;j<m-1;j++)
         a[i][j]=a[i][j+1];
   m--;
}
void swap(int &a, int &b){
	
	int tg=a;
	a=b;
	b=tg;
}

void DoiCho2Hang(int a[][MAX], int n, int m, int row1, int row2)//Loi chua tim duocs
{
   if((row1>=0 && row1<n)&&(row2>=0 && row2<n))
      for(int j=0;j<m;j++)
         swap(a[row1][j],a[row2][j]);
}
 
void DoiChoHaiCot(int a[][MAX], int n, int m, int column1, int column2)//Loi chua tim duoc
{
   if((column1>=0 && column1<m)&&(column2>=0 && column2<m))
      for(int i=0;i<n;i++)
         swap(a[i][column1],a[i][column2]);
}
int main(){
	
	int n,m, a[MAX][MAX],r,c,row1,row2,column1,column2, max=0; 
	
	cout<<"Nhap so dong: "; cin>>n;
	
	cout<<"Nhap so cot: "; cin>>m;
	
	nhap(a,n,m);
	
	cout<<"Ma tran vua nhap:\n\n";
	
	xuat(a,n,m);
	
	cout<<"\nSo lon nhat trong mang: "<<timSomax(a,n,m);
	
	cout<<"\nSo nho nhat trong mang: "<<timSomin(a,n,m);
	
//	cout<<"\nNhap cot can xoa: "; cin>>c;
	
	XoaDong(a,n,m,c);
	
//	cout<<"\nMang sau khi xoa:\n\n"; xuat(a,n,m);
	
	
//	cout<<"Nhap so dong can xoa: "; cin >>r;
	
	XoaCot(a,n,m,r);
	
//	cout<<"Mang sau khi xoa:\n\n"; xuat(a,n,m);
	
//	cout<<"\nNhap hai hang muon doi cho nhau: "; cin>>row1>>row2;
	
	DoiCho2Hang(a,n,m,row1,row2);
	
//	cout<<"\nMa tran sau khi doi:\n\n"; xuat(a,n,m);
	
	cout<<"Nhap hai cot muon doi cho: "; cin>>column1>>column2;
	
	DoiChoHaiCot(a,n,m,column1,column2);
	
	cout<<"\nMa tran sau khi doi:\n\n"; xuat(a,n,m);
	
	getch();
}
