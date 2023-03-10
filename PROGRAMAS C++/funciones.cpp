#include<iostream>
#include<stdlib.h>

using namespace std;


//declaramos las variables
float numero1, numero2;

//declaramos las constantes
float sumar, restar, multiplicar, dividir;

//declaramos las funciones
void pidedatos();//no parametros
void suma(float numero1, float numero2);



int main(){
	
	pidedatos();
	suma(numero1, numero2);
	
}

void pidedatos(){
	cout<<"ingrese un numero"<<endl;
	cin>>numero1;
	cout<<"ingrese un numero"<<endl;
	cin>>numero2;
	

}

void suma(float numero1, float numero2){
	sumar=numero1+numero2;
	cout<<"la suma es:" <<sumar;
}
