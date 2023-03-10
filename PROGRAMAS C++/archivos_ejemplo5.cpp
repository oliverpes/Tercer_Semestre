#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream archivo_salida("file.txt");    // Se abre el archivo para escribir.
    struct _persona                         // Tu estructura
    {
        char name[80];
        // Demas datos
    } persona;
    cout << "Nombre : ";
    cin.getline(persona.name, 80);              // Se almacena en la variable
    archivo_salida << persona.name << endl;     // Se escribe en el archivo
    archivo_salida.close();                     // Se cierra el archivo
    return 0;
}
n
