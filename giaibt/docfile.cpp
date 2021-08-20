#include<iostream>
#include<fstream>

using namespace std;

void docfile(double &x){
	
	fstream f("imput2.txt",ios::in);
	
	f>>x;
	
	f.close();
}
void ghifile(double &x){
	
	fstream f("output2.txt",ios::out);
	
	f<<x;
	
	f.close();
}
int main(){
	int n=0; double x=0;
	
	docfile(x);
	
	cout<<" x = "<<x<<endl;
	
	ghifile(x);
	
	
	return 0;
}
