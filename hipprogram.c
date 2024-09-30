#include <stdio.h>
#include <math.h>

int catA;
int catB;
int hipC;

int main (){
    printf("Qual o valor do primeiro cateto?");
    scanf("%d", &catA);
    printf("%d", catA);
    printf("Qual o valor do segundo cateto?");
    scanf("%d", &catB);
    hipC = sqrt(catA*catA + catB * catB);
    printf("Seu triangulo tem como a hipotenusa %d", hipC);
    return 0;
}