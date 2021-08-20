/*#include<stdio.h>

#include<conio.h>

#include<string.h>

int ts[128];

void thongke(char[]);

int main()

{char c,s[80];int i;

do

{

printf("\nNhap xau ki tu : \n");

fflush(stdin);

gets(s);

thongke(s);

printf("Tan so cac ky tu trong xau la :\n");

for(i=0;i<128;i++)

if(ts[i])

if(i==32) printf("\nDau cach : %d",ts[i]);

else printf("\nKy tu %c : %d",i,ts[i]);

printf("\nTiep tuc ? (c/k):");

fflush(stdin);

c=getchar();

}while ((c=='c')||(c=='C'));

}

void thongke(char s[])

{int i,n;

n=strlen(s);

for(i=0;i<128;i++)ts[i]=0;

for(i=0;i<n;i++) ts[s[i]]++;

}*/
#include<stdio.h>

#include<conio.h>

#include<string.h>

int ts[128];

void thongke(char []);

int main() {
	
	char c, s[80]; int i;
	
	do{
		printf("\n Nhap xau ki tu: \n");
	
	fflush(stdin);
	
	gets(s);
	
	thongke(s);
	
	printf("\n  Tan suat so lan xuat hien cua cac ki tu trong xau vua nhap:\n ");
	
	for(i=0;i<128;i++)
	
	if(ts[i])
	
	if(i==32) printf("\nDau cach : %d ",ts[i]);
	
	else printf("\n ki tu %c : %d ",i,ts[i]);
	
	printf("\n Tiep tuc?(c/k)");
	
	fflush(stdin);
	
	c=getchar();
	}
	while(c=='c' || c=='C');	
}
void thongke(char s[]){
	
	int i,n;
	
	n=strlen(s);
	
	for(i=0;i<128;i++) ts[i]=0;
	
	for(i=0;i<n;i++) ts[s[i]] ++;
	
	
}
