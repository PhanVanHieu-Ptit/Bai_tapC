/*#include<conio.h>

#include<iostream>

#define max 100

using namespace std;

void nhap(int[],int);

void sapxep(int[],int);

void xuat(int[],int);

int main()

{int a[max],n;

cout<<"Nhap so phan tu n<"<<max<<", n= "; cin>>n;

nhap(a,n);

cout<<"Mang truoc khi sap xep :\n";

xuat(a,n);

sapxep(a,n);

cout<<"\nMang sau khi sap xep :\n";

xuat(a,n);

}

void nhap(int a[],int n)

{int i;

cout<<"Nhap cac phan tu cua mang :\n";

for (i=0;i<n;i++)

{cout<<"A["<<i+1<<"]=";

cin>>a[i];

}

}

void xuat(int a[],int n)

{int i,j;

for (i=0;i<n;i++) cout<<a[i]<<" ";

}

void sapxep(int a[],int n)

{int i,j,tg;

for (i=0;i<n-1;i++)

for (j=i+1;j<n;j++)

if (a[i]>a[j])

{tg=a[i]; a[i]=a[j]; a[j]=tg;

}

}*/
#include<conio.h>
#define max 100
#include<stdio.h>
void nhap(int a[],int n);
void xuat(int a[], int n);
void sapxep(int a[], int n);
int main(){
	int a[max],n;
	printf("Nhap n<100,n= "); scanf("%d",&n);
	printf("\n Nhap mang: ");
	nhap(a,n);
	printf("\n Mang ban dau: ");
	xuat(a,n);
	sapxep(a,n);
	printf("\n Mang sau khi sap xep: ");
	xuat(a,n);
	getch();
}
void nhap(int a[], int n){
	for(int i=0; i<n; i++){
		printf("Nhap phan tu A[%d]: ",i+1); scanf("%d",&a[i]);
	}
}
void xuat(int a[], int n){
	for(int i=0;i<n;i++)
	 printf("%d ",a[i]);
}
void sapxep(int a[],int n){
	int tg;
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(a[j]<a[i])
	 {tg=a[i];
	 a[i]=a[j];
	 a[j]=tg;
	 }
}

