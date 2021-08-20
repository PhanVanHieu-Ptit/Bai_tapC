#include<iostream>

using namespace std;

struct phanso{
	
	int tu;
	
	int mau;
};
phanso *cong(phanso ps1, phanso ps2){
	
	phanso *ps3=new phanso;
	
	ps3->tu=ps1.tu*ps2.mau+ps2.tu*ps1.mau;
	ps3->mau=ps1.mau*ps2.mau;
	
	return ps3;
}
int main(){
	
	phanso ps1;
	
	ps1.tu=3;
	
	ps1.mau=5;
	
	phanso ps2;
	
	ps2.tu=7;
	
	ps2.mau=8;
	
	phanso *ps3=cong(ps1,ps2);
	
	cout<<ps3->tu<<"/"<<ps3->mau<<endl;
	
	return 0;
}
