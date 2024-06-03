#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *entrada, *saida;
    char caractere;

    entrada = fopen("teste22.txt", "r"); 
    saida = fopen("teste22saida.txt", "w"); 

    if (entrada == NULL || saida == NULL) { 
        printf("Erro ao abrir os arquivos.");
        return 1;
    }

    while ((caractere = fgetc(entrada)) != EOF) { 
        if (caractere == ' ' || caractere == '\n') { 
            continue; 
        } else {
            fputc(caractere, saida);
        }
    }

    fclose(entrada); 
    fclose(saida);

    printf("Espaços e quebras de linha removidos com sucesso.\n");

    return 0;
}
