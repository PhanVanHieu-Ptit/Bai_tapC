#include<iostream>

#include<stdlib.h>

#include<time.h>

using namespace std;

int main(){
	
	srand(time(NULL));
	
	int m,n;
	
	cout<<"Nhap so dong : "; cin >>m;
	
	cout<<"Nhap so cot : "; cin>>n;
	
	int a[m][n];
	
	for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			
			a[i][j]=rand()%100;
		}
	}
	cout<<"Ma tran ban dau:\n\n";
	for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	int at[n][m];
	for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			
			at[j][i]=a[i][j];
		}
	}
	cout<<"Ma tran sau khi doi dong thanh cot:\n\n";
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			
			cout<<at[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
