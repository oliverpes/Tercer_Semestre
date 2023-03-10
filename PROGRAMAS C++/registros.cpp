#include<iostream>
#include<fstream>
#include<string>

using namespace std;
//declaramos la variables
string nombre;

int main(){
	///ingresamos las variables 
	cout<<"ingrese su nombre"<<endl;	
	cin>>nombre;
	
	//generamos la estructura de datos
	struct datospersona{
		string nombre;
		char inicial;
		int edad;
		float altura;
		float cnota;
	};
	
	//declaramos los datos
	datospersona persona;
	persona.nombre=nombre;
	persona.edad=50;
	persona.inicial='f';
	
	
	cout<<"el nombre es: "<<persona.nombre<<endl;	
	cout<<"la inicial es: "<<persona.inicial<<endl;
	
	return 0;
}
