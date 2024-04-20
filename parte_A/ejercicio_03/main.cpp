#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int numeros[100], n;
	
	cout<<"¿Cuantos numeros quieres incluir en el vector?"<<endl; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Introduce numero para indice ["<<i<<"] del vector: "; cin>>numeros[i];
	}
	
	cout<<"\nRESULTADO: "<<endl;
	
	for(int i=0; i<n; i++){
		cout<<"El indice ["<<i<<"] es: "<<numeros[i]<<endl;
	}
	
	return 0;
}
