#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int suma = 0;
    
    // Rellenar la matriz
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << "Introduce el valor para la posición [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            suma += matriz[i][j]; // Acumular el valor para la suma
        }
    }
    
    // Mostrar la matriz
    cout << "La matriz es:" << endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    // Mostrar el resultado de la suma
    cout << "La suma de los valores de la matriz es: " << suma << endl;
    
    return 0;
}
