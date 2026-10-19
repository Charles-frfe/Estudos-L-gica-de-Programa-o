#include <stdio.h>

int main(){

    float valorcompra;
    float desconto;
    float valorTotal;

    printf("Digite o valor da  compra: ");
    scanf("%f", &valorcompra);

    if (valorcompra < 100.00){
        printf("Sem Desconto.\n");
        printf("Valor total a pagar: R$ %.2f\n", valorcompra);
    }else if (valorcompra >= 100.00 && valorcompra <= 500.00){
        desconto = valorcompra * 0.10;
        printf("Você ganhou 10%% de desconto (R$ %.2f)\n", desconto);
        printf("Valor total a pagar: R$%.2f\n", valorcompra - desconto);
    } else {
        desconto = valorcompra * 0.20;
        printf("Voce ganhou 20%% de desconto (R$ %.2f)\n", desconto);
        printf("Valor total a pagar: R$%.2f\n", valorcompra - desconto);
    }

    return 0;
}