/*#include<iostream>
using namespace std;
int main(){
	int n;
	cout << " nhap n ";cin >> n;
	int count=0;
	while(n!=1){
		n=n/2;
		count ++;
	}
	cout << count;
return 0;	
}
#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n%10!=0){
		while(n!=0){
			cout << n%10;
			n=n/10;
		}
	}
return 0;	
}
#include<iostream>
using namespace std;
int main(){
	int n;
	do{
		cin >> n;
	}
	while(n!=123456);
	cout << " congratulate";
return 0;	
}
#include<iostream>
using namespace std;
int main (){
	int a,b;
	do{
	cout << " nhap a ";cin >> a;
	cout << " nhap b ";cin >> b;
}
     while(a==0);
     cout << " nghiem cua phuong trinh "<< -b*1.0/a;
return 0;	
}
#include<iostream>
using namespace std;
int main (){
	int n; cin >> n;
	
		while(n%10==0){
			n/=10;
		}
		while(n%10!=0){
		
		cout << n%10;
		n/=10;
	}
return 0;	
}*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;cout << "nhap n "; cin >> n;
	 int a;
	 int x=0;
         for(int i=0;i<=n;i++){
            cout <<" nhap so muon nhap " << a ;cin >> a;		 
	
          while(a>=10){
          	a/=10;
          	x++;
		  }
		  }
	   
		 int b=x;
		 int sum=0;
     	for(int i=0;i<=n;i++){
     	
     		
     		
     		for(int j=b-1;j>=0;i--){
     			sum=((n%10),pow(10,b));
     			a/=10;
     			
			 
		 
		 if(sum==a){
		 	cout << sum << " la so doi xung ";
		 }
	}
	}
	
	 
return 0;	
}
