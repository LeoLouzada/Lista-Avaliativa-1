#include <stdio.h>
#include <stdlib.h>

int main(){

    int ano;

    scanf("%d", &ano);

     if(ano > 2022){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }else if(ano % 2 != 0){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }else if(ano < 1896){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }else if(ano != 1916 && ano != 1940 && ano != 1944 && ((ano - 1896) %4 == 0)){
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
    }else if(ano >= 1930 && ano != 1942 && ano != 1946 && ((ano - 1930) % 4 == 0)){
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
    }else if(ano < 1930 && ((ano - 1930) % 4 == 0)){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }else if(ano == 1916 || ano == 1940 || ano == 1942 || ano == 1944 || ano == 1946){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }

    return 0;
}
