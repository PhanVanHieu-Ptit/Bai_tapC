/*#include<iostream>

const int MAX=100;

using namespace std;

void nhap(int a[MAX], int n){
	
	for(int i=0; i<n;i++) cin>>a[i];
}
void xuat(int a[MAX], int n){
	
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
void tach(int a[MAX],int n){
	
	for(int i=0;i<n;i++){
		
		if(a[i]%2!=0) 
	}
}
int main(){
	
	int a[MAX],b[MAX],c[MAX],n;
	
	cout<<"Nhap n:";cin>>n;
	
	nhap(a,n);
	
	xuat(a,n);
	
	cout<<"Mang ban dau: ";
	
	tach
	
}*/
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
const int MAX=100;
void tachmang(int c[MAX],int n)
{
 int a[10],b[10],k=0,q=0;
 for(int i=0;i<n;i++)
  if(c[i]%2!=0)
   {
    a[k]=c[i];
    k++;
   }
  else
   {
    b[q]=c[i];
    q++;
   }

 printf("mang a la:");
  for(int i=0;i<k;i++)
   printf("%d\t",a[i]);
 printf("\n");
 printf("mang b la:");
  for(int j=0;j<q;j++)
   printf("%d\t",b[j]);
}
  

int main()
{int n; 
  cout<<"Nhap n: "; cin >>n;
 int c[n];
 for(int i=0;i<n;i++)
  {
   printf("c[%d]=",i);scanf("%d",&c[i]);
  }
 tachmang(c,n);
}
