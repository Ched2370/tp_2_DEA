#include <iostream>
#include <stdio.h> // esta biblioteca es para printf() y scanf()

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Ejercicio 10: Dado un arreglo V de tamaño 20 con números enteros. Deje en un arreglo A todos los números
//negativos y en un arreglo B el doble de los positivos.


int main(int argc, char** argv) {
	
	int v [20] = {-10,10,-9,9,-8,8,-7,7,-6,6,-5,5,-4,4,-3,3,-2,2,-1,1};
	int arraypositivo [20];
	int arraynegativo [20];
	
	int indexneg = 0;
	int indexpos = 0;
	
	for (int i=0; i < 20; i++){
		if(v[i] < 0){
			arraynegativo[indexneg]=v[i];
			indexneg++;
		} else {
			arraypositivo[indexpos]=v[i]*2;
			indexpos++;
		}
	
	}
	
	printf("\ array negativo\n");
	for(int i=0; i<indexneg; i++){
		printf("[%i]",arraynegativo[i]);
	}
	
	printf("\n");
	
	printf("\ array positivo\n");
	for(int i=0; i<indexpos; i++){
		printf("[%i]",arraypositivo[i]);
	}
	
	
	return 0;
}
