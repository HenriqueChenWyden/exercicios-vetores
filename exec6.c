#include <stdio.h>

struct{
    char sigla[3];
    char nome[40];
} typedef tUF;

struct{
    char numero[10];
    char orgao[5];
    tUF uf; //Aninhado para o UF.
} typedef tRG;

int main(){
    tUF uf1, uf2;

    strcpy(uf1.sigla, "PE");
    strcpy(uf1.nome, "Pernambuco");

    strcpy(uf2.sigla, "SP");
    strcpy(uf2.nome, "São Paulo");

    tUF ufs[2];
    ufs[0] = uf1;
    ufs[1] = uf2;

    tRG rg;
    strcpy(rg.numero, "123456789");
    strcpy(rg.orgao, "SDS");

    rg.uf = ufs[0];

    printf("Número RG: %s\n", rg.numero);
    printf("Orgão Emissor: %s\n", rg.orgao);
    printf("UF: %s\n", rg.uf.sigla);
    printf("Nome: %s\n", rg.uf.nome);

    return 0;
}