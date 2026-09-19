
\\ ejercicio 3 Realiza un programa que compare dos cadenas y diga si son iguales o diferentes.

#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main() {
    char cadena1[100], cadena2[100];

    printf("Ingrese la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    cadena1[strcspn(cadena1, "\n")] = '\0';

    printf("Ingrese la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    cadena2[strcspn(cadena2, "\n")] = '\0';

    if (strcmp(cadena1, cadena2) == 0) {
        printf("Las cadenas son IGUALES.\n");
    } else {
        printf("Las cadenas son DIFERENTES.\n");
    }

    return 0;
}