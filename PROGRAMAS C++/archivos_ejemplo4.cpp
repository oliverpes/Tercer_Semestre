#include <fstream>
#include <iostream>

using namespace std;

int main () 
{
  ofstream ejemplo2("ejemplo2.txt");
  if (ejemplo2.is_open()) { 
      ejemplo2 <<"Bienvenidos\n";
      ejemplo2 << "Al curso de Programacion 1 \n";
      ejemplo2.close();
   }
   return 0;
}
