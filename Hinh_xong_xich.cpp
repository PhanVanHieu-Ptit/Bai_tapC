#include<iostream>
using namespace std;
int main (){
	int n,m;
	cin >> n >> m ;
	for(int i=1;i<=n;i++){
		if(i==1 or i==n)
		 for (int j=1;j<=m;j++){
		 	cout << '*';
		 }
		else
		 for(int j=1;j<=m;j++){
		 	if(j%2!=0)
		 	 cout << '*';
		 	else 
			 cout << ' '; 
		 }  
		 
	cout <<endl;	 
	}
return 0;	
}


