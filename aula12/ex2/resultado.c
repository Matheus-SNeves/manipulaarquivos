#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *entrada, *saida;
    char caractere, proximo;

    entrada = fopen("teste2.txt", "r"); 
    saida = fopen("teste2saida.txt", "w"); 

    if (entrada == NULL || saida == NULL) { 
        printf("Erro ao abrir os arquivos.");
        return 1;
    }

    while ((caractere = fgetc(entrada)) != EOF) {
        if (caractere == '/') { 
            proximo = fgetc(entrada);
            if (proximo == '/') {
                while ((caractere = fgetc(entrada)) != '\n' && caractere != EOF);
}
}
}
}
