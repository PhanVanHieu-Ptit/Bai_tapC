#include <iostream>
#include<math.h>

using namespace std;

struct diem{
	
	float x;
	double y;
};
float khoangcach(diem a, diem b);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	diem a;
	
	a.x=4;
	a.y=2;
	
	diem b;
	
	b.x=0;
	b.y=4;
	
	cout<<"Khang cach AB: "<<khoangcach(a,b);
	return 0;
}
float khoangcach(diem a, diem b){
	
	return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
