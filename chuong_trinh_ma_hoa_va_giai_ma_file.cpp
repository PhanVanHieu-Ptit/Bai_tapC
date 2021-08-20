#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
const char duoi[5] = ".txt";
const char duoiSave[5]= ".dat";

/************************************************************************/
/* Nguyen mau ham														*/
/************************************************************************/
void mahoa(char*tenfile);
void giaima(char*tenfile);
void mahoavb();
char fm(char);	//Ham ma hoa
char fg(char);	//Ham giai ma
int mod(int a,int b); //Dinh nghia lai phep chia lay du
char* nhapkey();		//Dung de nhap mat khau
void add(char* x,char y);	//Them 1 ky tu vao chuoi
void move(char* x);			//Xoa ky tu cuoi ra khoi chuoi
char* NhapMatKhau();

// 3 ham di copy duoc !
void gotoxy(int x, int y);
int wherex();
int wherey();
/************************************************************************/
/*                                                                      */
/************************************************************************/
using namespace std;
int main()
{
	int chon;
	do 
	{
		system("cls");
		cout<<"\tCHUONG TRINH MA HOA VA GIAI MA FILE"<<endl;
		cout<<"\t\tChuc nang:\n";
		cout<<"\t\t1. Ma hoa file.\n";
		cout<<"\t\t2. Giai ma file.\n";
		cout<<"\t\t3. Nhap van ban can ma hoa.\n";
		cout<<"\t\t4. Thoat.\n";
		cout<<"\t\tLua chon?: ";
		cin>>chon;
		cin.ignore();
		if(chon ==1)
		{
			
			char tenfile[30];
			cout<<"Nhap ten file can ma hoa: ";
			cin.getline(tenfile,30);
			strcat(tenfile,duoi);
			cout<<endl;
			mahoa(tenfile);
			cout.flush();
			getch();
		}
		else if(chon ==2)
		{			
			char tenfile[30];
			cout<<"Nhap ten file can giai ma : ";
			cin.getline(tenfile,30);
			strcat(tenfile,duoiSave);
			giaima(tenfile);
			cout.flush();
			getch();
		}
		else if (chon ==3)
		{
			mahoavb();
			cout.flush();
			getch();
		}
		cout.flush();
		
	} while(chon !=4);
}


/************************************************************************/
/* Dinh nghia cac ham                                                   */
/************************************************************************/

void mahoa(char*tenfile)
{
	ifstream fin(tenfile,ios::nocreate);
	if(fin.is_open())
	{
		cout<<"Noi dung cua file can ma hoa: "<<endl;
		cout<<"---------------------------"<<endl;
		char ch;
		fin.get(ch);

		while(!fin.eof())
		{
			cout<<ch;
			fin.get(ch);
		}
		cout<<endl<<"---------------------------"<<endl;
		fin.close();

		char* key;
		key=NhapMatKhau();

		char tenfilemh[30];
		
		cout<<"\nLuu file ma hoa voi ten: ";
		cin.getline(tenfilemh,30);
		strcat(tenfilemh,duoiSave);
		fin.open(tenfile,ios::nocreate);
		ofstream fout(tenfilemh,ios::noreplace);
		if(!fout)
		{
			cout<<"File \""<<tenfilemh<<"\" da ton tai."<<endl;
		}
		else
		{
			int i=0;
			while(key[i]!=0)
			{
				fout<<fm(key[i]);
				i++;
			}
			fout<<endl;
			char ch;
			fin.get(ch);
			char h;
			h=fm(ch);
			while(!fin.eof())
			{
				fout.put(h);
				fin.get(ch);
				h=fm(ch);				
			}
			fin.close();
			fout.close();
			cout<<"Ghi file thanh cong!"<<endl;
			cout<<"Co muon xoa file nguon khong? [C/K]: ";
			cout.flush();
			char del=getch();
			if(del=='c' || del=='C')
				remove(tenfile);
		}
	}
	else
		cout<<"Khong doc duoc file "<<tenfile;
}

void giaima(char*tenfile)
{
	ifstream fin(tenfile,ios::nocreate);
	if(fin.is_open())
	{
		char* key1;
		key1=new char[20];
		key1[0]='\0';
		
		char*key;
		key=new char[20];
		
		char ch;
		while (fin.get(ch))
		{			
			if(ch=='\n')
				break;
			add(key1,fg(ch));
		}

		do 
		{
			cout<<"Nhap mat khau: ";
			key=nhapkey();
			if(strcmp(key,key1)!=0)
				cout<<"SAI MAT KHAU! HAY THU LAI."<<endl;
		} while(strcmp(key,key1)!=0);
		
		cout<<"Noi dung giai ma duoc : "<<endl;
		cout<<"---------------------------"<<endl;
		
		fin.get(ch);
		while (!fin.eof())
		{
			cout<<fg(ch);
			fin.get(ch);
		}
		cout<<endl<<"---------------------------"<<endl;
		fin.close();
		
		char tenFileSave[30];
		cout<<"Luu file giai ma voi ten: ";
		cin.getline(tenFileSave,30);
		strcat(tenFileSave,duoi);
		ofstream fout(tenFileSave,ios::noreplace);
		if(!fout)
		{
			cout<<"File \""<<tenFileSave<<"\" da ton tai."<<endl;
		}
		else
		{
			fin.open(tenfile,ios::nocreate);
			fin.ignore(20,'\n');
			fin.get(ch);
			char h;
			h=fg(ch);
			while(!fin.eof())
			{
				fout.put(h);
				fin.get(ch);
				h=fg(ch);				
			}
			fin.close();
			fout.close();
			cout<<"Ghi file thanh cong!"<<endl;
		}
	}
	else
		cout<<"Khong doc duoc file "<<tenfile;
}

void mahoavb()
{
	char text[1000];
	text[0]='\0';
	char ch;

	// Cho phep xoa ky tu da nhap
	int dongdautien;
	int vitrixuonghang[200];
	int dong=0;
	cout<<"Nhap van ban can ma hoa, nhan phim Esc de ket thuc: "<<endl;
	cout<<"---------------------------";
	cout.flush();
	gotoxy(5,wherey()+1);
	dongdautien=wherey();
	do 
	{
		cout.flush();
		ch=getch();
		int dau=wherey();
		if(int(ch) == 27)
		{
			add(text,'\0');
			break;
		}
		else if(ch ==13)
		{
			add(text,'\n');
			vitrixuonghang[dong]=wherex();
			dong++;
			gotoxy(5,wherey()+1);
		}
		else if(int(ch) ==8)
		{
			if(wherey()!=dongdautien || wherex() !=5)
			{
				if(wherex()==5)
				{
					dong--;
					gotoxy(vitrixuonghang[dong],wherey()-1);
				}
				cout<<"\b";
				cout<<" ";
				cout<<"\b";
				move(text);
			}
		}
		else if(ch !=72 &&ch !=75 && ch !=77 && ch != 80 && ch !=-32)
		{
			add(text,ch);
			cout<<ch;
			if(wherex()==75)
			{				
				vitrixuonghang[dong]=75;
				dong++;
				gotoxy(5,wherey()+1);
			}
		}
	} while(1);

	cout<<endl<<"---------------------------"<<endl;

	char tenFileSave[30];
	cout<<"Nhap ten file de luu lai: ";
	cin.getline(tenFileSave,30);
	strcat(tenFileSave,duoiSave);
	ofstream fout(tenFileSave,ios::noreplace);
	if (!fout)
	{
		cout<<"File "<<tenFileSave<<" da ton tai."<<endl;
	}
	else
	{
		char* key;
		key=NhapMatKhau();
		int i=0;
		while(key[i]!=0)
		{
			fout<<fm(key[i]);
			i++;
		}
		fout<<endl;
		i=0;
		while (text[i]!=0)
		{
			fout<<fm(text[i]);
			i++;
		}
		fout.close();
		cout<<"Ghi file thanh cong!";
	}
}


char fm(char a)//ma hoa
{
	int y=mod((int(a)*9+17),128);	
	return char(y);
}

char fg(char a)//giai ma
{
	int y=mod((int(a)-17)*57,128);
	return char(y);
}

int mod(int a,int b)//Dinh nghia phep chia lay phan du
{
	if(a>=0)
		return a%b;
	else
	{
		int x=a/b-1;
		return a-(b*x);
	}
}

char* nhapkey()
{	
	cout.flush();
	char ch;
	char* key;
	key=new char[20];
	key[0]='\0';
	int dau=wherex();
	do 
	{		
		ch=getch();
		if(ch == 13)
			break;
		else if(ch ==8)
		{
			if(wherex()>dau)
			{
				cout<<"\b";
				cout<<" ";
				cout<<"\b";
				cout.flush();
				move(key);	
				
			//Hoac dung cach nay:
				//gotoxy(wherex()-1,wherey());
				//cout<<" ";
				//cout.flush();
				//gotoxy(wherex()-1,wherey());
			}			
			else;
		}
		else
		{
			add(key,ch);
			cout<<"*";
			cout.flush();
		}
	} while(ch !=13);
	cout<<endl;
	return key;
}

char* NhapMatKhau()
{
	char* key;
	char* key1;
	do 
	{
		cout<<"Nhap mat khau dai toi da 20 ky tu: ";
		key=nhapkey();
		cout<<"Nhap lai mat khau: ";
		key1=nhapkey();
		if (strcmp(key,key1) != 0)
			cout<<"MAT KHAU KHONG CHINH XAC! HAY NHAP LAI.\n"<<endl;
	} while(strcmp(key,key1) != 0);
	return key;
}

void add(char* x,char y)
{
	int i=strlen(x);
	x[i]=y;
	x[i+1]='\0';
}

void move(char* x)
{
	int i=strlen(x);
	if(x[i-1]=='\n')	//Loai bo ky tu xuong hang,
		i--;			
	x[i-1]='\0';
}


void gotoxy(int x, int y)
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(hCon, pos);
}

/* Chu y: phai flush ra truoc khi lay toa do
/*-------------------------wherex()------------------------------------*/

int wherex()
{
	CONSOLE_SCREEN_BUFFER_INFO  csbi;
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hCon, &csbi);
	return csbi.dwCursorPosition.X;
}
/*-------------------------wherey()----------------------------------*/

int wherey()
{
	CONSOLE_SCREEN_BUFFER_INFO  csbi;
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hCon, &csbi);
	return csbi.dwCursorPosition.Y;
}
