/*#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;
 
int main(){
    // Chuyen kieu string ve int
    string s = "12345";
    int l1 = s.length();
    int num1 = 0;
    for(int i = l1 - 1; i >= 0; --i){
        num1 += (int)(s[i] - '0') * pow(10, l1-i-1);
    }
    cout << "num1 = " << num1 << '\n';
    
    // Chuyen kieu char*(char[]) ve int
    char *ch = "135";
    int l2 = strlen(ch);
    int num2 = 0;
    for(int i = l2 - 1; i >= 0; --i){
        num2 += (int)(ch[i] - '0') * pow(10, l2-i-1);
    }
    cout << "num2 = " << num2 << '\n';
}*/

/*
 
#include <iostream>
#include <stdlib.h>
using namespace std;
 
int main(){
    const char *str1 = "42"; 
    const char *str2 = "3.14159"; 
    const char *str3 = "31337 nguyenvanhieu.vn"; 
    string s = "12345";
     
    int num1 = atoi(str1); 
    int num2 = atoi(str2); 
    int num3 = atoi(str3); 
    int num4 = atoi(s.c_str()); // N?u là string, convert v? char array s? d?ng .c_str()
    cout << "atoi(\"" << str1  
              << "\") is " << num1 << '\n'; 
    cout << "atoi(\"" << str2  
              << "\") is " << num2 << '\n'; 
    cout << "atoi(\"" << str3  
              << "\") is " << num3 << '\n'; 
    cout << "atoi(\"" << s
              << "\") is " << num4 << '\n'; 
}*/

