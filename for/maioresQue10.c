#include<stdio.h>

int main(){
    int num;

    for (int i = 1; i <= 5; i++){
        printf("Digite o %dº número: ", i);
        scanf(" %d", &num);

        if(num > 10){
            printf("Maior que 10 👍.\n");
        }else{
            printf("Menor que 10 🥱\n");
        }
    }
    return 0;
}
