#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int n, contador, n1, n2, n3,n4;


int main(){

cout<<"ingrese la nota de algebra";
	cin>>n1;
	cout<<"ingrese la nota de contabilidad";
	cin>>n2;
	cout<<"ingrese la nota de algortimos";
	cin>>n3;
	n4=(n1+n2+n3)/3;
	cout<<n4;

if (n4>=60){
	n =100;
contador=0;

while(contador<n){
	cout<<"/";
	cout<<"GANO!!";
	contador++;
}
	
}else{
	n =100;
contador=0;

while(contador<n){
	cout<<"/";
	cout<<"PERDIO!!!";
	contador++;
}
}



}

