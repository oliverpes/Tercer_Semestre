#include <fstream>  // Para ifstream
#include <iostream> // Para cout
#include <vector>
using namespace std;
void muestra_vector(const vector<int>&);
int main()
{
  ifstream fich("ejemplo.dat");
  if (!fich.is_open())
  {
    cout <<"Error al abrir ejemplo.dat\n";
    
  }
  int num_elementos;
  fich >> num_elementos;
  vector<int> datos;
  datos.reserve(num_elementos);
  for (int i = 0; i < num_elementos; ++i)
  {
    int valor;
    fich >> valor;
    datos.push_back(valor);
  }
  muestra_vector(datos);
}
void muestra_vector(const vector<int>& v)
{
  /*for (auto x : v)
    cout << x << " ";
  cout << endl;*/

  for (int auto==0;auto<=v;auto++){
  	cout << x << " ";
  cout << endl;
  }
}
