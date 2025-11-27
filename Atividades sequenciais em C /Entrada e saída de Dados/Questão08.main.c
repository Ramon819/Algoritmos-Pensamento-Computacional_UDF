#include <stdio.h>

int main() {
    float saldo, novoSaldo;

    printf("Digite o saldo da aplicação: ");
    scanf("%f", &saldo);

    novoSaldo = saldo * 1.01; 

    printf("O novo saldo, com reajuste de 1%%, é: %.2f\n", novoSaldo);

    return 0;
}
