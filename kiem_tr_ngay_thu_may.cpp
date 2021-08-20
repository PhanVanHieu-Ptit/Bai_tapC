#include<iostream>// Co loi thieu ngay

using namespace std;

int main(){
	
	int ng,th,nm; cin>>ng>>th>>nm;
	
	int D,k,ngay;
	
	D=nm-1; k=D*365;
	
	for(int i=1; i<=nm; i++){
		
		if((i%100!=0 && i%4==0) || i%400==0 ) k+=1;
	}

    if(th==4 || th==6 || th==9 || th==11) ngay=30;
    
    else if(th==2){
    	
    	if((nm%100!=0 && nm%4==0) || nm%400==0 ) ngay=29;
    	
    	else ngay=28;
	}
	else ngay=31;
	
	for(int i=1; i<=th;i++){
	 
	  for(int j=1;j<=ngay;j++){
	  
	  k+=1;
		
		if(i==th && j==ng) break;
		
	  }	
	}
	
	k=k%7;
	
	switch(k){
		
		case 0: cout<<"Chu Nhat"<<" "; break;
		
		case 1: cout<<"Thu Hai"<<" "; break;
		
		case 2: cout<<"Thu Ba"<<" "; break;
		
		case 3: cout<<"Thu Tu"<<" "; break;
		
		case 4: cout<<"Thu Nam"<<" "; break;
		
		case 5: cout<<"Thu Sau"<<" "; break;
		
		case 6: cout<<"Thu Bay"<<" ";	
	}
	return 0;
}

