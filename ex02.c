#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char frase[100];
  int i, t, p=0;
  printf("--- Verificador de Palíndromos --- \n");
  printf("Digite uma frase: ");
  scanf("%s", frase);
  t = strlen(frase);
  for(i=t; i>=0; i--){
    frase [i] = frase[i];
    if((frase[t-1] == frase[0]) && (frase[t-2] == frase[1]))
      p = 1;
  }
  if (p==0)
    printf("A frase inserida não é um palíndromo.\n");
  else
    printf("A frase inserida é um palíndromo.\n");
  return 0;
}