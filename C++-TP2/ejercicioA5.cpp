//Desarrolle un programa que lea de la entrada estándar un vector de enteros y
//determine el mayor elemento del vector.
#include <iostream>
#include <conio.h> // Para getch()
using namespace std;
int main(){





    int n,mayor,i,j;
    cout << "Ingrese su venctor de enteros : ";
    cin >> n;
    int vector[n];

    for(i = 0 ; i < n ; ++i ){

        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
    }

    int valor_maximo = vector[0];
        for(i = 1; i < n ; ++i){
                if( vector[i] > valor_maximo ){
                    valor_maximo = vector[i];
                }

        }

        cout << "El mayor elemento del vector es: " << valor_maximo << endl;







getch();
return 0;
}

/*
La diferencia entre i++ y ++i radica en cuándo se realiza el incremento de la variable i.

i++: Este es el operador de incremento postfijo. Incrementa el valor de i, pero devuelve
el valor original de i antes de que se realice el incremento. Es decir, primero se usa
el valor actual de i y luego se incrementa.

++i: Este es el operador de incremento prefijo. Incrementa el valor de i, pero devuelve el valor
 actualizado de i después de que se realiza el incremento. Es decir, primero se incrementa i y luego se usa el nuevo valor.

*/












