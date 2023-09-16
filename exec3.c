// Exercício 3 - Operação Ordenada em Vetor
// Henrique Chen

#include <stdio.h>
// Subrotina de Ordenação
void ordenacao(int vetor[], int tamanho) {
    int i, j, aux;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[i]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}
// Subrotina para excluir um valor e inserir 0 no final do vetor e remaneja os valores
// Verifica se o índice é válido para não ocorrer exclusão inválido.
void excluirValor(int vetor[], int tamanho, int indice){
    if(indice < 0 || indice >= tamanho){
        printf("Indice inválido\n");
        return;
    }

    for(int i = indice; i < tamanho - 1; i++){
        vetor[i] = vetor[i+1];
    }

    vetor [tamanho - 1] = 0;
}

int main() {
    int tamanho = 10; // Tamanho do vetor
    int vetor[10]; // Vetor inicial vazio

    // Solicita ao usuário inserir os números no vetor
    printf("Digite %i números inteiros para preencher o vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if(vetor[i] <= 0){
            printf("Número negativo ou zero, insira apenas números positivos.\n");
            return;
        }
    }
    // Mostra o vetor inserido pelo usuário na mesma ordem que foi inserido
    printf("Vetor inserido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    ordenacao(vetor, tamanho); // Ordena o vetor em ordem crescente

// Mostra o vetor ordenado.
printf("Vetor ordenado: ");
for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
}
printf("\n");

// Faz a primeira operação de exclusão

int excluirIndice = 3; // exclui o valor na posição 3
excluirValor(vetor, tamanho, excluirIndice);
tamanho--;

printf("Vetor após a primeira exclusão na posição %d: ", excluirIndice);
for(int i = 0; i < tamanho; i++){
    printf("%d ", vetor[i]);
}
vetor[tamanho] = 0;
printf("%d ", vetor[tamanho]);
printf("\n");

int excluirIndice2 = 7; // exclui o valor na posição 7
excluirValor(vetor, tamanho, excluirIndice2);
tamanho--;

// Segunda operação de exclusão.
printf("Vetor após a segunda exclusão na posição %d: ", excluirIndice2);
for(int i = 0; i < tamanho; i++){
    printf("%d ", vetor[i]);
}
vetor[tamanho] = 0;
printf("%d ", vetor[tamanho]);
printf("0\n");

return 0;
}
