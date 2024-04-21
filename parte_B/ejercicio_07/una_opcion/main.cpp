#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

/*
Ejercicio 7: Desarrollar un programa que determine si una matriz es simétrica o no. 
Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.
*/

const int MAX_FIL = 100;
const int MAX_COL = 100;

int main() {
    setlocale(LC_ALL, "spanish");
	int filas, columnas;
    
    cout << "Ingrese el número de filas de la matriz: "; cin >> filas;
    cout << "Ingrese el número de columnas de la matriz: "; cin >> columnas;
    
    if (filas != columnas) {
        cout << "La matriz no es cuadrada, por lo tanto no puede ser simétrica." << std::endl;
        return 1;
    }
    
    int matriz[MAX_FIL][MAX_COL];

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: "; cin >> matriz[i][j];
        }
    }

    bool esSimetrica = true;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (matriz[i][j] != matriz[j][i]) {
                esSimetrica = false;
                break;
            }
        }
        if (!esSimetrica) break;
    }

    if (esSimetrica)
        cout << "La matriz es simétrica." << endl;
    else
        cout << "La matriz no es simétrica." << endl;
    
    getch();
    return 0;
}

