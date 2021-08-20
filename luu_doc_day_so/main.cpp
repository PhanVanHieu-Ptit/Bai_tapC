#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
void luufile(int number){
	
	FILE *file=fopen("csdl.txt","a");
	
	char str[5];
	
	itoa(number,str,10);
	
	fputs(str,file);
	fputs("\n",file);
	fclose(file);
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	while(true){
		
		int number;
		
		cout<<"Nhap so: "; cin>>number;
		
		luufile(number);
		
		char h;
		
		cout<<"Ban co muon tiep tuc ...(c/k)";
		
		cin>>h;
		
		if(h=='k') break;
	}
	cout<<"Ban da nhap xong !";
	
	FILE *file=fopen("csdl.txt","r");
	int Mchan[1000],ichan=0,Mle[1000],ile=0,Mam[1000],iam=0;
	while(true){
		
		char *line="\0";
		char buffer[5];
		
		line=fgets(buffer,5,file);
		
		if(line!=NULL){
			
			int number=atoi(line);
			
			if(number%2==0){
				
				Mchan[ichan++]=number;
			}
			else if(number%2!=0){
				
				Mle[ile++]=number;
			}
			if(number<0){
				
				Mam[iam++]=number;
			}
		}
		else {
			break;
		}
	}
	
	cout<<"\nCac so chan trong file: ";
	for(int i=0;i<ichan;i++){
		
		cout<<Mchan[i]<<"\t";
	}
	cout<<"\nCac so le trong file: ";
	for(int i=0;i<ile;i++){
		
		cout<<Mle[i]<<"\t";
	}
	cout<<"\nCac so am trong file: ";
	for(int i=0;i<iam;i++){
		
		cout<<Mam[i]<<"\t";
	}
	fclose(file);
	return 0;
}
