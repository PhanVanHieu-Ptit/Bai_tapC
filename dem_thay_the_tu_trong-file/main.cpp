#include <iostream>// co loi
#include<fstream>
#include<string.h>

const int MAX=250;

using namespace std;

struct word{
	
	char a[MAX];
};
void nhap(char a[MAX]){
	
	cout<<"Nhap chuoi: ";
	
	fflush(stdin);
	
	gets(a);
}
void xuat(char a[MAX]){
	
	puts(a);
}
void luufile(char a[MAX]){
	
	FILE *file=fopen("Dulieu.txt","w");
	fputs(a,file);
	fclose(file);
}
void doc(char a[MAX]){
	
	FILE *file=fopen("Dulieu.txt","r");
	
	char *s="\0";
	
	while(1){
		
		char line[100];
		
		s=fgets(line,100,file);
		
		if(s==NULL) break;
		
		cout<<s<<endl;
	}
	fclose(file);
}
void demtu(char a[MAX], word tach[MAX]){
	
     int n=0;
	
	strlwr(a);
	
	char *tu=strtok(a," \t");
	
	while(tu!=NULL){
		
		strcpy(tach[n++].a,tu);
		
		tu=strtok(NULL," \t");
	}
	for(int i=0;i<n;i++){
		
		int test=0;
		
		for(int j=0;j<i;j++){
			
			if(strcmp(tach[i].a,tach[j].a)==0){
				
				test=1; break;
			}
		}
		if(test==0){
			
			int dem=1;
			
			for(int j=i+1;j<n;j++) 
			
			 if(strcmp(tach[i].a,tach[j].a)==0) dem++;
			 
			cout<<tach[i].a<<" "<<dem<<" lan "<<endl;
		}
	}
}
void thaytu(char a[MAX],word tach2[MAX], char tuthay[MAX],char thay[MAX]){
	int n=0;
	
	strlwr(a);
	
	char *tu=strtok(a," \t");
	
	while(tu!=NULL){
		
		strcpy(tach2[n++].a,tu);
		
		tu=strtok(NULL," \t");
	}
	for(int i=0;i<n;i++){
		
	    if(strcmp(tach2[i].a,tuthay)==0){
				
			  strcpy(tach2[i].a,thay);
		}
	}
}
int main(int argc, char** argv) {
	
	word tach[MAX],tach2[MAX];
	
	char a[MAX],tuthay[MAX], thay[MAX];
	
	nhap(a);
	
	cout<<"Mang nhap tu ban phim:\n";
	
//	xuat(a);
	
	luufile(a);
	
	cout<<"Doc tu file:\n";
	
	xuat(a);
	
	demtu(a,tach);
	
	/*cout<<"Nhap tu muon thay doi: ";
	
	fflush(stdin);
	
	gets(tuthay);
	
	cout<<"Thay bang: ";
	
	fflush(stdin);
	
	gets(thay);
	
	thaytu(a,tach,tuthay,thay);*/
	
	xuat(a);
	
	doc(a);
	return 0;
}
