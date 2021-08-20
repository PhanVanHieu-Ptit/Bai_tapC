#include<iostream>

#include<stdlib.h>

#include<time.h>

using namespace std;

int main(){
	
	srand((time(NULL)));
	
	int m,n;
	
	cout<<"Nhap so dong: "; cin>>m;
	
	cout<<"Nhap so cot : "; cin>>n;
	
	int a[m][n], b[m][n];
	
	for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			
			a[i][j]=rand()%100;
			
			b[i][j]=rand()%100;
		}
	}
	cout<<"Ma tran A:\n\n";
	
	for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			
			cout<<a[i][j]<<"\t";
			
		}
		cout<<endl;
	}
	cout<<"Ma tran B:\n\n";
	for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			
			cout<<b[i][j]<<"\t";
			
		}
		cout<<endl;
	}
	return 0;
}
