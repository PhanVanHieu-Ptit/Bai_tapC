/*#include <iostream>
#include <string>
#include <iterator>
#include <sstream>
#include <vector>

int main(int argc, const char * argv[]) {
    std::stringstream textstream1, textstream2;
    textstream1 << "Hello, I'm a software engineer. I just want to test some function";
    textstream2 << "Hello, I am a doctor. I want to help people";
    
    // Split words & copy to two difference list
    std::istream_iterator<std::string> in1(textstream1), end;
    std::istream_iterator<std::string> in2(textstream2);
    
    std::vector<std::string> list1(in1, end);
    std::vector<std::string> list2(in2, end);

    // Sort list
   sort (list1.begin(), list1.end());
    std::sort (list2.begin(), list2.end());
    
    // Copy duplicates words to v list
    std::vector<std::string> v(list1.size());
    std::vector<std::string>::iterator it;
    it = std::set_intersection (list1.begin(), list1.end(), list2.begin(), list2.end(), v.begin());
    v.resize(it-v.begin());
    
    // Print duplicate words was found
    std::cout << "The intersection has " << (v.size()) << " elements:\n";
    for (it=v.begin(); it!=v.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
    
    return 0;
}*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<mylib.h>
#include<string>
using namespace std;
const int MAX=100;

struct sinhvien{
	
	int maso;
	
	char ho[20],ten[10];
	
	float diem; 
	
	char phai[5];
	
	int hang;
};
const int somuc=11;
const int dong=5;
const int cot=20;
const int up=72;
const int down=80;

char phuluc[somuc][50]= {"1.Nhap du lieu                ",
                       "2.Liet ke danh sach           ",
                       "3.Sap xep cac sinh vien       ",
                       "4.Xep hang cac sinh vien      ",
                       "5.Tim kiem thong tin sinh vien",
                       "6.Them thong tin sinh vien    ",
                       "7.Xoa thong tin               ",
                       "8.Cap nhat du lieu            ",
                       "9.Luu du lieu                 ",
                       "10.Load du lieu               ",
                       "11.Ket thuc qua trinh"};
void Normal () {
	SetColor(15);
	SetBGColor(0);
}
void Highlight () {
	SetColor(15);
	SetBGColor(1);
}
int Menudong(char pl[somuc][50]){
	Normal;
	clrscr();
	for(int i=0; i<somuc ; i++){
		gotoxy(cot,dong+i);
	    cout<<pl[i];
	}
	Highlight();int chon=0;
	gotoxy(cot,dong + chon);
	cout<<pl[chon];
	char kytu;
	do{
		if(kytu==0) kytu=getch();
		switch(kytu){
			
			case up:if(chon>0){
				
				Normal();
				gotoxy(cot,dong + chon);
				cout<<pl[chon];;
				chon--;
				Highlight();
				gotoxy(cot, dong + chon);
				cout<<pl[chon];
			}break;
			case down: if(chon+1>somuc){
				Normal();
				gotoxy(cot,dong + chon);
				cout<<pl[chon];
				chon++;
				Highlight();
				gotoxy(cot, dong + chon);
				cout<<pl[chon];	
			}
			break;
			
			case 13:return chon+1;
		}
	}
	while(1);
}
void Tao_dssv(sinhvien dssv[],int n);
void Lietke(sinhvien dssv[],int n);
void sapxep(sinhvien dssv[],int n);
void xephang(sinhvien dssv[],int n);
int timkiem(sinhvien dssv[],int n);
void them(sinhvien dssv[],int n);
void xoa(sinhvien dssv[],int n);
void capnhat(sinhvien dssv[],int n);
void load(sinhvien dssv[],int n);
void luu(sinhvien dssv[],int n);
int main(){
	sinhvien dssv[MAX];
	int n=0; char tenfile[30]="D:/dssv.TXT";
	int chon;
	while(1){
		chon=Menudong(phuluc);
		Normal();
		system("cls");
		switch(chon){
			
			case 1: Tao_dssv( dssv, n) ; break;//case 1:Tao_dssv(dssv,n);break;
			case 2:Lietke(dssv,n);break;
			case 3:sapxep(dssv,n);break;
			case 4:xephang(dssv,n);break;
		    case 5:timkiem(dssv,n);break;
		    case 6:them(dssv,n);break;
		    case 7:xoa(dssv,n);break;
		    case 8:capnhat(dssv,n);break;
		    case 9:luu(dssv,n);break;
		    case 10:load(dssv,n);break;
		    case somuc: return 0;
		}
	}
}
