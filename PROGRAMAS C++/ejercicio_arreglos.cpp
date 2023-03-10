#include<iostream>
#include<stdlib.h>

using namespace std;


int numeros[100][100], filas, columnas, suma;

int main(){
	cout<<"se muestra una matriz de 3*3, favor ingrese los datos que desee"<<endl;	
	
	
filas=3;
columnas= 3;

//Rellenando la matriz
for(int i=0;i<filas;i++){
	
	for(int j=0;j<columnas;j++){
	cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
	cin>>numeros[i][j];
	suma += numeros[i][j]; //sumamos los datos de la matriz
	}
}

cout<<"\nMostrando matriz\n\n";

for(int i=0;i<filas;i++){
	for(int j=0;j<columnas;j++){
	cout<<numeros[i][j];
	}
cout<<"\n";

}

cout<<"suma de los datos de la matriz es "<<suma;//mostramos los resultados
return 0;
	
}
