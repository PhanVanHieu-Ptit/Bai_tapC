/*#include<stdio.h>

#include<conio.h>

#include<string.h>

int main()

{char i,s[30];

FILE *f;

f=fopen("DSSV.TXT","w");

i=1;

printf("Nhap ho ten cua tung hoc sinh, ket thuc go Enter\n");

do

{printf("Ho ten hoc sinh thu %d : ",i++);

gets(s);

if (strlen(s)>0)

{strcat(s,"\n");

fputs(s,f);

}

}while (strlen(s)>0);

fclose(f);


f=fopen("DSSV.TXT","r");

printf("Danh sach hoc sinh doc tu tep :\n\n");

i=1;

while (fgets(s,30,f))

{printf("%d. ",i++);

puts(s);

}

fclose(f);

getch();

}*/
#include<conio.h>

#include<stdio.h>

#include<string.h>

int main(){
	
	char i, s[30];
	
	FILE *f;
	
	f=fopen("DSSV.TXT","w");
	
	i=1;
	
	printf("Nhap ho ten sinh vien, go ENTER de ket thuc:\n");
	
	do{
		
		printf("Nhap ho ten sinh vien thu %d :  ",i++);
		
		gets(s);
		
		if(strlen(s)>0){
			
			strcat(s,"\n");
			
			fputs(s,f);
		}
	}
	while(strlen(s)>0);
	
	fclose(f);
	
	f=fopen("DSSV.TXT","r");
	
	printf("\n Danh sach sinh vien doc tu tep:\n\n");
	
	i=1;
	
	while(fgets(s,30,f)){
		
		printf("%d.",i++);
		
		puts(s);
	}
	fclose(f);
	
	getch();
	
}
