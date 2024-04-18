#include <iostream>
#include <vector>
#include <cstdlib> // Para srand y rand
#include <ctime>   // Para time

using namespace std;

// Funcion para generar numeros aleatorios en un rango especifico
int generarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    // Semilla para la generacion de numeros aleatorios
    srand(time(0));

    int filas, columnas;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

    // Defino y lleno la matriz original con numeros aleatorios
    vector<vector<int> > matrizOriginal(filas, vector<int>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matrizOriginal[i][j] = generarNumeroAleatorio(1, 100); // Rango de numeros aleatorios: 1 a 100
        }
    }

    // Defino la matriz copia y copio el contenido de la matriz original
    vector<vector<int> > matrizCopia(matrizOriginal);

    // Muestro la matriz copia en pantalla
    cout << "Matriz copia:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matrizCopia[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

