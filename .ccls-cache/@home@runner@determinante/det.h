#ifndef DET_H
#define DET_H
#include <stdio.h>
void det2(int A[2][2])
{
    int det = 0;
    printf("Calculo do determinante de uma matriz 2x2\n");
    for(int i = 0; i <2 ; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Digite um valor para a posição %d %d\n ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("O determinante é dado pelo seguinte calculo: (%d * %d) - (%d * %d)\n", A[0][0], A[1][1], A[0][1], A[1][0]);
}
#endif