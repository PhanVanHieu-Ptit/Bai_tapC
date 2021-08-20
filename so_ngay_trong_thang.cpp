#include<iostream>

#include<conio.h>

#include<stdio.h>

using namespace std;

int SoNgayTrongThang(int th, int nm);

int main(){
	
	int th, nm;
	
	cout<<"Nhap thang: ";cin >>th;
	
	cout<<"Nhap Nam: "; cin>>nm;
	
	int day=SoNgayTrongThang(th,nm);
	
	printf("Thang %d nam %d co %d ngay.",th,nm,day);
	
	getch();
}
int SoNgayTrongThang(int th, int nm){
	
	if(th==1 || th==3 || th== 5 || th==7 || th==8 || th==10 || th==12) return 31;
	
	else if(th==2){
		
		if((nm%4==0 && nm%100!=0) || nm%400==0) return 29;
		
		else return 28;
	}
	return 30;
}
