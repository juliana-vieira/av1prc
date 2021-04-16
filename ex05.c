#include <stdio.h>
#define MAX 100

int main(){
    double M1[MAX][MAX], M2[MAX][MAX], V[MAX][MAX];
    int i, j, x, m1, m2, n1, n2;
    printf("--- Multiplicador de Matrizes ---\n");
    printf("Insira a quantidade de linhas da matriz 1: ");
    scanf("%d", &m1);
    printf("Insira a quantidade de colunas da matriz 1: ");
    scanf("%d", &n1);
    printf("Insira a matriz 1:\n");
    for(i=0; i<m1; i++){
        for(j=0; j<n1; j++)
            scanf("%lf", &M1[i][j]);
    }
    printf("Insira a quantidade de linhas da matriz 2: ");
    scanf("%d", &m2);
    printf("Insira a quantidade de colunas da matriz 2: ");
    scanf("%d", &n2);
    printf("Insira a matriz 2:\n");
    for(i=0; i<m2; i++){
        for(j=0; j<n2; j++)
            scanf("%lf", &M2[i][j]);
    }
    if (n1 != m2)
        printf("Matrizes incompatíveis para a multiplicação!\n");
    else{
        for(i=0; i<m1; i++){
          for(j=0; j<m1; j++){
            for(x=0; x<n1; x++)
               V[i][j] += M1[i][x] * M2[x][j];
          }
        }
        printf("Matriz produto:\n");
        for(i=0; i<m1; i++){
          for(j=0; j<n2; j++)
            printf("%10.1lf ", V[i][j]);
        printf("\n");
        }
    }
    return 0;
}