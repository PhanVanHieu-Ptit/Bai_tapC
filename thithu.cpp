/*#include<iostream>
using namespace std;
int main(){
	int n;cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int x=0;
	int y=0;
	for(int i=0;i<n;i++){
		if(a[i]%4==0){
			x++;
		}
		if(a[i]%6==0){
			y++;
		}
	}
	for(int i=min(x,y);;i--){
		if(x%i==0 && y%i==0)
		{
			cout << i << " ";
			break;  
		}
	}
	for( long long i=max(x,y);;i++){
		if(i%x==0 && i%y==0){
			cout << i;
			break;
		}
	}
return 0;	
}*/
/*#include<iostream>
#include<string>
using namespace std;
int main (){
	string a;
	cin >>a;
	if(a[0]>='a' && a[0]<='z'){
			a[0]-= 32;
		}
	for(int i=1;i < a.length();i++){
		
		if(a[i]>='A' && a[i]<='Z'){
			a[i] += 32;
		}
	}
	a += '?';
	cout <<a;
return 0;	
}*/
#include<iostream>
using namespace std;
int main(){
	int a,b,x,y;
	cin >> a >> b >> x >> y;
	int k=0;
	for (int i=1;i < a;i++){
		if(i*x<=a && i*y<=b){
			k++;
		}
	}
	cout << k ;
return 0;	
}
