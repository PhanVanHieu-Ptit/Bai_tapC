#include<iostream>
#include<math.h>
using namespace std;
int countingProblem1(int a, int m, int n)
{
   int dem=0;
   for(int i=0;i<=n;i++){
       long long b=pow(i,2)-a;
       if(b%m==0) dem++;
   }
   return dem;
}
int main(){
	int a,m,n;
	cin>>a>>m>>n;
	cout<< countingProblem1(a,m,n);
	return 0;
}
