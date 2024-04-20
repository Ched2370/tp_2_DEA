#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

/*
Ejercicio 3: Hacer una matriz M1 de tipo entera de 2 * 2, llenarla de números y luego copiar todo el contenido de 
M1 hacia otra matriz M2, sumándole 1 a cada elemento de M1 al copiarlo.
*/

int main() {
	setlocale(LC_ALL, "spanish");
	int m1[2][2], m2[2][2];
	
	printf("Llene la matriz con numeros enteros\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			scanf("%i", &m1[i][j]);
		}
	}
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			m2[i][j] = m1[i][j] + 1;
		}
	}
	printf("\n\nMatriz M1\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("[%d]", m1[i][j]);
		}
		printf("\n");
	}
	printf("\n\nMatriz M2\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("[%d]", m2[i][j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
