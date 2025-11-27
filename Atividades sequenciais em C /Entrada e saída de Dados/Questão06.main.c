#include <stdio.h>

int main() {
    int dividendo, divisor, quociente, resto;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    printf("\nResultados:\n");
    printf("a. Dividendo: %d\n", dividendo);
    printf("b. Divisor: %d\n", divisor);
    printf("c. Quociente: %d\n", quociente);
    printf("d. Resto: %d\n", resto);

    return 0;
}
