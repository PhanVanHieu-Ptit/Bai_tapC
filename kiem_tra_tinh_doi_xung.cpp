/*#include<stdio.h>

#include<conio.h>

#include<string.h>

int doixung(char[]);

int main()

{char c,s[80];

do

{

printf("\nNhap xau ki tu : \n");

fflush(stdin);

gets(s);

if (doixung(s)) printf("Xau doi xung !");

else printf("Xau khong doi xung !");

printf("\nTiep tuc ? (c/k):");

fflush(stdin);

c=getchar();

}while ((c=='c')||(c=='C'));

}

int doixung(char s[])

{int i,n,d;

n=strlen(s);d=1;

if (n>0) for (i=0;(i<=n/2)&&d;i++)

d=(s[i]==s[n-1-i]);

return d;

}*/
#include<stdio.h>

#include<conio.h>

#include<string.h>

int doixung(char []);

int main(){
	
   char c,s[80];
   
   do{
   	
   	printf("\n Nhap xau ki tu:\n ");
   	
   	fflush(stdin);
   	
   	gets(s);
   	
   	if( doixung(s)) printf(" Xau doi xung ! ");
   	
   	else printf(" Khong doi xung ! ");
   	
   	printf(" Tiep tuc?(c/k)");
   	
   	fflush(stdin);
   	
   	c=getchar();
   }
   while(c=='c' || c=='C');
}
int doixung(char s[]){
	
	int i,n,d;
	
	n=strlen(s); d=1;
	
	if(n>0) for(i=0;(i<n/2)&&d;i++)
	
	d = (s[i] == s[n-1-i]);
	
	return d;
}
