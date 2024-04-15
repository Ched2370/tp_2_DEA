#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string>
#include <iomanip> 
#include <math.h> // por si el dato sale nan
#include <conio.h> // pausa al terminar de cargar los datos
using namespace std;

/* 
Ejercicio 8: Se desea saber la temperatura media trimestral de 4 países. Para ello se tiene como 
dato las temperaturas medias mensuales de dichos países.
- Se debe ingresar el nombre del país y seguidamente las tres temperaturas medias mensuales.
Seleccionar las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.
A. Cargar por teclado los nombres de los países y las temperaturas medias mensuales.
B. Imprimir los nombres de los países y las temperaturas medias mensuales de las mismas.
C. Calcular la temperatura media trimestral de cada país.
D. Imprimir los nombres de los países y las temperaturas medias trimestrales.
E. Imprimir el nombre de la provincia con la mayor temperatura media trimestral.
*/

int main(int argc, char** argv) {
	setlocale(LC_ALL, "spanish");
	srand(time(NULL));
	
    
    string paises[4] = {"Argentina", "Brasil", "Paraguay", "Chile"};
    string meses[12] = {"ene", "feb", "mar", "abr", "may", "jun", "jul", "ago", "sep", "oct", "nov", "dic"};
    float temp, aux1 = 0, tresMediasM[3][12], mediaM[12], mediaT[4][3];

    for(int i = 0; i < 4; i++){
    	// cargo el pais
        cout << paises[i] << endl;
        cout << "--------------------------------------------------------------------" << endl;
        // cargo los meses como cabecera
        for(int j = 0; j < 12; j++){
        	if(j == 0){
        		cout << "       |";
			}
            cout << meses[j] << " |";
        }
        cout << endl;
        cout << "--------------------------------------------------------------------" << endl;
        // cargo datos y los imprimo - 3 temperaturas x mes
        for(int j = 0; j < 3; j++){
        	cout << j+1 << "° temp|";
        	for(int k = 0; k < 12; k++){
        		temp = (static_cast<float>(rand()) / RAND_MAX) * 30.0; // numeros aleatorios con decimales
        		tresMediasM[j][k] = temp;
        		if(tresMediasM[j][k] >= 0 && tresMediasM[j][k] < 10.0){
        			cout << fixed << setprecision(1) << tresMediasM[j][k] << " |";
				}else{
					cout << fixed << setprecision(1) << tresMediasM[j][k] << "|";
				}
			}
				cout << endl;
			}

		cout << "--------------------------------------------------------------------" << endl;
		// carga de las medias mensuales
		for(int j = 0; j < 12; j++){
			aux1 = (tresMediasM[0][j] + tresMediasM[1][j] + tresMediasM[2][j]) / 3;
			mediaM[j] = aux1;			
		}
		// imprimo los datos de la media de cada mes
		cout << "med men|";
		for(int j = 0; j < 12; j++){
			if(mediaM[j] >= 0 && mediaM[j] < 10.0 || isnan(mediaM[j])){
				cout << fixed << setprecision(1) << mediaM[j] << " |";
			}else{
				cout << fixed << setprecision(1) << mediaM[j] << "|";	
			}			
		}
		cout << endl;
		cout << "--------------------------------------------------------------------" << endl;
		// carga de datos trimestrales
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 12; k++){
				if(k == 0 && j == 0){
					mediaT[i][j] = (mediaM[k] + mediaM[k+1] + mediaM[k+2] + mediaM[k+3]) / 4;
				}else if(k == 4 && j == 1){
					mediaT[i][j] = (mediaM[k] + mediaM[k+1] + mediaM[k+2] + mediaM[k+3]) / 4;
				}else if(k == 8 && j == 2){
					mediaT[i][j] = (mediaM[k] + mediaM[k+1] + mediaM[k+2] + mediaM[k+3]) / 4;
				}
			}
		}
		cout << "med tri|";
		// imprimo datos trimestrales
		for(int j = 0; j < 3; j++){
			if(mediaT[i][j] >= 0 && mediaT[i][j] < 10 || isnan(mediaT[i][j])){
				cout << "        " << mediaT[i][j] << "        |";
			}else{
				cout << "        " << mediaT[i][j] << "       |";	
			}			
		}

		cout << endl;
		cout << "--------------------------------------------------------------------" << endl;
        cout << endl;
    } 

	// mayor temperatura media trimestral
    float max = mediaT[0][0], fila;
    
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (mediaT[i][j] > max) {
                max = mediaT[i][j];
                fila = i;
            }
        }
    }
    
    string pais;
    if(fila == 0){
    	pais = "Argentina";
	}else if(fila == 1){
    	pais = "Brasil";
	}else if(fila == 2){
    	pais = "Paraguay";
	}else if(fila == 3){
    	pais = "Chile";
	}
    
	printf("El país con la media trimestral más alta es %s con %.1f°C ", pais.c_str(), max);

    
	getch();
	return 0;
}
