/*#include<iostream>
using namespace std;

int main(void){
int n, a[10000];
cin >> n;
for (int i = 0; i < n; i++){
cin>>a[i];
}
int i = n-1;
while (a[i]==1 && i >= 0){
i--;
}
if (i < 0) cout<< -1;
else{
a[i] = 1;
for (int j = i + 1; j < n; j++){
a[j] = 0;
}
for (int i = 0; i < n; i++){
cout << a[i];
}
}


}*/
 #include<iostream>
using namespace std;
int main()
{
int n;
string a;
cin >> n;
cin>>a;
int i = n-1;
while (a[i]=='1' && i >= 0){
i--;
}
if (i < 0)
cout<< -1;
else
{
a[i] = '1';
for (int j = i + 1; j < n; j++)
{
a[j] = '0';
}
cout << a;
}
}
