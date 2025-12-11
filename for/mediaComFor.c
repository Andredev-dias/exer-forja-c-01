#include<stdio.h>

int main(){
    float nota, soma = 0;

    printf("____________________ \n\n");
    printf("MÉDIA DE 6 NOTAS\n");
    printf("____________________ \n");

    for(int i = 1; i <= 6; i++){
        printf("Digite a nota %d: ", i);
        scanf(" %f", &nota);
        soma += nota;
    }
    
    printf("___________________ \n\n");
    printf("Média = %.2f \n", soma / 6);
    printf("___________________ \n");

    return 0;
}