#include<iostream>
using namespace std;
bool kt(int a,int k){
    if(a<10){
        if(a==k) return 1;
    }
    while(a>0){
        int b=a%10;
        if(b==k) return 1;
        a/=10;
    }
    return 0;
}
int main(){
	int m,n,k;
	cout<<"Nhap m,n,k:"; cin>>m>>n>>k;
	for(int i=m;i<=n;i++){
		if(kt(i,k)) cout<<i<<" ";
 	}
 	return 0;
}
