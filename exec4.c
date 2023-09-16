// Exercício 4 - Inserir e Mostrar os elementos de uma matriz 2x3
// Henrique Chen

#include <stdio.h>

int main()
{
    int matriz[2][3] = {0}; // Criando o vetor 2x3 e valores zerados.

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite os valores da linha %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Elementos da Matriz 2x3:\n");

    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
        return 0;
}