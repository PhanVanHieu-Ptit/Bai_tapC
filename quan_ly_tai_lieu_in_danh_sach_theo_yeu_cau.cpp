/*#include<stdio.h>

#include<iostream>

#include<conio.h>

#include<string.h>

using namespace std;

struct tailieu

{char ma[10];

char ten[30];

int sotrang,namxb;

tailieu *next;

};

tailieu *nhap();

void xoa(tailieu *);

int main()

{tailieu *p,*q,*head;

int i;

head=nhap();;

printf("\nGo Enter Tiep tuc ...");getch();

printf("\nDanh sach tai lieu :\n\n");

printf("%-4s%-10s%-30s%-10s%-10s\n","Stt","Ma","Ten tai lieu","So tr","Nam XB");

p=head;i=0;

while (p!=NULL)

{printf("%-4d%-10s%-30s%-10d%-10d\n",++i,p->ma,p->ten,p->sotrang,p->namxb);

        p=p->next;

}

printf("\nGo Enter Tiep tuc ...");getch();

printf("\nDanh sach tai lieu xuat ban tu nam 1998 :\n\n");

printf("%-4s%-10s%-30s%-10s%-10s\n","Stt","Ma","Ten tai lieu","So tr","Nam XB");

p=head;i=0;

while (p!=NULL)

{if(p->namxb>=1998)printf("%-4d%-10s%-30s%-10d%-10d\n",
                         ++i,p->ma,p->ten,p->sotrang,p->namxb);

    p=p->next;

}

}

void xoa(tailieu *p)

{tailieu *q;

while (p!=NULL)

{q=p; p=p->next; delete q;

}

}

tailieu *nhap()

{tailieu *p,*q,*h;

char s[10];

h=NULL;

printf("Nhap du lieu cua cac tai lieu, ket thuc go Enter :\n");

printf("Tai lieu thu 1 :\n");

printf("Ma so : ");gets(s);

if (strcmp(s,""))

{p=new tailieu;

strcpy(p->ma,s);

printf("Ten tai lieu : ");gets(p->ten);

printf("So trang : ");cin>>p->sotrang;

printf("Nam xuat ban : ");cin>>p->namxb;

p->next=NULL;

h=p;q=p;

printf("Tai lieu tiep theo :\n");

printf("Ma so : ");

gets(s);

while (strcmp(s,""))

{p=new tailieu;

       strcpy(p->ma,s);

       printf("Ten tai lieu : ");gets(p->ten);

       printf("So trang : ");cin>>p->sotrang;

 printf("Nam xuat ban : ");cin>>p->namxb;

       p->next=NULL;

       q->next=p;

       q=p;

       printf("Tai lieu tiep theo :\n");

       printf("Ma so : ");
	   
	   gets(s);

}

}

return h;

}*/
#include<iostream>

#include<stdio.h>

#include<conio.h>

#include<string.h>

using namespace std;

struct tailieu{
	
	char ma[10];
	
	char ten[30];
	
	int sotrang,namxb;
	
	tailieu*next;	
};
tailieu *nhap();

void xoa(tailieu *);

int main()
{tailieu *p,*q,*head;
	
	int i;
	
	head=nhap();;
	
	printf("Go Enter de tiep tuc ... "); getch;
	
	printf("\n Danh sach cac tai lieu:\n\n");
	
	printf("%-4s%-10s%-30s%-10s%-10s\n","stt","ma so","ten tai lieu","so trang","namxb");
	
	p=head; i=0;
	
	while(p!=NULL){
		
		printf("%-4d%-10s%-30s%-10d%-10d\n",++i,p->ma,p->ten,p->sotrang,p->namxb);
		
		p=p->next;
		
	}
	printf("\n Go Enter tiep tuc..."); getch();
	
	printf("\n Danh sach cac tai lieu tu nam 1998:\n\n");
	
	printf("%-4s%-10s%-30s%-10s%-10s\n","stt","ma so","ten tai lieu","so trang","namxb");
	
	p=head; i=0;
	
	while(p!=NULL){
		
		if(p->namxb>=1998) 
		
		printf("%-4d%-10s%-30s%-10d%-10d\n",++i,p->ma,p->ten,p->sotrang,p->namxb);
		
		p=p->next;
	}
}/*{tailieu *p,*q,*head;

int i;

head=nhap();;

printf("\nGo Enter Tiep tuc ...");getch();

printf("\nDanh sach tai lieu :\n\n");

printf("%-4s%-10s%-30s%-10s%-10s\n","Stt","Ma","Ten tai lieu","So tr","Nam XB");

p=head;i=0;

while (p!=NULL)

{printf("%-4d%-10s%-30s%-10d%-10d\n",++i,p->ma,p->ten,p->sotrang,p->namxb);

        p=p->next;

}

printf("\nGo Enter Tiep tuc ...");getch();

printf("\nDanh sach tai lieu xuat ban tu nam 1998 :\n\n");

printf("%-4s%-10s%-30s%-10s%-10s\n","Stt","Ma","Ten tai lieu","So tr","Nam XB");

p=head;i=0;

while (p!=NULL)

{if(p->namxb>=1998)printf("%-4d%-10s%-30s%-10d%-10d\n",
                         ++i,p->ma,p->ten,p->sotrang,p->namxb);

    p=p->next;

}

}*/
void xoa(tailieu *p){
	
	tailieu *q;
	
	while(p!=NULL){
		
		q=p;p=p->next;delete q;
	}
}
/*tailieu *nhap(){
	
	tailieu *p,*q,*h;
	
	char s[10]; h=NULL;
	
	printf("\n Nhap cac tai lieu,go Enter de ket thuc\n ");
	
	printf("\nTai lieu thu 1:\n");
	
	printf("\n Nhap ma so: "); gets(s);
	
	if(strcmp(s,"")){
		
		p=new tailieu;
		
		strcpy(p->ma,s);
		
		printf("\n ten tai lieu: "); gets(p->ten);
		
		printf("\n so trang : "); cin >>p->sotrang;
		
		printf("\n nam xuat ban: "); cin>>p->namxb;
		
		p->next=NULL;
		
		h=p; q=p;
		
		printf("\n Tai lieu tiep theo: ");
		
		printf("\n Ma so : ");
		
		gets(s);
		
		while(strcmp(s,"")){
			
		 p=new tailieu;
		 
		 strcpy(p->ma,s);
		 
		 printf("\n Ten tai lieu: "); gets(p->ten);
		 
		 printf("\n So trang : "); cin>>p->sotrang;
		 
		 printf("\n Nam xuat ban: "); cin>>p->namxb;
		 
		 p->next=NULL;
		 
		 q->next=p;
		 
		 p=q;
		 
		 printf("\n Tai lieu tiep theo: ");
		 
		 printf("\n Ma so: ");
		 
		 gets(s);
		}
	}
	return h;
}*/tailieu *nhap()

{tailieu *p,*q,*h;

char s[10];

h=NULL;

printf("Nhap du lieu cua cac tai lieu, ket thuc go Enter :\n");

printf("Tai lieu thu 1 :\n");

printf("Ma so : ");gets(s);

if (strcmp(s,""))

{p=new tailieu;

strcpy(p->ma,s);

printf("Ten tai lieu : ");gets(p->ten);

printf("So trang : ");cin>>p->sotrang;

printf("Nam xuat ban : ");cin>>p->namxb;

p->next=NULL;

h=p;q=p;

printf("Tai lieu tiep theo :\n");

printf("Ma so : ");

gets(s);

while (strcmp(s,""))

{p=new tailieu;

       strcpy(p->ma,s);

       printf("Ten tai lieu : ");gets(p->ten);

       printf("So trang : ");cin>>p->sotrang;

 printf("Nam xuat ban : ");cin>>p->namxb;

       p->next=NULL;

       q->next=p;

       q=p;

       printf("Tai lieu tiep theo :\n");

       printf("Ma so : ");
	   
	   gets(s);

}

}

return h;

}
