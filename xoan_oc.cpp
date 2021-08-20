#include<iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n+1][n+1];
	for(int u=1,v=n,k=1;u<=v;u++,v--){
		for(int i=u;i<v;i++)
		 a[u][i]=k++;
		for(int i=u;i<v;i++)
		a[i][v]=k++;
		for(int i=v;i>u;i--)
		 a[v][i]=k++;
		for(int i=v;i>u;i--)
		 a[i][u]=k++; }
	if(n%2==1)
	a[(n+1/2)][(n+1)/2]=n*n;
	for(int i=1;i<=n;i++){
	 for(int j=1;j<=n;j++){
	 	cout <<a[i][j]<<' ';
	 }
	 cout <<endl;
     }
	
}
/*for(int u=1, v=n, k=1; u<=v; u++, v--){
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
*/
