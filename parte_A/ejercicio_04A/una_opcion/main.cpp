#include <iostream>
#include <stdio.h>
#include <conio.h>

/* 
Ejercicio 4: Escribe un programa que defina un vector de n�meros y muestre
en la salida est�ndar el vector en orden inverso�del �ltimo al primer elemento.
 */

int main() {
	int arr[]= {1,2,3,4,5};
	for(int i = 0; i < 5; i++){
		printf("[%i]", arr[i]);
	}
	printf("\n");
	for(int i = 4; i >= 0; i--){
		printf("[%i]", arr[i]);
	}
	
	
	return 0;
}
