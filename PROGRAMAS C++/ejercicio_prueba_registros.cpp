#include <iostream>
#include <string>

using namespace std;

struct Profesor {
    string nombre;
    int edad;
};

int main() {
    const int numProfesores = 5;
    Profesor profesores[numProfesores] = {
        {"Juan", 32},
        {"Pedro", 28},
        {"María", 45},
        {"Luisa", 37},
        {"Carlos", 29}
    };

    int sumaEdades = 0;
    Profesor profesorMasJoven = profesores[0];

    for (int i = 0; i < numProfesores; i++) {
        sumaEdades += profesores[i].edad;

        if (profesores[i].edad < profesorMasJoven.edad) {
            profesorMasJoven = profesores[i];
        }
    }

    float promedioEdades = static_cast<float>(sumaEdades) / numProfesores;

    cout << "Edad promedio: " << promedioEdades << endl;
    cout << "Profesor más joven: " << profesorMasJoven.nombre << endl;

    return 0;
}
