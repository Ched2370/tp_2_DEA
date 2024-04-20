#include <stdio.h>
#include <locale.h>
#include <conio.h>
/*
Ejercicio 6: Escribe un programa que defina un vector de números y calcule si existe algún número 
en el vector cuyo valor equivale a la suma del resto de números del vector.

*/
int main() {
    setlocale(LC_ALL, "spanish");

    int tamano;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tamano);

    int num[tamano];
    printf("\nIngrese los valores del arreglo:\n");
    for (int i = 0; i < tamano; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    int suma = 0, result = 0;
    for (int i = 0; i < tamano; i++) {
        suma += num[i]; // Se suma todos los valores
    }

    bool encontrado = false;
    for (int i = 0; i < tamano; i++) {
        if (num[i] == suma - num[i]) { // se itera y se compara restando cada numero a la suma de todos
        	result = suma - num[i];
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        printf("Hay un numero cuyo valor equivale a la suma del resto del arreglo.\n");
    } else {
        printf("No hay ningun numero cuyo valor equivale a la suma del resto del arreglo.\n");
    }

	getch();
    return 0;
}
