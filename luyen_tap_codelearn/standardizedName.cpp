#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
string standardizedName(string name)
{
    string kq="";
    int n=name.length();
    while(1){
        if(name[n-1]==' ') n--;
        else break;
    }
    int t=0;
    while(1){
        if(name[t]==' ') t++;
        else break;
    }
    if(name[t]>='a'&&name[t]<='z') name[t]-=32;
    kq+=name[t];
    bool kt=0;
    for( int i=t+1;i<n;i++){
        if(name[i]!=' '){
            if(name[i]>='A'&&name[i]<='Z') name[i]+=32 ;
            kq+=name[i];
        }
        else kt=1;
        if(kt==1){
            ++i;
            while(name[i]==' ') ++i;
            if(name[i]>='a'&&name[i]<='z') name[i]-=32;
            kq+=' ';
            kq+=name[i];
            kt=0;
         }
    }
    return kq;
}
int main(){
	string name;
	fflush(stdin);
	getline(cin,name);
	cout<<standardizedName(name);
	return 0;
}

