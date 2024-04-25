#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) {
	
	int M1[2][2] = {{2, 3}, {4, 5}};
  	int M2[2][2];

  // Se copia M1 a M2 sumando 1 a cada numero
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      M2[i][j] = M1[i][j] + 1;
    }
  }

  // Se imprimen las matrices
  cout << "Matriz M1:" << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << M1[i][j] << " ";
    }
    cout << endl;
  }

  cout << "\nMatriz M2:" << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << M2[i][j] << " ";
    }
    cout << endl;
  }

  getch();
  return 0;
}
