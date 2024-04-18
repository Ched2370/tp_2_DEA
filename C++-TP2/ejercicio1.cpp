#include <iostream>
#include <conio.h> // Para getch()

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> n;

    int vector[n];
    cout << "Ingrese los elementos del vector:\n";

    // Llenar el vector
    int i = 0;
    while (i < n) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
        i++;
    }

    // Calcular la suma de los elementos
    int suma = 0;
    i = 0;
    while (i < n) {
        suma += vector[i];
        i++;
    }

    // Mostrar la suma
    cout << "La suma de los elementos del vector es: " << suma << endl;

    // Esperar a que el usuario presione una tecla antes de salir
    cout << "Presione cualquier tecla para salir...";
    getch();

    return 0;
}

