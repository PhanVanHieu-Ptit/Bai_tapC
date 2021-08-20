/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{   int i=1;
   printf("Press any key to continue:");
   while (!kbhit()) {
   	i++;
    printf("%d  ",i);
   } 
   char kytu=getch();
   printf("\nKy tu vua an : %c",kytu);
}*/
#include <stdio.h>
#include <conio.h>
const int ENTER=13;
int main ()
	{ 
	char c; char s[50]; int i=0;
	while(1)
		if((c=getch())== ENTER) break;
		else
		{s[i++]=c;
		printf("*");
		}
		s[i]='\0';
		printf("\n Chuoi s da nhap: %s.",s);
	}


