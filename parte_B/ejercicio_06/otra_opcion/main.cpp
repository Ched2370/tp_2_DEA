#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Ejercicio 6: Realice un programa que calcule A-suma y B-producto de 2 matrices cuadradas de 3x3.


int main(int argc, char** argv) {
	int matrizA[3][3] = {{1,0,2},{0,3,1},{1,4,-1}};
	int matrizB[3][3] = {{0,0,3},{1,2,5},{-1,0,1}};
	int matrizC[3][3];
	int matrizD[3][3];
	
	// muestra matriz A
	printf("\nMatriz A\n");
	for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
			printf("[%i]", matrizA[i][j]);
		}
		printf("\n");
	}
	
	
	// muestra matriz A
	printf("\nMatriz B\n");
	for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
			printf("[%i]", matrizB[i][j]);
		}
		printf("\n");
	}
	
	// suma
	printf("\nSuma\n");
	for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
			printf("[%i]", matrizC[i][j]);
		}
		printf("\n");
	}
	
	//producto de matrices
		printf("\nProducto\n");
	for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
			matrizD[i][j] = 0;
				for (int k = 0; k < 3; k++){
					matrizD[i][j] += matrizA[i][k] * matrizB[k][j];
				}
		}
	}
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
			printf("[%i]", matrizD[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
