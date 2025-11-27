#include <stdio.h>

int main() {
    float N, TercaParte;
    
    printf("Digite um número: ");
    scanf("%f", &N);
    
    TercaParte = N / 3;
   
    printf("A terça parte de %.2f é %.2f\n", N, TercaParte);
    
    return 0;
}
