#include<stdio.h>

#include<conio.h>

#include<string.h>

void chuanhoa(char[]);

int sotu(char[]);

char *timtumax(char []);

int main()

{char s[80];


printf("\nNhap xau ki tu : \n");

gets(s);

printf("\nXau ban dau:\n");

puts(s);

chuanhoa(s);

printf("\nXau da chuan hoa:\n");

puts(s);

printf("\nSo tu cua xau : %d\n",sotu(s));

printf("\nTu dai nhat trong xau : %s",timtumax(s));

}

void chuanhoa(char s[])

{int i,k,n;

do

{n=strlen(s);

for(i=0;(i<n-1)&&((s[i]-32)||(s[i+1]-32));i++);

if(i<n-1) for(k=i;k<n;k++)s[k]=s[k+1];

}while(i<n-1);

if(s[0]==32)for(i=0;(i<n);i++)s[i]=s[i+1];

}

int sotu(char s[])

{int i,n,d;

n=strlen(s);

if((n>0)&&(s[0]-32))d=1;

else d=0;

for (i=0;i<n-1;i++) if((s[i]==32)&&(s[i+1]-32))d++;

return d;

}

char *timtumax(char s[])

{int t,p,n,c,d;char x[80];

d=0;c=t=-1; n=strlen(s);

do

{do t++; while ((t<n)&&(s[t]==32));

if(t==n) break;

p=t;

do p++; while ((p<n)&&(s[p]-32));

p--;

if(p-t>c-d){d=t;c=p;}

t=p+1;

}while(t<n);

for(t=d;t<=c;t++)x[t-d]=s[t];

x[t-d]=0;

return x;

}
