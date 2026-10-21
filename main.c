//Código em Lingingem C: SISTEMA BANCÁRIO SIMPLES
//Por Iury Moreira - 21/10/2026

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int entrada_valor_total = 0;
    printf("Digite o valor total em reais: ");
    scanf("%d", &entrada_valor_total); //Lê e salva o valor do dinheiro

    int entrada_valor_troca = 0;
    printf("Você quer verificar para troca: ");
    scanf(" %d", &entrada_valor_troca); //Lê e salva o quanto quer trocar

    int quantia_notas = entrada_valor_total / entrada_valor_troca;
    int quantia_resto = entrada_valor_total % entrada_valor_troca;

    printf("\n");

    printf("Quantia de notas de %d para troca: %d\n", entrada_valor_troca, quantia_notas); //Quantia que posso dividir
    printf("Resto introcável: %d\n", quantia_resto); //O resto, caso sobre uma quantia indivisível

    return 0;
}

//CÓDIGO LIVRE DE INTELIGÊNCIA ARTIFICAL