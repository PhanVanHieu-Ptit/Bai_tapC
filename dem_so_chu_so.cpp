#include<iostream>

using namespace std;

int DigitCount(int n)
{
    if(n==0)
        return 0;
    return 1 + DigitCount(n/10);
}
int main(){
	
	int n;
	
	cout<<"Nhap mot so de dem so chu so: "; cin>>n;
	
	cout<<"So ban vua nhap co: ";
	
	cout<<DigitCount(n)<<" chu so";
	
	return 0;
}
