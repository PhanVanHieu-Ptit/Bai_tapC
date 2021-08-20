#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
const int MAX=100009;
int s[MAX],e[MAX];
int n;
void swap(int i, int j){
	int tmp=e[i];
	e[i]=e[j];
	e[j]=tmp;
	
	tmp=s[i];
	s[i]=s[j];
	s[j]=tmp;
}
void qsort(int a[], int start, int end){
	if(start>=end) return;
	int index=rand()%(start-end)+start;
	int pilot=a[index];
	int k=start-1;
	swap(index,end);
	for(int i=start;i<end;i++){
		if(a[i]<pilot){
			k++;
			swap(i,k);
		}
	}
	k++;
	swap(k,end);
	qsort(a,start,k-1);
	qsort(a,k+1,end);
}
void proc(){
	int res=1;
	int end=e[0];
	for(int i=0;i<n;i++){
		if(e[i]==end) continue;
		if(s[i]>=end) {
			res++;
			e[i]=end;
		}	
	}
	cout<<res;
}
int main(){
	cout<<"Nhap n: "; cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		cin>>e[i];
	}
	qsort(e,0,n-1);
	proc();
	return 0;
}// n=5, {8,10},{9,11},{10,12},{14,15},{17,18}  5 8 10 9 11 10 12 14 15 17 18 =>kq:4
