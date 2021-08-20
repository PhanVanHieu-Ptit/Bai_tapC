#include<iostream>// Co loi
#include<math.h>
#include<fstream>

const int MAX=100;
using namespace std;

bool kt1(int a, int k)// kiem tra co k chu so hay khong
{
	if(a>=pow(10,k-1) && a<=(pow(10,k)-1)) return 1;
	
	return 0;
}

bool kt2(long long a)// kiem tra so nguyen to
{
	if(a<2) return 0;
	
	for(int i=2;i<=sqrt(a);i++){
		
		if(a%i==0) return 0;
	}
	return 1;
}

bool kt3(long long a)// kiem tra dao nguoc co la so nguyen to khong
{
	
	int c=0;
	while (a>0){
		
		c=c*10+a%10;
		a/=10;
	}
 	if(kt2(c)==1) return 1;
 	
 	return 0;
}

bool kt4(long long a){
	
	while(a>0){
		
		if(kt2(a%10)==0) return 0;
		
		a/=10;
	}
	return 1;
}
bool kt5(int a){
	
	int tong=0;
	
	while(a>0){
		tong=tong+a%10;
		a/=10;
	}
	if(kt2(tong)==1) return 1;
	
	return 0;
}
void ghi_file(int a[MAX], int &n){
	fstream f; 
	
	f.open("data.txt",ios::in);
	
	f>>n;

	for(int i=0;i<n;i++){
		
		f>>a[i];
	}
	f.close();
}
int main(){
	int a[MAX],n=0;
	ghi_file(a,n);
//	for(int i=0;i<n;i++) cout<<a[i]<<"\n";
    int b[n+1];
    for(int i=0;i<n;i++) b[i]=0;
    for(int i=0;i<n;i++){
    	
    	for(long long j=pow(10,a[i]-1);j<=pow(10,a[i])-1;j++){
    		
    		
    		if(kt2(j) && kt3(j) && kt4(j) && kt5(j)) {
    			b[i]++;
			}
		}
	}
	for(int i=0;i<n;i++){
		
		cout<<a[i]<<"\t"<<b[i]<<endl;
	}
	return 0;
}
