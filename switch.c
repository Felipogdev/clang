#include <stdio.h>

char nota;

int main(){
    printf("QUal sua nota na etec?");
    scanf("%c", &nota);
    
    switch (nota){
        case 'I':
            printf("Insatisfatório");
            break;
        case 'R':
            printf("Regular");
            break;
        case 'B':
            printf("Bom");
            break;
        default:
            printf("Kita da Etec logo.");
    }
    return 0;
}