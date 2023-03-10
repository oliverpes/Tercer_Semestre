#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

//vars
int personas;

int main(){
	
	ofstream archivo("ejercicio.txt");
	
	struct Personal{
		char nombre[50];
		char sexo[50];
		int edad;
	};
	
	
	//pedimos datos
	cout<<"ingrese cantidad de personas?"<<endl;
	cin>>personas;
	
	//vector
	vector<Personal> personal(personas);
	
	//obetenemos los datos de las personas
	for (int i=0;i<personas;i++){
		
		cout<<"ingrese nombre"<<endl;
		cin>>personal[i].nombre;
		cout<<"ingrese sexo"<<endl;
		cin>>personal[i].nombre;
		cout<<"ingrese edad"<<endl;
		cin>>personal[i].edad;	
		
		archivo<<persona[i].nombre<<endl;
		archivo<<persona[i].sexo<<endl;
		archivo<<persona[i].edad;
	};
	//cerramos el programa
	archivo.close();
	
	
		
	//validamos los datos
	
	
		

	
}
