#include <fstream>  // Para ofstream
#include <iostream> // Para cout
using namespace std;

int main()
{
  fstream fich("ejemplo.dat");
  if (!fich)
  {
    cout << "Error al abrir ejemplo.dat\n";
    fich.close();
  }

  for (int i = 1; i < 11; ++i)
    fich << i << endl;
}
