#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int n1, n2;
} TValores;

int Ler(TValores *x){
  printf("--- Verificador de Números Amigos ---\n");
  printf("Insira o primeiro número: ");
  scanf("%d", &(*x).n1);
  printf("Insira o segundo número: ");
  scanf("%d", &(*x).n2);
  if ((*x).n1 < 0 || (*x).n2 < 0){
    return 1;
  }else
    return 0;
}

void Amigos(TValores *x){
  int i, soma1 = 0, soma2 = 0;
  for (i=1; i<(*x).n1; i++){
    if((*x).n1%i == 0)
      soma1 = soma1 + i;
    }
  for (i=1; i<(*x).n2; i++){
    if ((*x).n2%i == 0)
      soma2 = soma2 + i;
  }
  if (soma1 == (*x).n2 && soma2 == (*x).n1)
    printf("Os números %d e %d são amigos!", (*x).n1, (*x).n2);
  else
    printf("Os números %d e %d não são amigos.", (*x).n1, (*x).n2);
}

int main(){
    TValores x;
    while (Ler(&x) == 1)
      printf("Insira apenas valores positivos!\n");
    Amigos(&x);
  return 0;
}