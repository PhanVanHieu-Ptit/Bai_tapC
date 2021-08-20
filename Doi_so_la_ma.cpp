/*#include<conio.h>

#include<iostream>
using namespace std;

int main()

{
int n,dv,ch,tr;

cout<<"Nhap so nguyen duong <1000 :\n"; cin>>n;

cout<<"So "<<n<<" doi sang so La ma la :\n";

tr=n/100;n=n%100; ch=n/10;dv=n%10;

switch (tr)

{case 1:cout<<"C";break;// C=100

case 2:cout<<"CC";break;// CC=200

case 3:cout<<"CCC";break;// CCC=300

case 4:cout<<"CD";break;// CD=400

case 5:cout<<"D";break;// D=500

case 6:cout<<"DC";break;// DC=600

case 7:cout<<"DCC";break;//DCC=700

case 8:cout<<"DCCC";break;//DCCC=800

case 9:cout<<"CM";// DM=900

}

switch (ch)

{case 1:cout<<"X";break;

case 2:cout<<"XX";break;

case 3:cout<<"XXX";break;

case 4:cout<<"XL";break;// XL=40

case 5:cout<<"L";break;// L=50

case 6:cout<<"LX";break;// LX=60

case 7:cout<<"LXX";break;// LXX=70

case 8:cout<<"LXXX";break;// LXXX=80

case 9:cout<<"XC";// XC=90

}

switch (dv)

{case 1:cout<<"I";break;

 case 2:cout<<"II";break;

 case 3:cout<<"III";break;

 case 4:cout<<"IV";break;

 case 5:cout<<"V";break;

 case 6:cout<<"VI";break;

 case 7:cout<<"VII";break;

 case 8:cout<<"VIII";break;

 case 9:cout<<"IX";

}

getch();

}*/

#include<conio.h>
#include<iostream>
using namespace std;
int main (){
	
	int n,don_vi,chuc,tram;
	
	cout << " Nhap so nguyen duong < 1000 : ";cin >>n;
	
	cout << " So " << n << " doi sang so La Ma la: \n" ;
	 
	tram=n/100; chuc=(n%100)/10 ; don_vi=n%10;
	
	switch(tram){
		case 1: cout << "C";break;
		
		case 2: cout << "CC";break;
		
		case 3: cout << "CCC";break;
		
		case 4: cout << " CD";break;
		
		case 5: cout << "D";break;
		
		case 6: cout << "DC";break;
		
		case 7: cout << "DCC";break;
		
		case 8: cout << "DCCC";break;
		
		case 9: cout << "CM";
	}
	switch(chuc){
		
		case 1: cout <<"X";break;
		
		case 2: cout <<"XX";break;
		
		case 3: cout <<"XXX";break;
		
		case 4: cout <<"XL";break;
		
		case 5: cout <<"L";break;
		
		case 6: cout <<"LX";break;
		
		case 7: cout <<"LXX";break;
		
		case 8: cout <<"LXXX";break;
		
		case 9: cout <<"XC";
	}
	switch(don_vi){
		
		case 1: cout <<"I";break;
		
		case 2: cout <<"II";break;
		
		case 3: cout <<"III";break;
		
		case 4: cout <<"IV";break;
		
		case 5: cout <<"V";break;
		
		case 6: cout <<"VI";break;
		
		case 7: cout <<"VII";break;
		
		case 8: cout <<"VIII";break;
		
		case 9: cout <<"IX";
	}
	getch();
}
