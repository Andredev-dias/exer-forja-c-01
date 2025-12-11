#include <stdio.h>

int main()
{
    int num;

    for (int i = 1; i <= 5; i++){
        printf("Digite o %dº número: \n", i);
        scanf(" %d", &num);

        if (num % 2 == 0){
            printf("PAR\n");
        }
        else{
            printf("IMPAR \n");
        }
    }

    return 0;
}