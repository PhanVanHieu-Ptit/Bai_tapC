/*#include <iostream>

#include<stdlib.h>

#include<time.h>

using namespace std;



int main(int argc, char** argv) {
	
	srand(time(NULL));
	
	int n;
	
	cout<<"Nhap so luong phan tu cua mang: "; cin>>n;
	
	int a[n];
	
	for(int i=0;i<n;i++){
		
		a[i]=rand()%100;
	}
	
	cout<<"Mang ban dau:\n";
	
    for(int i=0;i<n;i++){
    	
    	cout<<a[i]<<"\t";
	}
	cout<<"\nMang dao nguoc:\n";
	
	for(int i=n-1;i>=0;i--){
		
		cout<<a[i]<<"\t";
	}
	
	return 0;
}*/
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
			
			a[i][j]=rand()%10;
			
			b[i][j]=rand()%10;
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
	int c[m][n];
	
	cout<<"\nTong cua hai ma tran:\n\n";
	
	for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			
			cout<<c[i][j]<<"\t";
			
		}
		cout<<endl;
	}

	return 0;
}
