#include <stdio.h>

int main() {
    int x, i, j = 0;
    printf("----- Verificador de Números Primos -----\n");
    printf("Digite um número: ");
    scanf("%d", &x);
    if (x<0 || x == 0)
        printf("Informe apenas valores positivos e não nulos.\n");
    else if (x == 1)
        printf("O número %d não é primo.\n", x);
    else{
        for(i=1; i<=x; i++){
            if (x%i == 0)
                j = j + 1;
        }
        if (j > 2)
            printf("O número %d não é primo.\n", x);
        else
            printf("O número %d é primo.\n", x);
    }
    return 0;
}