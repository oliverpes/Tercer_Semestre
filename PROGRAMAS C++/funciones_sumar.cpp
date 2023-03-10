#include <stdio.h>
#include <iostream>

using namespace std;

//Prototipo de Funcion
void pedirDatos();
void sumaDosNumeros(float numero1,float numero2);


float numero1,numero2;


int main() {
    cout<<"Bienvenidos al programa probando funciones \n";cout<<endl;
    pedirDatos();
    sumaDosNumeros(numero1, numero2);
    
    return 0; 
}
void pedirDatos(){
	cout<<"Ingrese el priner numero: \n";
	cin>>numero1;
                           cout<<"Ingrese el segundo numero: \n";
	cin>>numero2;
}
 void sumaDosNumeros (float numero1, float numero2)//Funcion suma
 {
    float resultado = 0;
    resultado = numero1 + numero2;
    cout<<"Si sumamos los numeros obtenemos \n"; 
	cout<<resultado;
    return;
    
}
