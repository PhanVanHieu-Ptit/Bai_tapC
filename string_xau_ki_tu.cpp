/*#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	cout << s << endl;
	cout << s.find('i') << endl;
	cout << s.length();
return 0;	
}*/
/*#include<iostream>// kiem tra doi xung
#include<cstring>
using namespace std;
int main (){
	string s;
	string a="";
	getline(cin,s);
	for(int i=s.length()-1;i>=0;i--){
		a += s[i];
	}
	if(a==s){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}
	
return 0;	
}*/
/*#include<iostream>// dao nguoc 
#include<cstring>
using namespace std;
int main(){
	string s,a="";
	getline(cin,s);
	for(int i=s.length()-1;i>=0;i--){
		a += s[i];
	}
	cout << a;
return 0;	
}*/
/*#include<iostream>
#include<cstring>
using namespace std;
int main (){
	string s,a="";
	getline(cin,s);
	int pos;
	for(pos=0;pos<=s.length()-1;pos++){
		if(s[pos]>='a' and s[pos]<='z'){
		 //s[pos] -= 32; //in hoa
		 break;
		}
	}
	for(int i=pos;i<s.length();i++){
	//	s[i] -= 32;//in hoa toan bo
		s[0] -= 32;// in chu cai dau tien 
		a += s[i];
	}
	cout << a << endl;
	
return 0;	
}*/
#include<iostream>
#include<cstring>
using namespace std;
int main (){
	string s;
	getline(cin,s);
	int pos;
	for( pos=0;pos <s.length();pos++){
		if(s[pos]>='A' and s[pos]<='Z'){
			break;
		}
	}
	for( int i=0;i<s.length();i++){
		s[i] += 32;
	    cout << s[i];
	}
	
return 0;	
}
