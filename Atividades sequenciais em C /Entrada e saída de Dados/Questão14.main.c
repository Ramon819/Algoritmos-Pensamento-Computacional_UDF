#include <stdio.h>

int main() {
    int hora, minutosTotais;

    printf("Digite a hora (0 a 23): ");
    scanf("%d", &hora);
        
        minutosTotais = hora * 60;
        printf("Desde o início do dia se passaram %d minutos.\n", minutosTotais);
    
    return 0;
}
