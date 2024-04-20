#include <iostream>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

/* 
Ejercicio 8: Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo
*/

int main() {
	setlocale(LC_ALL, "spanish");
	int arr1[5], arr2[5];
	
	printf("Ingrese los valores del arreglo:\n");
	
	for(int i = 0; i < 5; i++){
		scanf("%i", &arr1[i]);
	}
	
	memcpy(arr2, arr1, sizeof(arr1)); // de la libreria <string.h>
	printf("array 1\n");
	for(int i = 0; i < 5; i++){
		printf("[%d]", arr1[i]);
	}
	cout << endl;
	printf("array 2\n");
	for(int i = 0; i < 5; i++){
		printf("[%d]", arr2[i]);
	}
	cout << endl;
	
	getch();
	return 0;
}
