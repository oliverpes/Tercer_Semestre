#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	
	//nominas
	//inventarios
	//proveedores
	//
	
	ofstream archivo_salida("");
	struct persona{
		char name[80];
	}persona;
	cout<<"nombre";
	cin.getline(persona.name, 80);
	archivo_salida<<persona.name<<endl;
	archivo_salida.close();
	return 0;
		
}
