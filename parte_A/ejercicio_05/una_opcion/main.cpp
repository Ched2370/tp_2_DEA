#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
using namespace std;

/* 
Ejercicio 5: Desarrolle un programa que lea de la entrada estándar un arreglo de enteros y determine el mayor 
elemento del arreglo.
*/

int main() {
	setlocale(LC_ALL, "spanish");
	int arr[5], max = 0;
	
	printf("Ingrese 5 valores enteros\n");
	for(int i = 0; i < 5; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < 5; i++){
		cout << "[" << arr[i] << "]";
		if(max < arr[i]){
			max = arr[i];
		}
	}
	printf("\nEl numero mayor es: %d", max);
	
	
	getch();
	return 0;
}
