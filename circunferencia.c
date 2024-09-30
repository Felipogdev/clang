#include <stdio.h>
#include <math.h>

const float PI = 3.14159;
float circRaio;
float circArea;
float circPerim;
int main (){
    printf("\nQual o raio da circunferencia?");
    scanf("%f", &circRaio);
    circArea = (PI * circRaio * circRaio);
    circPerim = (2* PI * circRaio);
    printf("A area da circunferencia e %f e perimetro %f", circArea, circPerim);
    return 0;
}