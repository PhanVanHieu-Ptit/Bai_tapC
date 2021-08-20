#include<iostream>

#include<string.h>

const int MAX=100;

using namespace std;

struct word{
	
	char a[MAX];
};

void nhap(char s[MAX]){
	
	do{
	   cout<<"\nNhap xau ki tu: ";
	
	   fflush(stdin);
	
	   gets(s);
	   
	   if(s==NULL) {
	   	
	   	cout<<"\nXau rong, moi ban nhap lai";
	   }
	}
	while(s==NULL);
}
void xuat(char s[MAX]){
	cout<<"\nChuoi ban dau:\n";
	puts(s);
}
void tachtu(word tach[MAX], char s[MAX], int &n){
	
	char *tu=strtok(s," ,.-\t");

	while(tu!=NULL){
		
		strcpy(tach[n++].a,tu);
		
		tu=strtok(NULL," ,.-\t");
	}
}
void demtu(word tach[MAX],int n, char tukt[MAX] ){
	int dem=0;
	for(int i=0;i<n;i++){
		
		if(strcmp(tach[i].a,tukt)==0) dem++;
	}
	cout<<"\nSo lan xuat hien: "<<dem<<endl;
}
void demtu_khongpb(word tach[MAX],int n, char tukt[MAX] ){
	int dem=0;
	for(int i=0;i<n;i++){
		
		if(stricmp(tach[i].a,tukt)==0) dem++;
	}
	cout<<"\nSo lan xuat hien: "<<dem<<endl;
}
void show(){
cout<<"==================================================\n";
cout<<"|                 TUY CHON                       |\n";
cout<<"==================================================\n";
cout<<"|    1.Dem tu phan biet chu hoa thuong           |\n";
cout<<"|   2.Dem tu khong phan biet chu HOA - thuong    |\n";
cout<<"==================================================\n";
}
int main(){
	
	word tach[MAX];
	
	char s[MAX],tukt[MAX];
	
	int n=0;
	
	nhap(s);
	
	xuat(s);
	
	cout<<"\nNhap tu can kiem tra: "; 
	
	fflush(stdin);
	
	gets(tukt);
	
	tachtu(tach,s,n);
	
    show();
	
	int chon;
	
	do{
		cout<<"\nNhap su lua chon (1-2) : "; cin>>chon;
		
		if(chon<1&& chon>2) cout<<"\nNhap sai, nhap lai";
	}
	while(chon<1 && chon >2);
	
	switch(chon){
		
		case 1: demtu(tach,n,tukt); break;
		
		case 2: demtu_khongpb(tach,n,tukt); break;
		
	}
	return 0;
}
