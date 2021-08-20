#include<iostream>
#include<cmath>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
string encryption(string s)
{
    int n=s.length();
    string kq="";
    int m1=sqrt(n);
    int m2=m1+1;
    for(int i=0;i<m2;i++){
       for(int j=0;j<m1;j++){
       		char c=s[m2*j+i];
       		if(c==' ') continue;
            kq+=c;
       }
    }
    return kq;
}
int main(){
	string s;
	cout<<"Nhap chuoi: "; 
	fflush(stdin);
	getline(cin,s);
	
	int n=s.length();
	int m1=sqrt(n);
	int t=0;
	string b="";
	for(int i=0;i<n;i++){
		b+=s[i];
		t++;
		if(t==m1){
			t=0;
			cout<<b<<"\n";
			b="";
		}
	}
	cout<<"\n"<<encryption(s);
	return 0;
}
// CHUA GIAI QUYET XONG
