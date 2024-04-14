#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
using namespace std;

/* Ejercicio 10: Hacer un array bidimensional que acepte nueve números, luego, pedir al usuario que 
ingrese las coordenadas (x,y) para mostrar el elemento guardado en dicha posición. */

int main() {
	srand(time(NULL));
	int matrix[3][3];
	int x, y;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			matrix[i][j] = rand() % 10;
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("[%d]", matrix[i][j]);
		}
		printf("\n");
	}
	printf("Indique la ubicacion x y que desea revisar:\n");
	scanf("%d %d", &x, &y);
	if(x < 3 && x >= 0 && y < 3 && y >= 0){
		printf("valor guardado en la matriz[%d][%d] es %d.", x, y, matrix[x][y]);
	}else{
		printf("Has ingresado un valor incorrecto");
	}
	getch();
	return 0;
}
