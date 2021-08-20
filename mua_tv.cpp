/*#include<iostream>

#include<math.h>

using namespace std;

int main(){
	
	int n; cin >>n;
	
	for(int i=sqrt(n);i>0;i--){
		
		if(n%i==0){
			
			cout<<i<<" "<<n/i<<"\n";
			
			break;	
		} 
	}
	return 0;
}*/
#include <iostream>
#include <string>

using namespace std;

bool prc(int a) {
	for (int y = 1; y < a; y++) {
		int x = a / (y + 1) - y / 2;
		if ((y + 1)*(x + (float)y / 2) == a) {
			cout << a << " = ";
			for (int j = x; j < x + y; j++) {
				cout << j << " + ";
			}
			cout << x + y << endl;
			return 1;
		}
	}
	return 0;
}

int main() {
	int N;
	cin >> N;
	while (N--) {
		int a;
		cin >> a;
		if (!prc(a))
			cout << "IMPOSSIBLE" << endl;
	}

	return 0;
}

