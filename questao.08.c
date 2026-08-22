#include <stdio.h>

int main() {
    int numero;
    
    printf("Numero: ");
    scanf("%d", &numero);

    while (numero >= 0) {
        printf("%d", numero);
        numero -= 1;

    }
return 0;
}