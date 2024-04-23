#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Ejercicio 4: Escribe un programa que defina un arreglo de números y muestre en la salida estándar el arreglo en
//orden inverso—del último al primer elemento.


int main(int argc, char** argv) {
	
	int arreglo[] = {0,1,2,3,4,5,6};

	// imprimimos el array original
	for(int i=0; i < 7; i++){
		std::cout << "[" << i << "] el numero es " << arreglo[i] << std::endl;
	}
	std::cout << "imprimimos el arreglo en orden inveros" << std::endl;
	// imprimimos el arreglo en orden inveros
	for (int i=6; i>=0; i--){
		std::cout << "[" << i << "] el numero es " << arreglo[i] << std::endl;
	}
	
	
	return 0;
}
