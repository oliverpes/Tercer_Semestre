#include <iostream>
#include <string>
using namespace std;

struct Profesor {
  string nombre;
  int edad;
};

int main() {
  const int num_profesores = 5;
  Profesor profesores[num_profesores] = {{"JOSHUA", 19}, {"OLIVER", 21}, {"BRAYAN", 22}, {"LUIS", 22}, {"PABLO", 20}};

  // Calcular la edad promedio del grupo de profesores
  int suma_edades = 0;
  for (int i = 0; i < num_profesores; i++) {
    suma_edades += profesores[i].edad;
  }
  double edad_promedio = (double)suma_edades / num_profesores;
  cout << "La edad promedio del grupo de profesores es " << edad_promedio << endl;

  // Encontrar el profesor más joven del grupo
  Profesor profesor_mas_joven = profesores[0];
  for (int i = 1; i < num_profesores; i++) {
    if (profesores[i].edad < profesor_mas_joven.edad) {
      profesor_mas_joven = profesores[i];
    }
  }
  cout << "El profesor más joven del grupo es " << profesor_mas_joven.nombre << endl;

  return 0;
}
