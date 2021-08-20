#include <stdio.h>
#include <math.h>
 
/* H�m s?p x?p s? d?ng thu?t to�n s?p x?p ch�n */
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Di chuy?n c�c ph?n t? c� gi� tr? l?n hon gi� tr? 
       key v? sau m?t v? tr� so v?i v? tr� ban d?u
       c?a n� */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
 
/* H�m xu?t m?ng */
void printArray(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}
 
 
 
 
int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    insertionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
 
    return 0;
}
