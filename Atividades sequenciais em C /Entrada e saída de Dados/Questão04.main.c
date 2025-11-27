#include <stdio.h>

int main() {
    float N1, N2, Soma;
    
    printf("Digite o primeiro números que deseja somar:\n");
    scanf("%f", &N1);
    printf("Digite o segundo número:\n");
    scanf("%f", &N2);
    Soma = N1 + N2;
    printf("Soma = %.2f\n", Soma);
    
    return 0;
}
