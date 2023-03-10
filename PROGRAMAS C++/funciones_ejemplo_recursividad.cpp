#include<iostream>
#include<stdlib.h>

using namespace std;

//declaramos las funciones
void pidedatos();
void sumadatos();

//declaramos las variables
int array[5];
int sumar, dato;


 int main(){
 	
 	pidedatos();
 	sumadatos();
 	
 }
 
 void pidedatos(){
 	
 	cout<<"ingrese 10 datos numerico"<<endl;
 	for (int i=0; i<=5; i++){
 		cout<<"ingrese datos numerico"<<endl;
 		cin>>array[i];
	 }
 	 
 	
 }
 
 void sumadatoss(){
 	
 	sumar=array[0]+array[2];
 	cout<<sumar;
 }
 
 
 //int array[0], int array[1]
