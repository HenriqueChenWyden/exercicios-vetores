#include <stdio.h>

int main() {
    int matriz[3][3] = {{10, 65, 90}, {115, 600, 935}, {1000, 6000, 9013}};
    int i, j;
    int soma = 0;
    int elementos_pares[9]; // Para armazenar elementos pares
    int contador_pares = 0;

    // Elementos da diagonal principal
    printf("Elementos da Diagonal Principal:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
        soma += matriz[i][i];
        
        // Verifica se o elemento é par
        if (matriz[i][i] % 2 == 0) {
            elementos_pares[contador_pares] = matriz[i][i];
            contador_pares++;
        }
    }
    printf("\n");

    // Elementos da diagonal secundária
    printf("Elementos da Diagonal Secundária:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", matriz[i][2 - i]);
        
        // Verifica se o elemento é par
        if (matriz[i][2 - i] % 2 == 0) {
            elementos_pares[contador_pares] = matriz[i][2 - i];
            contador_pares++;
        }
    }
    printf("\n");

    // Média dos valores
    float media = (float)soma / 6; // Número total de elementos na matriz
    printf("Média dos Valores: %.2f\n", media);

    // Elementos pares
    printf("Elementos Pares:\n");
    for (i = 0; i < contador_pares; i++) {
        printf("%d ", elementos_pares[i]);
    }
    printf("\n");

    return 0;
}
