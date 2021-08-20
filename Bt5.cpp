#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main (){
	float a,b,c;
	cout << " nhap vao 3 canh cua tam giac :";
	cin >> a >> b >> c;
	float p= ( a+b+c)/2;
	cout << fixed << setprecision(2);
	cout << " dien tich tam giac la :"<< sqrt(p*(p-a)*(p-b)*(p-c)) << endl;
	float x;
	cout << " nhap vao mot so bat ky: ";
	cin >> x;
	//cout << " can bac ba cua so vua nhap la :" << cbrt(x);
    cout << " can bac ba cua so vua nhap la : " << pow(x,1.0/3);
    cout << " binh phuong cua so so cua vua nhap la :" << pow(x,2);
return 0;	
	
}
