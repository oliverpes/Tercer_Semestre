#include<iostream>
#include<string>
#include<fstream>

using namespace std;

//declaramos las variables de la structura
struct empleados_derecho{
	char nombre[20];
	
}empleados;


//creamos la funcion principal
int main(){
fstream archivo("prueba.txt");//creamos el archivo

//ingresamos lo datos de la estructura
cin.getline(empleados.nombre, 20);

//mostramos los datos en la consola
//ponemos los datos del archivo en pantalla
cout<<empleados.nombre;
//add modules to the archive
archivo<<empleados.nombre<<endl;
archivo.close();//cerramos el archivo
archivo>>empleados.nombre;
return 0;	
	
}
