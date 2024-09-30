#include <stdio.h>

int findMax(int x, int y) {
    return (x > y) ? x : y; // Aq é o Ternary Operator, ele retorna x caso true, e y caso falso. Serve pra encurtar a condições de uma função
}

int main () {

    int max = findMax(3,4);

    printf("%d", max);

    return 0;
}