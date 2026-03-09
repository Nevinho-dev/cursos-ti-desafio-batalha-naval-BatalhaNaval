#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define TABULEIRO_VERTICAL 10
#define TABULEIRO_HORIZONTAL 10

int main() {
    
int tabuleiro[TABULEIRO_VERTICAL][TABULEIRO_HORIZONTAL] = {
    {0,0,0,0,3,3,3,3,3,0,},
    {0,0,0,0,3,0,0,0,0,0,},
    {0,0,0,3,0,0,0,0,0,0,},
    {0,0,3,0,0,0,0,0,0,0,},
    {0,3,0,3,0,3,0,0,0,0,},
    {3,0,0,3,0,0,3,0,0,0,},
    {0,0,0,3,0,0,0,3,0,0,},
    {0,0,0,3,0,0,0,0,3,0,},
    {0,0,0,3,0,0,0,0,0,3,},
    {0,0,0,3,0,0,0,0,0,0,}
};

printf("Navio 1 (Horizontal):\n");
printf("Parte 1: (0,4)\n");
printf("Parte 2: (0,5)\n");
printf("Parte 3: (0,6)\n");
printf("Parte 4: (0,7)\n");
printf("parte 5: (0,8)\n");
printf("\n");
printf("Navio 2 (Vertical):\n");
printf("Parte 1: (4,3)\n");
printf("Parte 2: (5,3)\n");
printf("Parte 3: (6,3)\n");
printf("Parte 4: (7,3)\n");
printf("Parte 5: (8,3)\n");
printf("\n");
printf("Navio 3 (Diagonal):\n");
printf("Parte 1: (5,0)\n");
printf("Parte 2: (4,1)\n");
printf("Parte 3: (3,2)\n");
printf("Parte 4: (2,3)\n");
printf("Parte 5: (1,4)\n");
printf("\n");
printf("Navio 4 (Diagonal):\n");
printf("Parte 1: (4,5)\n");
printf("Parte 2: (5,6)\n");
printf("Parte 3: (6,7)\n");
printf("Parte 4: (7,8)\n");
printf("Parte 5: (8,9)\n");

printf("\nTabuleiro Completo:\n");
for (int i = 0; i < TABULEIRO_VERTICAL; i++) {
    for (int j = 0; j < TABULEIRO_HORIZONTAL; j++) {
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}
    
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
