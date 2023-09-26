#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, x;

    do{
        printf("Cadastre uma senha de 4 digitos:\n");
        scanf("%d", &n);

        if(n > 9999 || n < 1000){
        printf("senha invalida!\n");
        }

    }while(n > 9999 || n < 1000);

    if(n <= 9999 || n >= 1000){
    printf("senha cadastrada: %d\n", n);
    }

    scanf("%d", &x);

    while(x != n){
        printf("senha invalida!\n");
        scanf("%d", &x);
    }

    if(x == n){
        printf("senha valida!\n");
    }

    return 0;
}
