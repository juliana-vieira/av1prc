#include <stdio.h>
#include <stdlib.h>

int main(){
    int cod, qtd, x, i;
    double total = 0;
    printf("|-----------------------------|\n");
    printf("|- Bem-vindo ao Mozar in Box -|\n");
    printf("|-----------------------------|\n");
    printf("|          Cardápio           |\n");
    printf("| 1 - Misto Quente    R$ 4.50 |\n");
    printf("| 2 - Queijo Quente   R$ 4.00 |\n");
    printf("| 3 - Hamburguer      R$ 6.00 |\n");
    printf("| 4 - Eggburguer      R$ 7.00 |\n");
    printf("| 5 - Podrão          R$ 9.00 |\n");
    printf("| 0 - Sair                    |\n");
    printf("|-----------------------------|\n");
    while (x != 0){
        printf("Insira quantos itens deseja comprar: ");
        scanf("%d", &x);
        if (x==0){
           printf("Obrigado por comprar conosco!\n");
           exit(0);
        }else{
            printf("Insira o código do item e a quantidade: ");
            for(i=1; i<=x; i++){
               scanf("%d %d", &cod, &qtd);
               switch(cod){
                   case 1:
                      total += 4.50*qtd;
                      break;
                    case 2: 
                      total += 4.00*qtd;
                      break;
                    case 3:
                      total += 6.00*qtd;
                      break;
                    case 4:
                      total += 7.00*qtd;
                      break;
                    case 5:
                      total += 9.00*qtd;
                      break; 
                    default:
                      break;
               }
            }
            printf("Total a pagar: R$ %.2lf\n", total);
        }
    }
  return 0;
}