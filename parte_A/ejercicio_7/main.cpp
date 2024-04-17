#include <iostream>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Defino los dos vectores
    char primer_array[] = {'a', 'b', 'c'};
    char segundo_array[] = {'x', 'y', 'z'};

    // Convierto los arrays en vectores
    vector<char> primer_vector(primer_array, primer_array + sizeof(primer_array) / sizeof(primer_array[0]));
    vector<char> segundo_vector(segundo_array, segundo_array + sizeof(segundo_array) / sizeof(segundo_array[0]));

    // Defino el nuevo vector que contendrá los elementos de los dos vectores
    vector<char> nuevo_vector;

    // Copio los elementos del primer vector al nuevo vector
    for (size_t i = 0; i < primer_vector.size(); ++i) {
        nuevo_vector.push_back(primer_vector[i]);
    }

    // Copio los elementos del segundo vector al nuevo vector
    for (size_t i = 0; i < segundo_vector.size(); ++i) {
        nuevo_vector.push_back(segundo_vector[i]);
    }

    // Muestro el contenido del nuevo vector en la salida estándar
    cout << "Contenido del nuevo vector: ";
    for (size_t i = 0; i < nuevo_vector.size(); ++i) {
        cout << nuevo_vector[i] << " ";
    }
    cout << endl;

    return 0;
}
