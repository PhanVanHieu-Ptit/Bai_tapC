#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	//printf(" Nhap n: "); scanf("%d",&n);
	cout << " Nhap so n: "; cin>>n;
	//printf(" Cac so hoan hao khong vuot qua %d la: ",n);
	cout << " Cac so hoan hao khong vuot qua "<< n << " la: ";
	int ts=0;
	for(int i=2;i<=n;i++){
	 int s=1;
	 for(int j=2;j<=i/2;j++)
	  if(i%j==0) s+=j;
	  if(s==i){
	  	ts++;
	  	//printf("\n %d = 1",i);
	  	cout <<"\n "<<i<<"= 1";
	  	for(int j=2;j<=i/2;j++)
	  	 if(i%j==0)
	  	  //printf(" + %d",j);
	  	  cout << " + " <<j;
	  }
       
	}
	if(ts>0)
	 //printf("\nCo tat ca %d so hoan hao\n ",ts);
	 cout << "\n Co tat ca "<<ts<<" so hoan hao";
	else
	 //printf("\n khong co so hoan hao");
	 cout <<"\n Khong co so hoan hao";
  //getch();
  return 0;
  	  
}
