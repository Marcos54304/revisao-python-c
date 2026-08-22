#include <stdio.h>

int main() {
    int numero, quantidade = 0;

    for (int i = 0; i < 5; i++) {
        printf("Numero: ");
        scanf("%d", &numero);

        if (numero > 0) {
            quantidade += 1;
        }
    }
    printf("Positivos: %d", quantidade);

return 0;
}