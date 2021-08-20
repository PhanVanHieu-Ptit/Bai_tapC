#include <stdio.h>
 
// H�m d? quy
int SumRecursion(int n){
    /*
        sum = 1 + ... + n
     */
    // C�i if n�y l� di?u ki?n d?ng
    if(n == 0){
        return 0;
    }
    return n + SumRecursion(n-1); // G?i l?i ch�nh n�
}
 
 
/*
    Gi?i th�ch h�m d? quy
    Gi? s? n = 4
    4 + SumRecursion(3)
    4 + 3 + SumRecursion(2)
    4 + 3 + 2 + SumRecursion(1)
    4 + 3 + 2 + 1 + SumRecursion(0)
    4 + 3 + 2 + 1 + 0
*/
 
int main(){
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
 
    int sum2 = SumRecursion(n);
 
    //printf("\nSum1 = %d", sum1);
    printf("\nSum2 = %d", sum2);
}
