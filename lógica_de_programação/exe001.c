#include <stdio.h>

int main () {
    int anonascimento;
    int anoatual;
    int idadeatual;
    int idadefutura;

    printf("Digite o ano de seu Nascimento: \n");
    scanf("%d", &anonascimento);
    printf("Digite o ano atual: \n");
    scanf("%d", &anoatual);

    idadeatual = anoatual - anonascimento;
    idadefutura = 2035 - anonascimento;

    printf("Sua Idade é: %danos\n", idadeatual);
        printf("Sua idade em 2035 será: %danos\n", idadefutura);

        return 0;
}