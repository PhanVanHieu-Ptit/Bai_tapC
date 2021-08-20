/*#include<iostream>//btk
using namespace std;
int main(){
	int x;
	cin >> x;
	if(x%5==0){
		cout << x/5;
	}
	else{
		cout << x/5+1;
	}
return 0;	
}*/
/*#include<iostream>
using namespace std;
int main(){
	int h,w;cin >> h >> w;
	for(int i=1;i<=w;i++){
		cout << "*";
	}
	cout << endl;
	for(int i=1;i<=h-2;i++){
		for(int j=1;j<=w;j++){
			if(j%2==1){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
	for(int i=1;i<=w;i++){
		cout << "*";
	}
return 0;	
}*/
/*#include<iostream>
using namespace std;
int main(){
	long long N,Q;cin >> N >> Q;
	bool p=1;
	for(long long i=2;i*i<=N+Q;i++){
		if((N+Q)%i==0){
			p=0;
			break;
		}
	}
	if(N-Q==1 && p==1){
		cout <<"Yes" <<endl ;
	}
	else{
		cout << "No" << endl;
		}
return 0;	
}*/
/*#include<iostream>//cach 2
using namespace std;
int main(){
	long long n,q;cin >> n >> q;
	if(n-q==1){
		for(int i=2;i*i<=n+q;i++){
			if((n+q)%i==0){
				cout << " No" << endl;
				break;
			}
			}
		cout << "Yes"<< endl;
	}
	else{
		cout << "No" << endl;
	}
return 0;	
}*/
/*#include<iostream>// thoi gian ngan nhat de ran 2 mat banh
using namespace std;
int main(){
	int n,k; cin >> n >> k;
	if(n<=k){
		cout << 10;
	}
	else if(2*n%k==0){
		cout << (2*n/k)*5;
	}
	else{
		cout << (2*n/k+1)*5;
	}
return 0;	
}*/
#include<iostream>// nha tu
using namespace std;
int main(){
	int n;cin >> n;
	int a[n+1][n+1];
	int k=1;
	for ( int u=1,v=n;u<=v;u+1,v--){
		for(int i=u;i<v;i++){
		    a[u][i]=k;
		    k++;
		}
	     for(int i=u;i<n-1;i++){
		  a[i][v]=k;
		  k++;
	    }	
	     for(int i=v;i>=u;i--){
		  a[n-u][i]=k; 
	 	  k++;
	    }
	    for(int i=n-u+1;i>=u;i--){
	    	a[i][u]=k;
	    	k++;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
return 0;	
}
