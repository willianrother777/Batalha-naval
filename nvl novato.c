#include <stdio.h>

int main (){

    int tabuleiro[10][10] = {

        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

    };

    int navio[3] = {3, 3, 3};


    for (int i = 0; i < 3; i++) {
         tabuleiro[3 + i][2] = navio[i];
     }
    

    for (int i = 0; i < 3; i++) {
          tabuleiro[7][5 + i] = navio[i];
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
