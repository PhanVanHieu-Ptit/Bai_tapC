#include<iostream>
using namespace std;
int main (){
	for(int i=0; i<=20; i++){ 
	    for( int j=21; j<=40; j++){
		if(i,j%2==0){
			cout << i << ","<< j << " la so chan"<< endl ;
			if(i,j%3==0){
				cout << i << ","<< j<< " la so chia het cho 3"<<endl;
			}
			else{
				if(i,j%5==0){
					cout << i << ","<< j<< " la so chia het cho 5"<< endl;
				}
			}
		}
		else {
			cout << i<< "," << j << " la so le"<< endl;}
		
	}}
	return 0;
}

