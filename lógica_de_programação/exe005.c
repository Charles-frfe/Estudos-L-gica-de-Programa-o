#include <stdio.h>

int main() {

    int idade;

    printf("Digite sua Idade:");
    scanf("%d", &idade);

    if (idade < 12){
        printf("Categoria: Infantil\n");
    } else if (idade >= 12 && idade <= 17){
        printf("Categoria: Juvenil\n");
    } else {
        printf("Categoria: Adulto\n");
    }
}