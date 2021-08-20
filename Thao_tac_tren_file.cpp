#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SOSV 100	// s? sinh viên t?i ?a trong danh sách
 struct sinhvien	// dinh nghia struct sinhvien
{ char maso[6];
  char hoten[30];
};

 struct danhsach_sv	// dinh nghia struct danhsach_sv 
{ int tssv;
  sinhvien sv[MAX_SOSV];
}  ;

void Nhap_ds ( danhsach_sv &ds)	
{ char sosv[4];
  printf("So sinh vien muon nhap :");  fflush(stdin);  gets(sosv);
  ds.tssv=atoi(sosv);
   for (int i=0; i<ds.tssv; i++)
   { printf("Ma so  :"); fflush(stdin);     gets(ds.sv[i].maso);
     printf("Ho ten :"); fflush(stdin);     gets(ds.sv[i].hoten);
   }
}

void Lietke_ds ( danhsach_sv &ds)
{  int i=0;
    
   printf ("    Ma so          Ho & ten \n");
   while (i < ds.tssv)
     { printf ("%8s       %-s\n", ds.sv[i].maso,ds.sv[i].hoten);
       i++;
     }
   getch();
}
/* Hàm Timkiem tìm maso trong danhsach sinh vien ds      */
int Timkiem(danhsach_sv ds, char maso[])  
{ 
  for  (int i=0;i<ds.tssv; i++)
    if (stricmp(ds.sv[i].maso, maso)==0) return i; 
    
  return  -1 ;
}

int main()
{  danhsach_sv ds;
   char maso[6];
   int vitri;
   Nhap_ds(ds);	// Goi hàm Nhap_ds voi tham so là ds
   Lietke_ds(ds);
   printf("Ma so sinh vien ban can tim :"); fflush(stdin);   gets(maso);
   vitri = Timkiem(ds, maso);
   if (vitri !=-1)
       printf("Ho ten cua sinh vien la %s",ds.sv[vitri].hoten);
   else printf(" Khong co sinh vien voi ma ban nhap vao");
   getch();
}

