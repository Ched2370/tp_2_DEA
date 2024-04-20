#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
using namespace std;

/* 
Ejercicio 6: Realice un programa que calcule A-suma y B-producto de 2 matrices cuadradas de 3x3
*/

int main() {
	setlocale(LC_ALL, "spanish");
	int x[3][3] = {{8,1,3},{1,7,4},{3,4,9}}, a[3][3], b[3][3];
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			a[i][j] = x[i][j] + 2;
			b[i][j] = pow(x[i][j], 2);
		}
	}
	printf("\nMatriz base X\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("[%i]", x[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz suma A\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("[%i]", a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz producto B\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("[%i]", b[i][j]);
		}
		printf("\n");
	}
	
	
	
	getch();
	return 0;
}
