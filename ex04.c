#include <stdio.h>
#define MAX 100

int main(){
    double M1[MAX][MAX], M2[MAX][MAX], S[MAX][MAX];
    int i, j, m1, n1, m2, n2;
    printf("--- Somador de Matrizes ---\n");
    printf("Insira a quantidade de linhas da matriz 1: ");
    scanf("%d", &m1);
    printf("Insira a quantidade de colunas da matriz 1: ");
    scanf("%d", &n1);
    printf("Insira a matriz 1:\n");
    for (i=0; i<m1; i++){
      for(j=0; j<n1; j++)
          scanf("%lf", &M1[i][j]);
    }
    printf("Insira a quantidade de linhas da matriz 2: ");
    scanf("%d", &m2);
    printf("Insira a quantidade de colunas da matriz 2: ");
    scanf("%d", &n2);
    printf("Insira a matriz 2:\n");
    for (i=0; i<m2; i++){
      for(j=0; j<n2; j++)
          scanf("%lf", &M2[i][j]);
  }
    if(m1 != m2 || n1 != n2)
      printf("Matrizes incompatíveis para soma!\n");
    else{
      printf("Matriz soma:\n");
      for (i=0; i<m1; i++){
        for(j=0; j<n1; j++){
           S[i][j] = M1[i][j] + M2[i][j];
           printf("%10.1lf ", S[i][j]);
        }
        printf("\n");
      }
    }
    return 0;
}