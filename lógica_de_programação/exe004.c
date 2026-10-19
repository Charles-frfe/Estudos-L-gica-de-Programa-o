#include <stdio.h>

int main (){

    int velocidade;

    printf("Velocidade do veiculo: ");
    scanf("%d", &velocidade);

    if(velocidade <=80){
        printf("Velocidade Permitida!, Boa viagem.");
    }else{
        printf("Multado! Voce ultatrapassou o limite de velocidade");
    }

    return 0;
}