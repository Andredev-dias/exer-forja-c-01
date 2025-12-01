#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    char nome[50];

    printf("Escreva seu nome:");
    fgets(nome, 50, stdin);

    printf("Seu nome é %s", nome);



    system("pause");
    return 0;
}