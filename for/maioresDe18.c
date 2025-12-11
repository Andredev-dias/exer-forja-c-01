#include<stdio.h>

int main(){
    int idade, maiores = 0;

    for (int i = 1; i <= 7; i++)
    {
        printf("Digite a %dª idade: \n", i);
        scanf(" %d", &idade);

        if(idade >= 18){
            maiores += idade;
        }
    }

    printf("Total de idades maiores que 18 = %d \n", maiores);

    return 0;
}
