#include <stdio.h>
#include <math.h>
#include <ctype.h>

char unidMedidaP;
char unidMedidaS;
float temp;

int main(){
    printf("Unidade de medida da temperatura que deseja converter\n");
    scanf(" %c", &unidMedidaP);
    unidMedidaP = toupper(unidMedidaP);
    switch (unidMedidaP) {
        case 'C':
            printf("Para qual medida voce gostaria de converter?\n");
            scanf(" %c", &unidMedidaS);
            unidMedidaS = toupper(unidMedidaS);
            //char unidMedidasS ()
                if (unidMedidaS == 'K'){
                    printf("Qual a temperatura?\n");
                    scanf(" %f", &temp);
                    temp = temp + 273.15;
                    printf(" %.2fK",temp);
                }

                else if (unidMedidaS == 'F'){
                    printf("Qual a temperatura?\n");
                    scanf(" %f", &temp);
                    temp = (temp*1.8)+32;
                    printf(" %.2fF",temp);
                }
                break;
        case 'K':
            printf("Para qual medida voce gostaria de converter?\n");
            scanf(" %c", &unidMedidaS);
            unidMedidaP = toupper(unidMedidaP);
                if (unidMedidaS == 'C'){
                    printf("Qual a temperatura?\n");
                    scanf(" %f", &temp);
                    temp = temp - 273.15;
                    printf(" %.2fC",temp);
                }

                else if (unidMedidaS == 'F'){
                    printf("Qual a temperatura?\n");
                    scanf(" %f", &temp);
                    temp = ((temp-273.15)*1.8)+32;
                    printf(" %.2fF",temp);
                }   
                break;
        case 'F':
            printf("Para qual medida voce gostaria de converter?\n");
            scanf(" %c", &unidMedidaS);
            unidMedidaP = toupper(unidMedidaP);
                if (unidMedidaS == 'C'){
                    printf("Qual a temperatura?\n");
                    scanf(" %f", &temp);
                    temp = temp - 273.15;
                    printf(" %.2fC",temp);
                }

                else if (unidMedidaS == 'K'){
                    printf("Qual a temperatura?\n");
                    scanf(" %f", &temp);
                    temp = ((temp-273.15)*1.8)+32;
                    printf(" %.2fK",temp);
            break;
            }
    return 0;
}
}