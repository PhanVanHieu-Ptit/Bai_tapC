/*#include <iostream>
#include <string.h>
 
#define maxx 100

using namespace std;

 
char word[256];
int alphaChar[maxx],
    upperChar[maxx];
 
int main()
{
    /*Initialization*//*
      for ( int x = 0; x < 26; x++ )
      {
            alphaChar[x] = 0;
            upperChar[x] = 0;
      }
     
      cout << "\nUser enter a word [no space] : ";
     
     fflush(stdin);
     
     gets(word);
     
      cout << "\n\n\n";
   
      int w = 0;
   
      do
      {
            for(int index = 0; index < (strlen(word)); index++)
            {
                  if( word[index] == char(97 + w))
                      alphaChar[w]++;
                  else if ( word[index] == char(65 + w))
                      upperChar[w]++;
            }
                 
            w++;
      }while ( w != 26 );
             
   
   
      for ( int i = 0; i < 26; i++ )
      {
            if ( upperChar[i] != 0 )
                  cout << "the Char " << char(65 + i) << " occurences is : " << upperChar[i] << endl;
            else if ( alphaChar[i] != 0 )
                  cout << "the Char " << char(97 + i) << " occurences is :" << alphaChar[i] << endl;
      }
     
      return 0;
}*/
/*#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
 
int main()
{
    char *s,*t,*q;
    int i,j,dem=0,x=0,m=0,n,l,o=0;
    printf ("\n nhap 1 chuoi:");
    gets(s);
    printf ("\n nhap 1 tu de kiem tra:");
    gets(t);
    strcpy(q,t);
    strlwr(s);
    strlwr(t);
    for (l=0;l<=strlen(s);l++)
    {
        if (s[l]==' '||l==strlen(s))
         {
         if (l-o==strlen(t)&&s[o]==t[0])
 
        for (j=0,i=o;j<strlen(t)&&i<l;j++,i++)
          {
        if (s[i]==t[j])
           {
            q[m++]=t[j];
            x++;
           }
           else
        {
            m=0;x=0;
        }
        }
          if (x==strlen(t))
            if (strcmp(q,t)==0)
            {
                m=0;x=0;dem++;
            }
            else
            {
                m=0;x=0;
            }
           o=l+1;
           }
    }
    printf ("\n co %d tu : %s",dem,t);
 
getch();
}*/

