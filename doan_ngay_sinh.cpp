#include<iostream>

#include<stdio.h>

#include<conio.h>

using namespace std;

int main(){
	char a,b,c,d,e;
	
	int ns=0;
	cout<<"1 3 5 7\n9 11 13 15\n17 19 21 23\n25 27 29 31";
	
	cout<<"\nNgay sinh cua ban co trong bang nay khong(c/k): ";cin>>a;
	
	if(a=='c'|| a=='C'){
		ns+=1;
	}

	cout<<"\n2 3 6 7\n10 11 14 15\n18 19 22 23\n26 27 30 31";
	
	cout<<"\nNgay sinh cua ban co trong bang nay khong(c/k): ";
	
	cin>>b;
	
	if(b=='c'||b=='C'){
		ns+=2;
	}
	
	cout<<"\n4 5 6 7\n12 13 14 15\n20 21 22 23\n28 29 30 31";
	
	cout<<"\nNgay sinh cua ban co trong bang nay khong(c/k): ";
	
	cin>>c;
	
	if(c=='c'||c=='C'){
		ns+=4;
	}
	
	cout<<"\n8 9 10 11\n12 13 14 15\n24 25 26 27\n28 29 30 31";
	
	cout<<"\nNgay sinh cua ban co trong bang nay khong(c/k): ";
	
	cin>>d;
	
	if(d=='c'||d=='C'){
		
		ns+=8;
	}
	
	cout<<"\n16 17 18 19\n20 21 22 23\n24 25 26 27\n28 29 30 31";
	
	cout<<"\nNgay sinh cua ban co trong bang nay khong(c/k): ";
	
	cin>>e;
	
	if(e=='c'|| e=='C'){
		
		ns+=16;
	}
	
	cout<<"\nNgay sinh cua ban la: "<<ns;
	
	return 0;
}
