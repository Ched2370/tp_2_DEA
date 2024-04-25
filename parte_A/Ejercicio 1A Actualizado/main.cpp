#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	int numeros[6];
  	int i = 0;

  while (i < 6) {
    if (i % 2 == 0) {
      numeros[i] = i * 2;
    } else {
      numeros[i] = -i; // Se elimina el -1
    }
    i++;
  }

  // Se calcula la suma de pares
  int sumaPares = 0;
  i = 0;
  while (i < 6) {
    sumaPares += abs(numeros[i]);
    i += 2;
  }

  // Se calcula la suma de impares
  int sumaImpares = 0;
  i = 1;
  while (i < 6) {
    sumaImpares += abs(numeros[i]);
    i += 2;
  }


  cout << "Arreglo: ";
  for (int i = 0; i < 6; i++) {
    cout << numeros[i] << " ";
  }
  cout << endl;
  cout << "Suma de numeros pares: " << sumaPares << endl;
  cout << "Suma de numeros impares: " << sumaImpares << endl;

  return 0;
}
