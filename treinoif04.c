#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("INFORME UM NÚMERO PARA SABER SE ELE É PAR OU ÍMPAR: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("PAR ");
    }else{
        printf("ÍMPAR ");
    }
    
    system("pause");
    return 0;
}