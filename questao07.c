#include <stdio.h>

int main() {
    int numero;

    printf("Numero: ");
    scanf("%d", &numero);

    if ((numero >= 10) && (numero <= 20)) {
        printf("Dentro do intervalo");
    } else {
        printf("Fora do intervalo");
    }

    return 0;
}