#include "stdio.h"
#include "conio.h"
 
int delete_dupX(int A[], int *n, int x);
void print_arr(int A[], int n);
 
int main( )
{
int A[] = {5, 10, 15, 1, 5, 4, 0, 5, 6};
int n = sizeof(A)/sizeof(int);
print_arr(A, n);
delete_dupX(A, &n, 5);
print_arr(A, n);
 
getch();
}
 
//Delete element is duplicated with X
int delete_dupX(int A[], int *n, int x)
{
int i, j;
int res = -1;
for(i = *n-1; i >= 0; i--)
{
if(A[i] == x)
{
for(j = i; j < *n-1; j++)
{
A[j] = A[j+1];
}
(*n)--;
res = 0;
}
}
return res;
}
 
//Display array
void print_arr(int A[], int n)
{
int i;
printf("\n=============================");
for(i = 0; i < n; i++)
{
printf("\nA[%d] = %d", i, A[i]);
}
}
