#include <iostream>
#include<stdio.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void luu(){
	FILE *file=fopen("csdl.txt","w");
	
	fputs("sinh vien 1, Nguyen Van A, 1/7/1999\n",file);
	fputs("sinh vien 2, Nguyen Van B, 2/9/1998\n",file);
	fputs("sinh vien 3, Nguyen Van C, 5/3/1999",file);
	fclose(file);
}
void doc(){
	
	FILE *file=fopen("csdl.txt","r");
	
	char *s="\0";
	
	while(1){
		
		char line[100];
		
		s=fgets(line,100,file);
		
		if(s==NULL) break;
		
		cout<<s<<endl;
	}
	fclose(file);
}
int main(int argc, char** argv) {
	
	doc();

	return 0;
}
