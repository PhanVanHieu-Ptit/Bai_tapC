#include <stdio.h>
#include <string.h>
 
int main()
{
    char name[30] = "Nguyen Van Hieu";
 
    printf("Truoc khi dao nguoc : %s\n", name);
 
    printf("Sau khi dao nguoc   : %s", strrev(name));
 
    return 0;
}
 
