#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
int numeros[100][100],filas,columnas, suma;

cout<<"Digite el numero de filas: "; cin>>filas;
cout<<"Digite el numero de columnas: "; cin>>columnas;



filas=2;
columnas= 2;

//Rellenando la matriz
for(int i=0;i<filas;i++){
	
	for(int j=0;j<columnas;j++){
	cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
	cin>>numeros[i][j];
	suma += numeros[i][j];
	}
}

cout<<"\nMostrando matriz\n\n";

for(int i=0;i<filas;i++){
	for(int j=0;j<columnas;j++){
	cout<<numeros[i][j];
	}
cout<<"\n";
}
cout<< suma;
return 0;
}
