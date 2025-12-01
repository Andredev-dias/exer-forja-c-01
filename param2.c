#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int p_n1, int p_n2);

int main(){

    setlocale(LC_ALL, "portuguese");

    int num1, num2, res;

    printf("SOMA\n");
    printf("________________________\n");

    printf("Informe o primeiro número:");
    scanf(" %d", &num1);

    printf("Informe o segundo número:");
    scanf(" %d", &num2);

    res = soma(num1, num2);
    printf("O resultado da soma entre %d + %d = %d \n", num1, num2, res);

    system("pause");
    return 0;
}

int soma(int p_n1, int p_n2){
    int valor;

    valor = p_n1 + p_n2;
    return valor;
}