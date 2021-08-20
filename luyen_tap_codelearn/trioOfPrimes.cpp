#include<iostream>
#include<cmath>
using namespace std;
bool nguyen_to(int n){
    if(n<=1) return 0;
    else if(n<=3) return 1;
    else{
        if(n%2==0 || n%3==0 ) return 0;
        for(int i=5;i<=sqrt(n);i+=6){
            if(n%i==0 || n%(i+2)==0) return 0;
        }
    }
    return 1;
}
bool nguyen_to2(int n){
    if(n<2) return 0;
    else if(n>2){
        if(n%2==0) return 0;
        for(int i=3;i<=sqrt(n);i+=2){
            if(n%i==0) return 0;
        }
    }
    return 1;
}
int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	for(int i=2;i<=n;i++){
		if(nguyen_to(i)) cout<<i<<" ";
	}
	cout<<"\n";
	for(int i=2;i<=n;i++){
		if(nguyen_to2(i)) cout<<i<<" ";
	}
	return 0;
}

