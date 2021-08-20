#include <iostream>
#include <string>
#include <conio.h>
#include<Windows.h>
using namespace std;

void cangiua(string x)
{
    int i,n;
    //string a = " ";
    n = (80-x.size())/2;
    for(i=1;i<=n;i++) cout<<" ";
    //x.insert(0,a);
    //cout<<x;
    return;
}
void catdan(string &x)
{
    string a;
    a = x.substr(0,1);
    x.erase(0,1);
    cout<<x<<a;
    x.insert(x.size(),a);
    return;
}
int main()
{
    string s;
    int kt = 0;
    cout<<"Nhap chuoi: ";
    getline(cin,s);
    while (kt!=27)
    {
        system("cls");
        cangiua(s);
        catdan(s);
        if(kbhit()) kt = getch();
        Sleep(100);
    }
    return 0;
} 

