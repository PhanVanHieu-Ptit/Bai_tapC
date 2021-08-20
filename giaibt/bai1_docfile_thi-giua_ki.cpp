#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
const int MAX=100;

void docfile(int a[MAX], int &n){
	
	fstream filein;
	
	filein.open("Dayso.txt",ios::in);
	
	filein>>n;
	
	for(int i=0;i<n;i++){
		
		filein>>a[i];

	}
	filein.close();
}

int main(){
	
	int a[MAX],n=0;
	
	docfile(a,n);
	
	for(int i=0;i<n;i++){
		
		cout<<a[i]<<" ";
	}
	return 0;
}

