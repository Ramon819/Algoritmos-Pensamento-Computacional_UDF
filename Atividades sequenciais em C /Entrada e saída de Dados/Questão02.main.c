#include <stdio.h>

int main() {
    float N1, N2, N3, media;

    printf("Digite o primeiro número: ");
    scanf("%f", &N1);

    printf("Digite o segundo número: ");
    scanf("%f", &N2);

    printf("Digite o terceiro número: ");
    scanf("%f", &N3);

    media = (N1 + N2 + N3) / 3;

    printf("A média aritmética é: %.2f\n", media);

    return 0;
}
