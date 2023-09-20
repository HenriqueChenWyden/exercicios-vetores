// Exercício 5 - Matriz Diversos
// Henrique Chen

#include <stdio.h>

int m[3][3] = { {10,65,90}, {115,600,935}, {1000,6000,9013} }; // Definido a matriz conforme o exercício
int i, j;
int soma = 0;
int mediaValor = 0;
int pares = 0;
int nPares[9]; // matriz para amarzenar os números pares


int main(){
printf("Elemento da Diagonal Principal: ");
for (int i = 0; i < 3; i++){ // loop for para mostrar os elementos da diagonal principal apenas.
    printf("%d ", m[i][i]);
}

printf("\nElementos da diagonal secundária: ");
for (int i = 0; i < 3; i++){ // loop for para mostrar os elementos da diagonal secundária apenas.
    printf("%d ", m[i][2-i]);
}

printf("\nNúmeros Pares: ");
for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++){ 
        if(m[i][j] % 2 == 0){ // verifique se o número ao dividir por 2, o resultado é 0, caso afirmativo, é par.
            printf("%d ", m[i][j]);
        }
    }
}

for (int i=0; i < 3; i++){
    for(int j = 0; j < 3; j++){ // faz a soma das matriz por um todo
        soma += m[i][j];
    }
}

printf("\nMédia de Valores: ");
float mediaValor = (float) soma / 9; // faz a média dos valores por 9.
printf("%.2f", mediaValor);
}