#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int comparador(const void *a, const void *b) {
   return ( *(double*)a - *(double*)b );
}

int main(){
    double v[MAX], soma = 0.0, media = 0.0;
    int i, qtd = 0, x = 0;
    printf("[Digite 0 para sair]\n");
    for (i=0; i<MAX; i++){
        printf("Digite um valor: ");
        scanf("%lf", &v[i]);
        qtd = i;
        if (v[i] == 0)
          break;
    }
    qsort(v, qtd, sizeof(double), comparador);
    for(i = 1; i < qtd; i++){
      if(v[i+1] == v[1])
         v[i+1] = 0;
      if(v[i] == v[qtd-1])
         v[i] = 0;
      soma = soma + v[i];
      if (v[i] != 0 && v[i] != v[1])
        x++;
    }
    soma = soma - v[1];
    media = soma / x;
    printf("A média é %.2lf!", media);
  return 0;
}
