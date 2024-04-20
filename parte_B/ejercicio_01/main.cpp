#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
using namespace std;

/* 
Ejercicio 1: Se tiene la siguiente información:
· Nombres de 4 empleados.
· Ingresos en concepto de sueldo, cobrado por cada 
empleado, en los últimos 3 meses.
ESTRUCTURAS DE DATOS Y ALGORITMOS AÑO 2024
 2
Confeccionar el programa para:
a) Realizar la carga de la información mencionada.
b) Generar un arreglo que tenga el ingreso acumulado en sueldos en los últimos 3 meses para cada empleado.
c) Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses
d) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado
*/

int main() {
	setlocale(LC_ALL, "spanish");
	string nombres[4] = {"Marcos  ", "Ana     ", "Luis    ", "Maria   "};
	float sueldoTotal[4];
	float sueldos[4][3] = 
	{{540.0, 540.0, 760.0},
	{200.0, 220.0, 250.0},
	{760.0, 760.0, 760.0},
	{605.0, 799.0, 810.0}};
	
	for(int i = 0; i < 4; i++){
		sueldoTotal[i] = sueldos[i][0] + sueldos[i][1] + sueldos[i][2];
	}
	
	float totalPagado = 0; 
	int empleado = 0;
	for(int i = 0; i < 4; i++){
		totalPagado += sueldoTotal[i];
		if(sueldoTotal[i] > sueldoTotal[empleado]){
			empleado = i;
		}
	}
 
	printf("EMPLEADO|      SUELDOS       |TOTAL|\n");
	printf("------------------------------------\n");
	for(int i = 0; i < 4; i++){
		cout << nombres[i] << "|";
		for(int j = 0; j < 3; j++){
			cout << "   " <<sueldos[i][j] << "|";
		}
		if(sueldoTotal[i] < 1000){
			cout << "  " << sueldoTotal[i] << "|" << endl;
		}else {
			cout << " " << sueldoTotal[i] << "|" << endl;			
		}
	}
	printf("------------------------------------\n");
	printf("Total de sueldos pagados:    %.1f|\n", totalPagado);
	printf("------------------------------------\n");
	if(empleado == 0){
		printf("sueldo total mas alto:Marcos %.1f|\n", sueldoTotal[0]);
	}else if(empleado == 1){
		printf("sueldo total mas alto:Ana %.1f   |\n", sueldoTotal[1]);
	}else if(empleado == 2){ 
		printf("sueldo total mas alto:Luis %.1f  |\n", sueldoTotal[2]);
	}else if(empleado == 3){
		printf("sueldo total mas alto:Maria %.1f |\n", sueldoTotal[3]);
	}
	printf("------------------------------------\n");
	getch();
	return 0;
}
