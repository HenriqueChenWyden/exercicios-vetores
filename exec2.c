// Exercício 2 - Ordenação por seleção
// Henrique Chen

#include <stdio.h>

// Função que realiza a ordenação do vetor pelo método da ordenação
void ordenacao(int vetor[], int tamanho){
    int i, j, aux;
    for (i = 0; i < tamanho-1; i++) {
        for (j = i+1; j < tamanho; j++) {
            if (vetor[j] < vetor[i]) {
                aux      = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    } 
}

int main(){
    int tamanho = 10; // Definido o vetor com 10 posições.
    int vetor[10] = {10, 55, 20, 2, 33, 8, 355,  125, 77, 242}; // Definido os valores no vetor conforme exercício.

    printf("Vetor inicial: "); // Mostra o vetor inicial definido acima.
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }

    ordenacao(vetor, tamanho); //chamada da subrotina de ordenação.

    printf("\nValor após a subrotina de ordenação: \n"); // Mostra o vetor após a subrotina da ordenação.
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}