
\\ ejercicio 5 Haz un programa que cuente cuántas palabras hay en una frase.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];
    int contador_palabras = 0;
    int en_palabra = 0;

    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ' && frase[i] != '\n' && frase[i] != '\t') {
            if (en_palabra == 0) {
                en_palabra = 1;
                contador_palabras++;
            }
        } else {
            en_palabra = 0;
        }
    }

    printf("La frase contiene %d palabras.\n", contador_palabras);

    return 0;
}