// Exercício 5 - Matriz Diversos
// Henrique Chen

#include <stdio.h>

int m[3][3] = { {10,65,90}, {115,600,935}, {1000,6000,9013} };
int i, j;
int soma = 0;
int mediaValor = 0;
int pares = 0;
int nPares[9];


int main(){
printf("Elemento da Diagonal Principal: ");
for (int i = 0; i < 3; i++){
    printf("%d ", m[i][i]);
    if(m[i][2 - i] % 2 == 0){
    nPares[pares] = m[i][2 - i];
    pares++;
}
}

printf("\nElementos da diagonal secundária: ");
for (int i = 0; i < 3; i++){
    printf("%d ", m[i][2-i]);
}

printf("\nNúmeros pares: "); //Verificar.
for (i = 0; i < pares; i++) {
    printf("%d ", nPares[i]);
    for(int j = 0; j < 3; j++){
        soma += m[i][j];
    }
}
printf("\nMédia de Valores: ");
float mediaValor = (float) soma / 9;
printf("%.2f", mediaValor);
}