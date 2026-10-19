#include <stdio.h>

int main () {

    float total_vendas;
    float comissao;

    printf("Digite o total de vendas: \n");
    scanf("%f", &total_vendas);

    comissao = total_vendas * 0.5;
    
    printf("Sua comissão essa semana foi de: R$: %.2f\n", comissao);

    return 0;
}