//Ejemplo de una funcion que suma 2 números
#include <stdio.h>
#include <iostream>

using namespace std;

int entero1,entero2;

void sumaDosEnteros (int entero1, int entero2); //llamada a la funcion suma

int main() {
    cout<<"Bienvenidos al programa probando funciones \n";cout<<endl;
        sumaDosEnteros(entero1,entero2);
    return 0; 
}

void sumaDosEnteros (int entero1, int entero2)//Funcion suma
 {
    int resultado = 0;
    cout<<"Ingrese el priner numero: \n";
	cin>>entero1;
    cout<<"Ingrese el segundo numero: \n";
	cin>>entero2;
    resultado = entero1 + entero2;
    cout<<"Si sumamos los numeros obtenemos \n"; 
	cout<<resultado;
    return;
    
}
