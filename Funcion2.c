// ejercicio 2 Escribe un programa que lea una cadena y la imprima al revés.
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int contador = 0;

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    for (int i = 0; cadena[i] != '\0'; i++) {
        char c = tolower(cadena[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    printf("La cadena tiene %d vocales.\n", contador);

    return 0;
}