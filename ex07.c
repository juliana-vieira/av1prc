#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define MAXSTR 30

typedef struct 
{
    char nome [MAXSTR];
    double n1, n2, media;
} TAluno;

void Aluno(TAluno v[], int n){
    int i;
    for (i=0; i<n; i++){
        printf("Insira o nome %d° do aluno: ", i+1);
        scanf("%s", v[i].nome);
        printf("Insira a primeira nota do aluno %d: ", i+1);
        scanf("%lf", &v[i].n1);
        printf("Insira a segunda nota do aluno %d: ", i+1);
        scanf("%lf", &v[i].n2);
    }
}
void Media(TAluno v[], int n){
  int i, qtd = 0;
  double soma = 0.0, mediaTurma = 0.0;
  for (i=0; i<n; i++){
        v[i].media = (v[i].n1 + 2*v[i].n2) / 3;
        soma = soma + v[i].media;
  }
  mediaTurma = soma / n;
  for (i=0; i<n; i++){
    if (v[i].media > mediaTurma)
      printf("%s\n", v[i].nome);
  }
}

int main(){
    TAluno alunos[MAX];
    int n;
    printf("Insira a quantidade de alunos: ");
    scanf("%d", &n);
    Aluno(alunos, n);
    printf("Alunos com médias maiores que a média da turma: \n");
    Media(alunos, n);
    return 0;
}