
\\ ejercicio 4 Escribe un programa que concatene dos cadenas ingresadas por el usuario.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[200], cadena2[100];

    printf("Ingrese la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    cadena1[strcspn(cadena1, "\n")] = '\0';

    printf("Ingrese la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    cadena2[strcspn(cadena2, "\n")] = '\0';

    // Unir cadena2 al final de cadena1
    strcat(cadena1, cadena2);

    printf("Cadena concatenada: %s\n", cadena1);

    return 0;
}