#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

char frase[MAX], spc[MAX] = "_", resp[3];
int vidas = 5, acertos = 0, p = 0, erros = 0;

void limparTela()
{
#ifdef _WIN32
   system("cls");
#else
   system("clear");
#endif
}

void MostrarAcertos(){
  int i;
  for (i = 0; i<strlen(frase); i++)
    if(frase[i] < 'a' || frase[i] > 'z')
        printf("%c", frase[i]);
    else
        printf("%c ", spc[i]);
  printf("\n");
}

int verificar(char letra[]){
  int i;
  for (i = 0; i<strlen(frase); i++)
    if (tolower(letra[0]) == frase[i]){
      printf("Você acertou uma letra!\n");
      spc[i] = frase[i];
      MostrarAcertos();
      acertos++;
      return 1;
    }
  return 0;  
}

void MostrarFrase(){
  int i;
  for(i=0; i<strlen(frase); i++){
    spc[i] = '_';
    if(frase[i] < 'a' || frase[i] > 'z')
      printf("%c", frase[i]);
    else
      printf("%c ", spc[i]);
  }
}

int main (){
  char letra[MAX];
  int i;
  printf("--- Jogo da Forca ---\n");
  printf("Digite a frase secreta: ");
  fgets(frase, MAX, stdin);
  frase[strlen(frase)-1]='\0';
  for (i=0; i<strlen(frase); i++)
      frase[i] = tolower(frase[i]);
  limparTela();
  MostrarFrase();
  do{
    printf("\nTente uma letra: ");
    scanf(" %c", letra);
    if(verificar(letra) == 0){
      printf("Você errou!\n");
      vidas--;
      printf("Restam %d vidas.\n", vidas);
    } 
  } while(vidas != 0 && acertos < strlen(frase));
    if (acertos == strlen(frase)){
      printf("\nParabéns, você ganhou! :D\n");
    }
    else if (vidas == 0){
      printf("\nQue pena, você foi enforcado! X_X\n");
      printf("A frase era: %s ", frase);
    }
  return 0;
}