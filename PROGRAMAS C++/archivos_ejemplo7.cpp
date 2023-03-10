//Agrega texto al final del archivo

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void agregar();

int main(){
	agregar();
	
	return 0;
}

void agregar(){
	ofstream archivo;
	string texto;
	
	
	archivo.open("ejemplo2.txt",ios::app); //Abrimos el archivo en modo añadir
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	cout<<"Ingrese el texto que desee agregar: ";
	getline(cin,texto);
		
	archivo<<texto<<endl;
		
	archivo.close();
}
