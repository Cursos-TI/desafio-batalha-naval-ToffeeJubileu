#include <stdio.h>

int main() {
    char tabuleiro[10][10];

     // Inicializar o tabuleiro com pontos
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }


    // Posicionar a peça no meio do tabuleiro
    tabuleiro[2][2] = '3'; // 3,C 
    tabuleiro[2][3] = '3'; // 3,D
    tabuleiro[2][4] = '3'; // 3,E

    tabuleiro[5][7] = '3'; // 6,H
    tabuleiro[6][7] = '3'; // 7,H
    tabuleiro[7][7] = '3'; // 8,H

    // Posicionar a pesças vesticais
    tabuleiro[3][0] = '3'; // 4,A
    tabuleiro[4][1] = '3'; // 5,B
    tabuleiro[5][2] = '3'; // 6,C

    tabuleiro[0][9] = '3'; // 1,J
    tabuleiro[1][8] = '3'; // 2,I
    tabuleiro[2][7] = '3'; // 3,H


     // Imprimir o cabeçalho do tabuleiro
    printf("TABULEIRO DE BATALHA NAVAL\n");
    printf("   A B C D E F G H I J\n");

     // Imprimir as linhas do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Imprimir o número da linha
        for (int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]); // Imprimir a célula do tabuleiro
        }
        printf("\n");
    }

    return 0;
}