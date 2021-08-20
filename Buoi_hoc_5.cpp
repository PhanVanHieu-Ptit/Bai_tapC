/*#include<iostream>//dao so
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n%10==0){
		n/=10;
	}
	while(n%10!=0){
		cout << n%10;
		n/=10;
	}
return 0;	
}*/
/*#include<iostream>//Factional ( giai thua)
using namespace std;
int main(){
	int n;
	cin >> n;
	long long gt=1;
	for( int i=1;i<=n;i++){
		gt=gt*i;
	}
	cout << gt;
return 0;	
}*/
/*#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	bool ans=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			ans=0;
			break;
		}
	}
	cout << ans;
return 0;	
}*/
/*#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for( int i=n;;i++){
		if(sodao(i)==i){
			cout << i;
			return 0;
		}
	}
return 0;	
}*/
/*#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b;
	cin >>a >> b;
	c=abs(a-b);
	int count=0;
	while(c>0){
		if(c%10==0);
		c/=0;
	}
	cout << count;
return 0;	
}*/
//khoi tao mang hai chieu
/*#include<iostream>
using namespace std;
int main(){
	int a[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin >> a[i][j];
			cout << "Gia tri cua a["<< i << "][" << j << "] la :";
			cout << a[i][j] << endl;
		}
	}
	cout << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << a[i][j] << " ";
		}
	}
	cout << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			cout << a[i][j] << " ";
		    cout << endl;
	}
return 0;
}*/
#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int a[3][3];
	int sumchinh=0;
	int sumphu =0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin >> a[i][j];
			if(i==j){
				sumchinh=sumchinh+a[i][j];
			}
			if(i+j==2){
				sumphu=sumphu+a[i][j];
			}
			}
		}
	
	cout << sumchinh << endl;
	cout << sumphu << endl;
	cout << sumchinh*sumphu;
return 0;	
}
