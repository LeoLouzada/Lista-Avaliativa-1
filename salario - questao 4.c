#include <stdio.h>
#include <stdlib.h>

int main(){

    char nivel;
    float sal, salTotal;

    scanf("%c", &nivel);
    scanf("%f", &sal);


    if(nivel == 'a'){
        salTotal = sal + (0.05 * sal);
    }else if(nivel == 'b'){
        salTotal = sal + (0.07 * sal);
    }else{
        salTotal = sal + (0.08 * sal);
    }

    printf("R$ %0.2f", salTotal);

    return 0;
}

