#include <stdio.h>

#define my_sizeof(type)     (char*)(&type+1)-(char*)(&type) 

int main(int argc, char const *argv[])
{
    double a;
    printf("%d\n",my_sizeof(a));
    return 0;
}
