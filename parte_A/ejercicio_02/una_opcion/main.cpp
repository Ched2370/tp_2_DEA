#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
using namespace std;

/* 
Ejercicio 2: Escribe un programa que pida n por teclado, y usando un for que cargue en un arreglo de números
positivos desde n-1 a 0, entonces calcule la multiplicación acumulada de sus elementos.
*/

int main() {
	setlocale(LC_ALL, "spanish");
	
	int n;
	
	printf("ingrese la longitud del arreglo\n");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = n-1; i >= 0; i--){
		arr[i] = i;
	}
	
	for(int i = 0; i < n; i++){
		printf("[%i]", arr[i]);
	}
	
	printf("\ntodo numero multiplicado x 0 da 0");
	
	getch();
	return 0;
}
