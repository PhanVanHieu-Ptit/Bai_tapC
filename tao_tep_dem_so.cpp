/*#include<stdio.h>

#include<conio.h>

int main()

{int i,x,ts,sd,max,min;

char t;

FILE *fp;

fp=fopen("tepsn.dat","w");

printf("Nhap tung so nguyen :\n");

i=1;

do

{printf("So thu %d : ",i++); scanf("%d",&x);

fprintf(fp,"%d ",x);

printf("Tiep tuc nhap ? (c/k) : ");

fflush(stdin);

t=getchar();

}while ((t=='c')||(t=='C'));

fclose(fp);

fp=fopen("tepsn.dat","r");

ts=sd=0;

if (!feof(fp))

{fscanf(fp,"%d",&x);

max=min=x;

ts++;

if (x>0) sd++;

while (!feof(fp))

{fscanf(fp,"%d",&x);

if (max<x) max=x;

if (min>x) min=x;

if (x>0) sd++;

ts++;

}

}

if(x>0)sd--;

ts--;//So nguyen sau cung duoc doc 2 lan

fclose(fp);

printf("Tat ca co %d so nguyen\n",ts);

printf("Trong do so luong so duong = %d\n",sd);

printf("Max=%d, Min=%d",max,min);

getch();

}*/
#include<conio.h>

#include<stdio.h>

int main(){
	
	int i,x,ts,sd,max,min;
	
	char t;
	
	FILE *fp; 
	
	fp=fopen("tepsn.dat","w");
	
	printf("Nhap tung so nguyen:\n");
	
	i=1;
	
	do{
		
		printf("Nhap so thu %d: ",i++); scanf("%d",&x);
		
		fprintf(fp,"%d",x);
		
		printf("\n Tiep tuc ?(c/k)");
		
		fflush(stdin);
		
		t=getchar();
	}
	while(t=='c' || t=='C');
	
	fclose(fp);
	
	fp=fopen("tepsn.dat","r");
	
	ts=sd=0;
	
	if(!feof(fp))
	
	{
		fscanf(fp,"%d",&x);
		
		max=min=x; ts++;
		
		while(!feof(fp)){
			
		fscanf(fp,"%d",&x);
			
			if(max<x) max=x;
		
		    if(min>x) min=x;
		
		    if(x>0) sd++;
		
		    ts++;
		    	}	
	}

if(x>0) sd--;

ts--;

fclose(fp);

printf("\n Tat ca co %d so nguyen\n",ts);

printf("\n Trong do so luong so duong la: %d",sd);

printf("\n So lon nhat la: %d ",max);

printf("\n So nho nhat la: %d",min);

getch();}
