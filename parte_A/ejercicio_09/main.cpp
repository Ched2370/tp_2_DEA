#include <iostream>
#include <conio.h>

using namespace std;

/*
Ejercicio 9: Se tiene el arreglo A con 100 elementos almacenados. Diseñe un algoritmo que escriba ¨SI¨, si el arreglo
esta ordenado ascendentemente, o ¨NO¨ si el arreglo no está ordenado
*/

int main(int argc, char** argv) {
    int vector[100], contador = 0;

    for(int i = 0; i < 100; i++) {
        vector[i] = i;
    }

    for(int i = 1; i < 100; i++) {
        if(vector[i] < vector[i-1]) {
            contador += 1;
            break; 
        }
    }
    
    cout << "El vector es ascendente?" << endl;
    if(contador > 0) {
        cout << "NO" << endl;
    } else {
        cout << "SI" << endl;
    }
    
    getch();
    return 0;
}


