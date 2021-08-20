/*l?i gi?i bài A*/
#include <iostream>
using namespace std;
int main(){
	int h, w;
	cin >> h >> w;
	for(int i=1; i<=w; i++){
		cout << "*";
	}
	cout << endl;
	for(int i=1; i<=h-2; i++){
		for(int j=1; j<=w; j++){
			if(j%2==0) cout <<" ";
			else cout << "*";
		}
		cout << endl;
	}
	for(int i=1; i<=w; i++){
		cout << "*";
	}
}
 
/*l?i gi?i bài G*/
#include <iostream>
using namespace std;
int main(){
	long long n, q;
	cin >> n >> q;
	while(q--){
		char x; 
		cin >> x;
		if(x=='+'){
			long long y;
			cin >> y;
			n+=y;
		}
		else if(x=='-'){
			long long y;
			cin >> y;
			n-=y;
		}
		else if(x=='*'){
			long long y;
			cin >> y;
			n*=y;
		}
		else if(x=='/'){
			long long y;
			cin >> y;
			n/=y;
		}
		else cout << n << "\n";
	}
}
/*l?i gi?i bài H*/
#include <iostream>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	if(n<=k) cout << 10;
	else cout << (n*2+k-1)/k*5;
}
 
/*l?i gi?i bài I*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+1][n+1];
	for(int u=1, v=n, k=1; u<=v; u++, v--){
		//duyet tu phan tu a[u][u] den a[u][v-1]
		for(int i=u; i<v; i++){
			a[u][i]=k++;
		}
		//duyet tu phan tu a[u][v] edn a[v-1][v]
		for(int i=u; i<v; i++){
			a[i][v]=k++;
		}
		//duyet tu phan tu a[v][v] den a[v][u+1]
		for(int i=v; i>u; i--){
			a[v][i]=k++;
		}
		//duyet tu phan tu a[v][u] den a[u+1][u]
		for(int i=v; i>u; i--){
			a[i][u]=k++;
		}
	}
	//voi n le thi cac vong for ben trong khong chay, hay a[(n+1)/2][(n+1)/2] chua co gia tri.
	if(n%2==1) a[(n+1)/2][(n+1)/2]=n*n; 
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
/*l?i gi?i bài J*/
#include <iostream>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t>0){
		long long n, q;
		cin >> n >> q;
		long long x=n+q;
		bool isPrime=1;
		if(x==1){
			isPrime=0;
		}
		for(long long i=2; i*i<=x; i++){
			if(x%i==0){
				isPrime=0;
			}
		}
		if(n-q==1 && isPrime==1){
			cout << "YES\n";
		} 
		else{
			cout << "NO\n";
		} 
		t--;
	}
}
 
/*l?i gi?i bài K*/
#include <iostream>
using namespace std;
int main(){
	int d;
	cin >> d;
	cout << (d+4)/5;
}

