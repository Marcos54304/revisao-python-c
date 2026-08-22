#include <stdio.h>

int main () {
    float media;

    printf("Media final: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf("Aprovado");
    }
    else if (media >= 4) {
        printf("Final");
    } 
    else {
        printf("Reprovado");
    }

return 0;

}