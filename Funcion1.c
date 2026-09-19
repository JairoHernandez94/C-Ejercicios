\\ ejercicio 1 Escribe un programa que lea una cadena y la imprima al revés.

#include <stdio.h>
#include <string.h>

int main() { \\Es la función principal del programa
    char cadena[100];

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    
    // Eliminar el salto de línea generado por fgets
    cadena[strcspn(cadena, "\n")] = '\0';

    int longitud = strlen(cadena);

    printf("Cadena al reves: ");
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", cadena[i]);
    }
    printf("\n");

    return 0;
}

