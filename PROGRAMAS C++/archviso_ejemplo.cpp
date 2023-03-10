#include <iostream>
#include <string>
using namespace std;

int main()
{
struct datosPersona
{
string nombre;
char  inicial;
int   edad;
float nota;
};
datosPersona persona;

persona.nombre = "Juan";
persona.inicial = 'J';
persona.edad = 20;
persona.nota = 7.5;
cout << "El nombre es " << persona.nombre << endl;
cout << "La edad es " << persona.edad << endl;
cout << "La inicial es " << persona.inicial << endl;
cout << "La nota es " << persona.nota << endl;

return 0;
}
