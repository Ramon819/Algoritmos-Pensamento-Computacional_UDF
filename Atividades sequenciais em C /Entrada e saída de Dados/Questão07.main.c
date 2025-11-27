#include <stdio.h>

int main() {
    float n1, n2, n3, n4, mediaPonderada;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    printf("Digite o terceiro número: ");
    scanf("%f", &n3);

    printf("Digite o quarto número: ");
    scanf("%f", &n4);

    mediaPonderada = (n1*1 + n2*2 + n3*3 + n4*4) / (1 + 2 + 3 + 4);

    printf("A média ponderada é: %.2f\n", mediaPonderada);

    return 0;
}
