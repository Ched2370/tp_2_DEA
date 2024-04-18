#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int vector[100], contador = 0;
	
	for(int i=100; i >= 0; i--){
		vector[i] = i;
	}
	
	for(int i=0; i<100; i++){
		if(vector[i] <= vector[i-1]){
			contador += 1;
		}
	}
		
	cout<<"¿El vector esta ordenado ascendentemente?"<<contador<<endl;	

	if(contador>0){
		cout<<"\nNO";
	}else{
		cout<<"\nSI";

	}
		
	return 0;
}
