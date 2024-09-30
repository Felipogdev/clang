#include <stdio.h>

int main (){
    short int a = 32760;
    short int b = 1000;
    short int c = a+b;
    printf("%d", c);

    short int d = 32760;
    short int e = 1000;
    unsigned short int f = d+e;
    printf("\n%d", f); 
    return 0;
}