#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    int idade;

    printf("QUAL A IDADE: \n");
    scanf("%d", &idade);
    printf("DIGITE (M) PARA MASCULINO E (F) PARA FEMININO: \n");
    scanf(" %c", &sexo);

    if (sexo == 'M'){
        if (idade >= 16){
            printf("PODE COMPRAR INGRESSOS. \n");
        }
        else{
            printf("NÃO PODE COMPRAR INGRESSOS. \n");
        }
    }else{
        if (idade >= 18){
            printf("PODE COMPRAR INGRESSOS. \n");
        }
        else{
            printf("NÃO PODE COMPRAR INGRESSOS. \n");
        }
    }

    system("pause");
    return 0;
}
