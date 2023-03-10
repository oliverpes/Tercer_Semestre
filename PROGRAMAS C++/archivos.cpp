#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	ofstream archivo_salida("file.txt");	
	struct persona{
		char name[80];
		char edad[50];
		char sexo[20];
		int year;
		//demas datos

		string dedomasusado;
		
	}persona, dedos, manos;
	
	//preguntamos la informacion del ususario
	cout<<"nombre"<<endl;
	//obtiene datos del usuario
	cin.getline(persona.name, 80);
	cout<<"edad"<<endl;
	cin.getline(persona.edad, 50);
	cout<<"sexo"<<endl;
	cin.getline(persona.sexo, 20);
	cout<<"en que ano nacio?"<<endl;
	cin>>persona.year;
	
	archivo_salida<<persona.name<<endl<<persona.edad<<endl<<persona.sexo<<endl<<persona.year<<endl;
	archivo_salida.close();
	return 0;
	
}
