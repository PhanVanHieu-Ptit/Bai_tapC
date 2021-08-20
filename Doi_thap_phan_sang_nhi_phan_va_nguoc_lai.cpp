/*#include <stdio.h>
#include <math.h>
 
long long Dec2Bin(int decimalNumber) // Ctrl H => find & replace
{
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}
 int BinToDec(long long binaryNumber)
{
    int p = 0;
    int decNumber = 0;
    while (binaryNumber > 0)
    {
        decNumber += (binaryNumber % 10) * pow(2, p);
        ++p;
        binaryNumber /= 10;
    }
    return decNumber;
}
int main()
{
    int decimalNumber;
    printf("\nNhap so thap phan: ");
    scanf("%lli", &decimalNumber);
    printf("Bin = %lli", Dec2Bin(decimalNumber));
    long long binaryNumber;
    printf("\nNhap so nhi phan: ");
    scanf("%lli", &binaryNumber);
    printf("Dec = %d", BinToDec(binaryNumber));
}*/
#include<iostream>
#include<math.h>

using namespace std;

int BintoDec(long long a){
	
	int p=0,b=0;
	
	while(a>0){
		
		b+=(a%10)*pow(2,p);
		
		++p;
		
		a/=10;
	}
	return b;
}
int main(){
	
	long long b; cout<<"Nhap so nhi phan: "; cin>>b;
	
	cout<<BintoDec(b);
}
