#include<iostream>
#include<cmath>
#include<cstdio>
#include<string.h>
using namespace std;
int row[8],TC,lineCounter,a,b;
bool kiemTraDieuKien(int r, int c){
	for(int i=0;i<c;i++){
		if(row[i]==r || abs(row[i]-r)==abs(i-c)) return false;
	}
	return true;
}
void quayLui(int c){
	if(c==8){
		for(int i=0;i<8;i++) cout<<row[i]+1<<" ";
		cout<<"\n";
	}
	else{
		for(int i=0;i<8;i++){
			if(kiemTraDieuKien(i,c)){
				row[c]=i;
				quayLui(c+1);
			}
		}
	}
}
int main(){
	memset(row,0,sizeof row);
	lineCounter=0;
	cout<<"Vi tri co the dat hau:\n";
	cout<<"1 2 3 4 5 6 7 8\n";
	quayLui(0);
	return 0;
}
