#include <stdio.h>
#include <locale.h>
#include <conio.h>

/* 
Ejercicio 2: Realiza un programa que defina una matriz de NxN y escriba un ciclo para que muestre 
la diagonal principal de la matriz. El número N es un valor válido entre 3 a 7.
 */

int main() {
	setlocale(LC_ALL, "spanish");
	
	int n = 0;
	printf("Ingrese un numero entero entre 3 y 7\n");
	
	do{
		scanf("%d", &n);
		if(n < 3 || n > 7){
			printf("Has ingresado un valor invalido (%d)\nVuelve a intentarlo\n\n", n);
			printf("Ingrese un numero entero entre 3 y 7\n");
		}
	}while(n < 3 || n > 7);// No pasa si no coloca un valor correcto

	int num[n][n], v;
	
	// cargamos con valores la matriz
	for(int i =0; i < n; i++){
		for(int j =0; j < n; j++){
			printf("Ingrese el valor de [%d][%d]\n", i, j);
			scanf("%d", &v);
			num[i][j] = v;
		}
	}
	
	// imprimimos la diagonal principal de la matriz
	printf("\n\tDiagonal principal\n");;
	for(int i =0; i < n; i++){
		for(int j =0; j < n; j++){
			if(i == j){
				printf("[%d]", num[i][j]);				
			}else{
				printf("    ");
			}
		}
		printf("\n");
	}
	getch();
	return 0;
}
