#include<iostream>
using namespace std;
int main(){
	int n,m;cin >> n >> m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i==1 or i==n){
			cout << "*";
		    }
		    else if(i!=1 and i!=n and j<=m){
		    	cout << "* ";
		    	j++;
			}
		}
	
		cout << endl;	
     }
	
return 0;	
}
