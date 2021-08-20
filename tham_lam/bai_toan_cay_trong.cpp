#include<iostream>
#include<algorithm>
using namespace std;
const int MAX=100;
int main(){
	int a[MAX];
	int n; cout<"Nhap n: "; cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int res=1,j=1;
	for(int i=n-1;i>=0;i--){
		a[i]+=j++;
		if(res<a[i]) res=a[i];
	}
	res+=1;
	cout<<res;
	return 0;
}
// test case n=4; a[0...3]=3,4,2,1;=>kq:6
