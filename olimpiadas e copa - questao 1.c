#include <stdio.h>
#include <stdlib.h>

int main(){

    int ano;

    scanf("%d", &ano);

    if(ano % 2 != 0){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.", ano);
    }else if(ano < 1896){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.", ano);
    }else if((ano - 1930) % 4 == 0){
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.", ano);
    }else if((ano - 1896) % 4 == 0){
        printf("Os jogos Olimpicos de Verao ocorreram no ano de %d.", ano);
    }else if(ano < 1896)

    return 0;
}
