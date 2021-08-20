#include<iostream>

#include<string.h>

#include<stdio.h>
const int MAX=100;// ham hang

using namespace std;// khai bao giong nhu thu vien 

struct word{
	char a[MAX];//a[MAX] la mang mot chieu;[max] kich thuoc toi da cua mang do
};
int main(){
	int n=0;
	word tach[MAX];
	
	char s[MAX];
	
	fflush(stdin);// cho doi de cho phep nhap xau
	
	cout<<"Nhap chuoi: ";
	
	gets(s);// ham nhap chuoi
	strlwr(s);
	char *tu=strtok(s," ,.-\t\n");// loai bo khoang trang, dau ",.", \t: tab
	
	while(tu!=NULL){
		
		strcpy(tach[n++].a,tu);
		tu=strtok(NULL," ,.-\t\n");
	}
	for(int i=0;i<n;i++){
		
		int test =0;
		
		for(int j=0;j<i;j++){
			
			if(strcmp(tach[i].a,tach[j].a)==0) {
				
				test=1;
				
				break;
			}
		}
		if(test==0){
			
			int dem=1;
			
			for(int j=i+1;j<n;j++)
			 
			 if(strcmp(tach[i].a,tach[j].a)==0) dem++;
			 
			cout<<tach[i].a<<" "<<dem<<" lan"<<endl; 
		}
	}
	return 0;
}

