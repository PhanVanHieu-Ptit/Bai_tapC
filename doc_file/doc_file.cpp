
#include<iostream>

#include<stdio.h>

#include<conio.h>

const int MAX=100;

using namespace std;
void nhapfile(int a[MAX], int n){
	FILE *file=fopen("Tailieu.txt","w");
	
	if(file==NULL){
		
		cout<<"Co Loi"; exit(1);
	}
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap so thu "<<i+1<<" : ";cin>>a[i];
	}
	
//	fprintf(file,"%d\n",n);
	
	for(int i=0;i<n;i++){
		
		fprintf(file,"%d ",a[i]);
	}
	
	fclose(file);
}
void docfile(int a[MAX], int n){
	FILE *file=fopen("Tailieu.txt","r");
	
	if(file==NULL){
		
		printf("Co loi");
		
		exit(1);
	}
	
	for(int i=0;i<n;i++){
		
		fscanf(file,"%d ",&a[i]);	
	}
	
	fclose(file);
}
void xuat(int a[MAX], int n){
	
	for(int i=0;i<n;i++){
		
		cout<<a[i]<<" ";
	}
}
int ktdoixung(int b){
	
	int c=0,m=b;
	if(b<10) return 0;
	while(b!=0){
		c=c*10+b%10;
		b=b/10;
	}
	if(c==m) return 1;
	
	else return 0;
}
void tach(int a[MAX], int n){
	int k=0,tg;
	for(int i=0;i<n;i++){
		
		if(ktdoixung(a[i])==1){
			
			tg=a[k];
			a[k]=a[i];
			a[i]=tg;
			
			k++;
		}
	}
}
int main(){
	
	int n,a[MAX];
	
	printf("Nhap n:"); scanf("%d",&n);
//	nhapfile(a,n);
	docfile(a,n);
	
	cout<<"\nMang doc tu file:\n";
	
	xuat(a,n);
	
	tach(a,n);
	
	cout<<"\nMang sau khi tach:\n";
	
	xuat(a,n);
	
	return 0;
}
