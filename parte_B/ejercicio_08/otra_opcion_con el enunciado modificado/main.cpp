#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
using namespace std;

/*
Ejercicio 8: Se desea saber la temperatura media trimestral de 3 países. Para ello se tiene como dato 
las temperaturas medias mensuales de dichos países entre enero (mes 0) a diciembre (mes 11). Seleccionar 
las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.

A. Cargar por teclado los nombres de los países y las 12 temperaturas medias mensuales.
B. Imprimir nombres de los países y las 12 temperaturas medias. Ej. Rusia 28,20,10,1,-5,-12,-27,-33,-23,-8,3,13
C. Calcule temperatura promedio trimestral de cada país, para cada estación. Ej. Rusia Ene/Feb/Mar >> 19.33
D. Pida un país, e imprimir la temperatura mínima en los 4 trimestres. Ej. julio/Agosto/Septiembre -> -33 grados
E. Por cada país, imprimir el nombre y la mayor temperatura máxima registrada. Ej. Rusia -> Enero: 28 grados
*/

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "spanish");
	
	string meses[12] = {"ene", "feb", "mar", "abr", "may", "jun", "jul", "ago", "sep", "oct", "nov", "dic"},
	paises[3];
	float temp[3][12], tempT[3][4];
	
	for(int i = 0; i < 3; i++){
		cout << "Ingrese el " << i + 1 << "° pais: "; cin >> paises[i]; cout << endl;
		for(int j = 0; j < 12; j++){
			temp[i][j] = -5.0 + static_cast<float>(rand()) / RAND_MAX * (40.0 - (-5.0));
		}
	}
	
	int s;
	for(int i = 0; i < 3; i++){
		s = 0;
		for(int j = 0; j < 4; j++){
			tempT[i][j] = (temp[i][s] + temp[i][s+1] + temp[i][s+2]) / 3; 
			s += 3;	
		}
	}

	for(int i = 0; i < 3; i++){
		cout << paises[i] << endl;
		for(int j = 0; j < 12; j++){
			cout << meses[j] << " |";
		}
		cout << endl;
		cout << "------------------------------------------------------------";
		cout << endl;
		for(int j = 0; j < 12; j++){
			if(temp[i][j] >= 0.0 && temp[i][j] < 10.0){
				printf(" %.1f|", temp[i][j]);
			}else {
				printf("%.1f|", temp[i][j]);
			}
			
		}
		cout << endl;
		cout << "------------------------------------------------------------";
		if(tempT[i][0] >= 0.0 && tempT[i][0] < 10){
			printf("\n      %.1f     |", tempT[i][0]);
		}else{
			printf("\n     %.1f     |", tempT[i][0]);
		}
		if(tempT[i][1] >= 0.0 && tempT[i][1] < 10){
			printf("      %.1f     |", tempT[i][1]);
		}else {
			printf("     %.1f     |", tempT[i][1]);
		}
		if(tempT[i][2] >= 0.0 && tempT[i][2] < 10){
			printf("      %.1f     |", tempT[i][2]);
		}else {
			printf("     %.1f     |", tempT[i][2]);
		}
		if(tempT[i][3] >= 0.0 && tempT[i][3] < 10){
			printf("      %.1f     |\n", tempT[i][3]);
		}else {
			printf("     %.1f     |\n", tempT[i][3]);
		}
		cout << endl;
	}
	getch();
	return 0;
}
