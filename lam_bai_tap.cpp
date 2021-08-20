/*#include<conio.h>

#include<iostream>

using namespace std;

float a[10][10];

int n;

void nhap();

void xuat();

void doicot(int,int);

void dinhthuc(int ,int);

int main(){
	cout <<"Nhap kich thuoc ma tran vuong, so hang=so cot< 10, n = "; cin >>n;
	
	cout <<"\n Nhap ma tran:\n";
	
	nhap();
	
	cout <<"\n Ma tran vuong vua nhap la: ";
	
	xuat();
	
	cout <<"\n Dinh thuc cua ma tran vuong la: \n\n"<<dinhthuc;
}
void nhap(){
	int t;
	
	for(int i=0;i<n;i++){
		
		cout<<"Nhap phan tu thu "<<i+1<<": "; 
		
		for(int j=0;j<n;j++){
			
			cout <<"\nA [ "<<i+1<<" , "<<j+1<<" ] = ";cin>>t;
			
			a[i][j]=t; 
		}
	}
}
void xuat(){
	
	for(int i=0;i<n;i++){
		cout<<endl;
		
		for(int j=0;j<n;j++){
			cout <<" ";
			
			cout <<a[i][j];
		}
	}
}
void doicot(int k,int t){
	float p;
	
	for(int i=0;i<n;i++){
		p=a[i][k];
		
		a[i][k]=a[i][t];
		
		a[i][t]=p;
	}
}
void truhang(int h, int r){
	float x;
	
	x=-a[h][h]/a[r][h];
	
	for(int i=h;i<n;i++){
		
		a[r][i]=a[h][i] + x*a[r][i];
	}
}
float dinhthuc(){
	float d=1; int i,j;
	
	for( i=0;i<n-1;i++){
		
		if(a[i][i]==0){
			
			for( j=i+1;(j<n)&&(a[i][i]==0);j++);
			
			if(j<n){
				doicot(i,j); d=-d;
			}
			else d=0;
		}
		if(d==0) break;
		
		for( j=i+1;j<n;j++)
		
		if(a[j][i]) truhang(i,j);
		}
		
		if(d) for( i=0;i<n;i++)
	 d=d*a[i][i];
	 
	 return d;
}*/  // CO LOI
/*#include<iostream>

#include<conio.h>

#include<string.h>

using namespace std;

int doixung(char s[]);

int main(){
	
	char c,s[80];
	do{
		cout <<" Nhap chuoi bat ki: ";
		
		fflush(stdin); gets(s);
	
	   cout <<" \n Chuoi vua nhap la : "; puts(s);
	   
	   if(doixung(s)) cout <<"\n Doi xung !";
	   
	   else cout <<"\n Khong doi xung !!";
	
	   cout <<"\nTiep tuc?(c/k)"; 
	   
	   fflush(stdin);
	   
	   c=getchar();
	   
	}
	while(c=='c' || c=='C');
	getch();	
}
int doixung(char s[]){
	int n,d;
	
	n=strlen(s); d=1;
	if(n>0) for(int i=0;i<n;i++)
	 d=(s[i]==s[n-1-i]);
	 
	 return d;
}*/
/*#include<iostream>

#include<string.h>

#include<stdio.h>

int ts[128];

void thongke(char[]);

int main(){
	
	char c, s[128];
	do{
		
		printf("Nhap xau ki tu:\n");
		
		fflush(stdin);  gets(s);
		
		thongke(s);
		
		printf("\n Tan suat cac ki tu co trong xau:\n\n");
		
		for(int i=0;i<128;i++)
		
		if(ts[i])
		
		if(i==32) printf("\n Dau cach: %d",ts[i]);
		
		else printf("\n Ki tu %c : %d",i,ts[i]);
		
		printf("\n Tiep tuc ...");
		
		fflush(stdin);  c=getchar();	
	}
	while(c=='c'|| c=='C');
}
void thongke(char s[]){
	
	int n;
	
	n=strlen(s);
	
	for(int i=0;i<128;i++) ts[i]=0;
	
	for(int i=0;i<n;i++) ts[s[i]] ++;
}*/
#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<string.h>

using namespace std;

int main(){
	
	char i, s[30];
	
	FILE *f;
	
	f=fopen("DSSV.TXT","W");
	
	 i=1;
	
	printf("Nhap ho ten sinh vien:\n");
	
	do{
		printf("Nhap ho ten sinh vien thu %d ",i++);
		
	    gets(s);
		
		if(strlen(s)>0){
			
			strcat(s,"\n");
			
			fputs(s,f);
		}
		
	}
	while(strlen(s)>0);
	
	fclose(f);
	
	f=fopen("DSSV.TXT","r");
	
	printf("Danh sach sinh vien lay ra tu tep: \n");
	
	i=1;
	
	while(fgets(s,30,f)){
		
		printf("%d. ",i++);
		
		puts(s);
	}
	fclose(f);
	
	getch();
}
