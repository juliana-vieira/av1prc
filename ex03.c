#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i, t;
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    t = strlen(frase);
    for (i=0; i<t; i++)
        frase[i] = tolower(frase[i]);
    for (i=0; i<t; i++){
        if (i == 0 || frase[i-1] == ' ')
            frase[i] = toupper(frase[i]);
        else
            frase[i] = frase[i];     
    }
    printf("\n%s", frase);
    return 0;
}
