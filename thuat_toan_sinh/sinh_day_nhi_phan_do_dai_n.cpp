#include<iostream>
#include<conio.h>
#include<stdio.h>
#include <unistd.h>
using namespace std;
int main(){
	int n; cin>>n;
	int* a=new int[n];
	for(int i=0;i<n;i++) a[i]=0;
	for(int i=0;i<n;i++) cout<<a[i];
	cout<<endl;
	for(int i=n-1;i>=0;i--){
		if(a[i]==0){
			a[i]=1;
			if(i<n-1)
			for(int j=i+1;j<n;j++) a[j]=0;
			for(int j=0;j<n;j++) cout<<a[j];
			cout<<endl;
			i=n;
		}
	//	sleep(1);
	}
	delete[]a;
	return 0;
}

