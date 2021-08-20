#include <stdio.h>
#include <math.h>
 
/* Hàm s?p x?p s? d?ng thu?t toán s?p x?p chèn */
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Di chuy?n các ph?n t? có giá tr? l?n hon giá tr? 
       key v? sau m?t v? trí so v?i v? trí ban d?u
       c?a nó */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
 
/* Hàm xu?t m?ng */
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
