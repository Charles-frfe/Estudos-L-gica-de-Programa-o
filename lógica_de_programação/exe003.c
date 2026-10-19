#include <stdio.h>

int main(){
    float valorcompra;
    float  frete = 20.0;
    float valorTotal;

    printf("Digite o valor da compra: \n");
    scanf("%f", &valorcompra);

    if (valorcompra >= 200.0){
        printf("Frete Gratis!");
        printf("Valor total a pagar: R$ %.2f\n", valorcompra);
    }else{
        valorTotal = valorcompra + frete;
        printf("Valor do frete: R$ %.2f\n", frete);
        printf("Valor total a pagar: R$ %.2F", valorTotal);
    }
    
    return 0;
}