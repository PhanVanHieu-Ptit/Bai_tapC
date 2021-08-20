#include<iostream>
#include<string.h>
using namespace std;
#define MAX 50

int main()
{
    char a[MAX];
    char *p;
    
    cout << "Nhap chuoi a" << endl;
    cin.getline(a, MAX);
    
    p = a; a[0]=toupper(a[0]);
    while (strstr(p, " ") != NULL)
    {
        p = strstr(p, " ") + 1;
        p[0] = toupper(p[0]);
    }

    cout << a << endl;
        system("pause");

}
