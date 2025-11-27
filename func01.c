#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void hello();
void bye();

int main(){
    setlocale(LC_ALL, "portuguese");

    hello();
    bye();

    system("pause");
    return 0;
}

void hello(){
    printf("Hello");
}

void bye(){
    printf(" Bye");
}



