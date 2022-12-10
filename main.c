#include <stdio.h>
int main(void)
{
    int A[2][2];
    int i = 0, j = 0;
    int n = 0;
    int det = 0;
    int b[3][3];
    int passo1,passo2,passo3,passo4,passo5,passo6,passo7,passo8,passo9 = 0;
    while(n>= 0)
    {
        printf("------------------------------------------------------------------------------------------------------\n");
           printf("Bem vindo ao menu de calculo de determinante de matrizes, caso deseje calcular o determinante de uma matriz 2x2 digite 1, caso deseje calcular o determinante de uma matriz 3x3 digite 2, caso deseje sair do menu digite -1\n");
           scanf("%d", &n);
        switch(n)
        {
    case 1:
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
           {
            //scanf("%d", A[i][j]);
            printf("[%d][%d] =  ", i, j );
            scanf("%d", &A[i][j]);
           }
           printf("Matriz A:\n");
        for(i = 0; i < 2; i++) 
        {
            printf("[ ");
            for(j = 0; j < 2; j++)
           {
            
                printf("%d ", A[i][j] );
           }
            printf("]\n");
            }
           
            printf("Para o calculo do determinante de uma matriz 2x2 usa-se a seguinte formula: (%d * %d) - (%d * %d)", A[0][0], A[1][1], A[0][1], A[1][0]);
            det = (A[0][0] * A[1][1]) - (A[0][1] *  A[1][0]);
            break;
            case 2:
            for(i = 0; i < 3; i++)
            {
                for(j = 0; j < 3; j++)
                {
                     printf("[%d][%d] =  ", i, j );
                     scanf("%d", &b[i][j]);
                }
            }
           
            printf("Matriz B:\n");
        for(i = 0; i < 3; i++) 
        {
            printf("[ ");
            for(j = 0; j < 3; j++)
           {
            
                printf("%d ", b[i][j] );
           }
            printf("]\n");
        }
        printf("\n O calculo para uma matriz de ordem 3x3 é o seguinte:\n((%d * %d * %d) + (%d * %d * %d ) + (%d * %d * %d)) - ((%d * %d * %d) + (%d * %d * %d) + (%d * %d * %d))",b[0][0],b[1][1],b[2][2],b[0][1],b[1][2],b[2][0], b[0][2],b[1][0],b[2][1],b[2][0],b[1][1],b[0][2],b[1][0],b[0][1],b[2][2],b[0][0],b[1][2],b[2][1] );
        passo1 = b[0][0] * b[1][1] * b[2][2];
        passo2 = b[0][1] * b[1][2] * b[2][0];
        passo3 = b[0][2] * b[1][0] * b[2][1];
        passo4 = b[2][0] * b[1][1] * b[0][2];
        passo5 = b[1][0] * b[0][1] * b[2][2];
        passo6 = b[0][0] * b[1][2] * b[2][1];
        passo7 = passo1+passo2+passo3;
        passo8 = passo4 + passo5 + passo6;
        printf("\nResolvendo passo a passo:\n%d * %d * %d = %d\n", b[0][0],b[1][1],b[2][2], passo1);
        printf("%d * %d * %d = %d\n", b[0][1],b[1][2],b[2][0], passo2);
        printf("%d * %d * %d = %d\n", b[0][2],b[1][0],b[2][1], passo3);
        printf("%d * %d * %d = %d\n", b[2][0],b[1][1],b[0][2], passo4);
        printf("%d * %d * %d = %d\n", b[1][0],b[0][1],b[2][2], passo5);
        printf("%d * %d * %d = %d\n", b[0][0],b[1][2],b[2][1], passo6);
        printf("Apos realizar as devidas multiplicações está na hora de somar os elementos para subtrai-los da outra parte da matriz posteriormente\n");
        printf("%d + %d + %d = %d\n",passo1,passo2,passo3,passo7);
        printf("%d + %d + %d = %d\n",passo4,passo5,passo6,passo8);
        printf("Por fim agora resta subtrair o resultado das somas e obteremos o determinante\n");
        det = passo7 - passo8;
        printf("O determinante é %d\n", det);
         break;
    }
    }
    return 0;
}