#include<iostream>

#include<conio.h>

#include<conio.h>

#include<string.h>

const int MAX=250;

struct tu{
	char a[MAX];
};

using namespace std;

void demkt(char s[MAX],char kitu[MAX]){
	
	for(int i=0;i<128;i++) kitu[i]=0;
	
	for(int i=0;i<strlen(s); i++) kitu[s[i]]++;
	
}
int tongkitu(char s[MAX], char kitu[MAX]){
	
	int tong=0;
	
	for(int i=0;i<128;i++){
		
		tong+=kitu[i];
	}
	return tong;
}
int sodaucach(char s[MAX], char kitu[MAX]){
	int tongcach=0;
	for(int i=0;i<strlen(s);i++){
		
		if(s[i]==32) tongcach++;
	}
	return tongcach;
}
int demtu(char s[MAX], char kitu[MAX], tu sotu[MAX]){
	int n=0;
	char *tach=strtok(s," \t\n.,-");
	while (tach != NULL){
		
		strcpy(sotu[n++].a,tach);
		
		tach=strtok(NULL," \t\n.,-");
		
	}
	/*for(int i=o;i<n;i++){
		
		int test=0;
		for(int j=0;j<i;j++){
			
			if(strcmp(tach[i].a,tach[j].a)==0){
				
				test=1;break;
			}
		}
		if(test==0){
			
			int dem=1;
			for(int j=i+1;j<n;j++)
			 if(strcmp(tach[i].a,tach[j].a)==0) dem++;
			 
			 cout<<tach[i].a<<" "<<dem<<" lan"<<endl;
		
		}
	}*/
 return n;
}

int main(){
	
	tu sotu[MAX];
	
	char s[MAX],kitu[MAX];
	
	cout<<"Nhap xau ki tu: ";
	
	fflush(stdin);
	
	gets(s);
	
	demkt(s,kitu);
	
	cout<<"Tong so ki tu trong mang: "<<tongkitu(s,kitu);
	
	cout<<"\nTrong do co "<<sodaucach(s,kitu)<<" dau cach";
	
	cout<<"\nTong so tu: "<<demtu(s,kitu,sotu);

	return 0;
}
