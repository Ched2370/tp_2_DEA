#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string>
#include <cstdlib> // Para la funci�n rand() y srand()
#include <ctime>   // Para la funci�n time()
using namespace std;

/* 
Ejercicio 8: Se desea saber la temperatura media trimestral de 4 pa�ses. Para ello se tiene como 
dato las temperaturas medias mensuales de dichos pa�ses.
- Se debe ingresar el nombre del pa�s y seguidamente las tres temperaturas medias mensuales.
Seleccionar las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.
A. Cargar por teclado los nombres de los pa�ses y las temperaturas medias mensuales.
B. Imprimir los nombres de los pa�ses y las temperaturas medias mensuales de las mismas.
C. Calcular la temperatura media trimestral de cada pa�s.
D. Imprimir los nombres de los pa�ses y las temperaturas medias trimestrales.
E. Imprimir el nombre del pais con la mayor temperatura media trimestral
 */

int main() {
    setlocale(LC_ALL, "spanish");
    srand(time(0));
    
    string paises[4];
    float mensual[12][3];
    float trimes[4][3] = {0}; // Inicializar con ceros para el c�lculo de la temperatura media trimestral
    float temp_max = 0; // Para almacenar la temperatura media trimestral m�xima
    string pais_max; // Para almacenar el pa�s con la temperatura media trimestral m�xima
    
    for(int i = 0; i < 4; i++){
        cout << "\nIngrese el pa�s: "; cin >> paises[i]; cout << endl;
        for(int j = 0; j < 12; j++){
            cout << "Ingrese las 3 temperaturas medias del mes " << j+1 << endl;
            for(int k = 0; k < 3; k++){
                mensual[j][k] = 1 + static_cast<float>(rand()) / RAND_MAX * 34;
                trimes[i][k] += mensual[j][k]; // Sumar las temperaturas mensuales al trimestre correspondiente
            }
        }
        
        // Calcular la temperatura media trimestral y actualizar la m�xima temperatura media
        float temp_media = 0;
        for(int k = 0; k < 3; k++){
            trimes[i][k] /= 3; // Dividir la suma de temperaturas mensuales por 3 para obtener la media trimestral
            temp_media += trimes[i][k];
        }
        temp_media /= 3; // Dividir la suma de temperaturas trimestrales por 3 para obtener la media general
        if(temp_media > temp_max){
            temp_max = temp_media;
            pais_max = paises[i];
        }
    }
    
    // Imprimir los nombres de los pa�ses y las temperaturas medias trimestrales
    cout << "\nTemperaturas medias trimestrales por pa�s:\n";
    for(int i = 0; i < 4; i++){
        cout << paises[i] << ": ";
        for(int j = 0; j < 3; j++){
            printf("%.2f ", trimes[i][j]);
        }
        cout << endl;
    }
    
    // Imprimir el nombre del pa�s con la mayor temperatura media trimestral
    cout << "\nEl pa�s con la mayor temperatura media trimestral es: " << pais_max << " (" << temp_max << " �C)" << endl;
    
    getch();
    return 0;
}

