/*#include<stdio.h>

#include<graphics.h>

#include<conio.h>

#include<stdlib.h>

#include<iostream>

int main()

{int gdrv=DETECT,gmode,errorcode,mx,my;

initgraph( &gdrv, &gmode,"..\\BGI");

errorcode=graphresult();

if (errorcode!=grOk)

{printf("Graphics error : %s\n",grapherrormsg(errorcode));

printf("Press any key to halt ...");

getch();

exit(1);

}

mx=getmaxx()/2;my=getmaxy()/2;

setbkcolor(BLUE);

setcolor(RED);

setfillstyle(1,RED);

bar(mx-150,my-100,mx+150,my+100);

setcolor(YELLOW);

setfillstyle(1,YELLOW);

moveto(mx,my-70);

lineto(mx+50,my+60);

lineto(mx-70,my-25);

lineto(mx+70,my-25);

lineto(mx-50,my+60);

lineto(mx,my-70);

floodfill(mx,my,YELLOW);

floodfill(mx,my-30,YELLOW);

floodfill(mx+20,my+30,YELLOW);

floodfill(mx-20,my+30,YELLOW);

floodfill(mx-50,my-20,YELLOW);

floodfill(mx+50,my-20,YELLOW);

getch();

closegraph();

}*/
#include <conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
//#include<alloc.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
void vesao(int x,int y,int r)
{   int i;
int gd=18;
int s[12];
for(i=0;i<12;i+=2)
{
s[i]=x+r*cos(gd*M_PI/180)  ;
s[i+1]=y-r*sin(gd*M_PI/180);
gd+=144;
}
setcolor(YELLOW);//mau duong ve
setfillstyle(1,YELLOW);//kieu to va mau to
fillpoly(6,s);//do mau vung ngoai
floodfill(x,y,YELLOW);//do mau vung trong
}
int main()
{
  int mh=0,mode=0,size,i;
  char *p;
  float a;
  initgraph(&mh,&mode,"e:\\tc\\bgi");
  setcolor(WHITE);
  setfillstyle(1,BROWN);
  bar(40,30,45,200);
  setfillstyle(1,BROWN);
  bar(30,200,55,210);
  setfillstyle(1,BROWN);
  bar(18,210,67,220);
  setfillstyle(1,RED);
  bar(45,32,155,92);
  setfillstyle(1,YELLOW);
  //(100,62) la toa do tam ngoi sao
  a=15/cos(18*M_PI/180);

 line(100-15,62-15*tan(18*M_PI/180),100+15,62-15*tan(18*M_PI/180));
  line(100-15,62-15*tan(18*M_PI/180),100+a*cos(54*M_PI/180),62+a*sin(54*M_PI/180));
  line(100+15,62-15*tan(18*M_PI/180),100-a*cos(54*M_PI/180),62+a*sin(54*M_PI/180));
  line(100-a*cos(54*M_PI/180),62+a*sin(54*M_PI/180),100,62-a);
  line(100+a*cos(54*M_PI/180),62+a*sin(54*M_PI/180),100,62-a);
  floodfill(100,62,WHITE);
  floodfill(100,62-a+5,WHITE);
  floodfill(100-10,62-4,WHITE);
  floodfill(100+10,62-4,WHITE);
  floodfill(93,69,WHITE);
  floodfill(107,70,WHITE);
  size=imagesize(18,30,155,220); //tra ve so byte can thiet de luu tru anh trong pham vi hinh chu nhat
  p=(char*)malloc(size);   //tra ve con tro tro toi vung nho n byte moi duoc cap phat
  getimage(18,30,155,220,p);  //chep cac diem anh cua hinh ch
     int j=1;

 while (j<=400)
     {
    putimage(j,30,p,0);   //0:sao chep nguyen xi
    delay(50);
    putimage(j,30,p,1);   //1:cac diem anh trong bitmap ket hop voi cac diem anh tren man hinh bang phep XOR

    j=j+10;

   }
  getch();
  closegraph();
}
