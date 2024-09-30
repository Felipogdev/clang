#include <stdio.h>

int myAge = 20;
float myHeight = 1.69;
char myChar = 'F';
char myName[] = "Felipog"; //Para armazenar mais de um caractere em uma variavel, precisa fazer um array de caracteres

int main (){
    printf("%d", myAge); // %d é para int
    printf("\n %.2fm", myHeight); // %f é para float
    printf("\n %c", myChar); // %c é para char
    printf("\n %s", myName); // %s é para array de char
    return 0;
}  