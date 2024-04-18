#include <iostream>
#include<conio.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, matriz2[3][3];

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			matriz2[i][j] = matriz1[j][i];
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"["<<matriz2[i][j]<<"] " << " ["<<matriz2[i][j]<<"]";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
