#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <locale.h>
using namespace std;

/* 
Ejercicio 10: Dado un arreglo V de tama�o 20 con n�meros enteros. Deje en un arreglo A todos los n�meros 
negativos y en un arreglo B el doble de los positivos.
*/

int main() {
    setlocale(LC_ALL, "spanish");
    srand(time(NULL));
    int v[20], a[20], b[20];
    
    for(int i = 0; i < 20; i++) {
        v[i] = rand() % 201 - 100;
    }
    
    int indexA = 0; 
    int indexB = 0; 
    
    for(int i = 0; i < 20; i++) {
        if(v[i] < 0) {
            a[indexA++] = v[i];
        } else {
            b[indexB++] = v[i] * 2;
        }
    }
    
    printf("\narray V\n");
    for(int i = 0; i < 20; i++) {
        printf("[%i]", v[i]);
    }
    
    printf("\narray A negativos\n");
    for(int i = 0; i < indexA; i++) {
        printf("[%i]", a[i]);
    }
    
    printf("\narray B * 2\n");
    for(int i = 0; i < indexB; i++) { 
        printf("[%i]", b[i]);
    }
    
    getch();
    return 0;
}

