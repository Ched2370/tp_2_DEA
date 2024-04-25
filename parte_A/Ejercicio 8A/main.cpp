#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) {
	
	
	// Se crea una variable nums con 5 numeros
	int array_origen[5];
	
	
	int array_destino[5];
	
	for(int i = 0; i < 5; i++) {
		cout << "Ingrese un numero al arreglo: " << endl; cin >> array_origen[i];
	}
	
	copy(array_origen, array_origen + 5, array_destino);
	
	for(int j = 0; j < 5; j++) {
		cout << "Los valores en el array de destino en el indice [" << j << "]: " << array_destino[j] << endl;
	}
	
	//
	
	getch();
	return 0;
}
