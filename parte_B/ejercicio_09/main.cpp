#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

/*
Ejercicio 9: Hacer un programa en C++ que muestre en pantalla un tablero de ajedrez con:
1. - Los peones con la letra P. 
2. - Las torres con la letra T.
3. - Los caballos con la letra C.
4. - Los alfiles con la letra A.
5. - El rey con la letra K.
6. - La reina con letra Q.
• Mover el peón en la casilla diagonal al alfil Tablero [1][4], y mostrar el tablero resultante. 
• Repetir esto, para el alfil en [0][5], solo podría salir si el peón se ha movido, sino informarlo.
*/
void mover(int turno){
	char casilla[8][8];

	  for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(i == 1 || i == 6){
                casilla[i][j] = 'P';
            } else if(i == 0 && j == 0 || i == 7 && j == 7 || i == 7 && j == 0 || i == 0 && j == 7){
                casilla[i][j] = 'T';
            } else if(i == 0 && j == 1 || i == 7 && j == 1 || i == 0 && j == 6 || i == 7 && j == 6){
                casilla[i][j] = 'C';
            }else if(i == 0 && j == 2 || i == 7 && j == 2 || i == 0 && j == 5 || i == 7 && j == 5){
                casilla[i][j] = 'A';
            }else if(i == 0 && j == 4 || i == 7 && j == 4){
                casilla[i][j] = 'Q';
            }else if(i == 0 && j == 3 || i == 7 && j == 3){
                casilla[i][j] = 'K';
            }else{
				casilla[i][j] = '.';	 
            }
        }
        if(turno == 1){
        	casilla[1][4] = '.';
        	casilla[3][4] = 'P';
		}
		if(turno == 2){
			casilla[1][4] = '.';
        	casilla[3][4] = 'P';
        	casilla[6][4] = '.';
        	casilla[4][4] = 'P';
		}
		if(turno == 3){
			casilla[1][4] = '.';
        	casilla[3][4] = 'P';
        	casilla[6][4] = '.';
        	casilla[4][4] = 'P';
        	casilla[0][5] = '.';
        	casilla[3][2] = 'A';
		}
    }
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout << casilla[i][j] << " ";
        }
        cout << endl;
    }
	cout << "Presione una tecla para mostrar el siguiente movimiento..." << endl;
	turno ++;
	getch();
}


int main() {
	cout << "blancas arriba, negras abajo" << endl;
	
  	mover(0); // piezas acomodadas
  	mover(1); // peon rey blanco 2 lugares
  	mover(2); // peon rey negro 2 lugares
  	mover(3); // alfil rey blanco 3 lugares
  	cout << "Presione una tecla para finalizar..." << endl;
  	getch();
    return 0;
}


