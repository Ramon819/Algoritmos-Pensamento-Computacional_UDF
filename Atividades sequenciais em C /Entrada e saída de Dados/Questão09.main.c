#include <stdio.h>
#include<math.h>

int main() {
    float base, altura, perimetro, area;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);
    area = base * altura;

    printf("Resultados:\n");
    printf("a. Perímetro: %.2f\n", perimetro);
    printf("b. Área: %.2f\n", area);

    return 0;
}
