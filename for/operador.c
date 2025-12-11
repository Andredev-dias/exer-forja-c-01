#include<stdio.h>

int main(){
    int op;
    float num;

    for (int i = 1; i <= 5; i++)
    {
        printf("Digite um numero: ");
        scanf(" %f", &num);

         printf("Escolha a operação. \n ");
         printf("1 - DOBRA\n 2 - TRIPLICA\n 3 - METADE \n");
         scanf(" %d", &op);

         switch (op)
         {
            case 1:
                printf("Resultado = %.2f\n", num * 2);
                break;
            case 2:
                printf("Resultado = %.2f\n", num * 3);
                break;
            case 3:
                printf("Resultado = %.2f\n", num / 2);
                break;
         default:
                printf("Operador inválido!!! \n");
         }
    }
    return 0;
}