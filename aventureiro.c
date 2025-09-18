#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3

int main (){

    int tabuleiro [LINHAS][COLUNAS] = {0};
    int navio [NAVIO] = {3, 3, 3};


    for (int i = 0; i < 3; i++) {
        tabuleiro[3 + i][2] = navio[i];
    }
   
   for (int i = 0; i < 3; i++) {
         tabuleiro[7][5 + i] = navio[i];
    }


    for (int i = 0; i < 3; i++) {
        tabuleiro[5 - i][5 + i] = navio[i];
    }


   for (int i = 0; i < 3; i++) {
    tabuleiro[7 + i][0 + i] = navio[i];
    }


     printf("\nTabuleiro:\n");

     for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

        printf("%d ", tabuleiro[i][j]);

        }

    printf("\n");

    }

    return 0;
}
