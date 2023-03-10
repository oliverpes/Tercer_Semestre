#include<string.h>
#include<fstream>
using namespace std;

void lectura();

int main(){
	lectura();
	
	return 0;
}

void lectura(){
	ifstream archivo;
	string texto;
	
	archivo.open("ejemplo2.txt",ios::in);//Abrimos el archivo para lectura
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //mientras no sea final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close(); //Cerramos el archivo
}
