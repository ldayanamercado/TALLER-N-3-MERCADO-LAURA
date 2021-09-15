//Teclear el dni (numérico) y la edad de una serie de personas hasta
//responder ‘N’ a la pregunta “Introducir datos (S/N)?”. Visualizar al final el dni
//y la edad de la persona de mayor edad.
//Teclear el dni (numérico) y la edad de una serie de personas hasta
//responder ‘N’ a la pregunta “Introducir datos (S/N)?”. Visualizar al final el dni
//y la edad de la persona de mayor edad.

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main ( ) {
	
	int DNI,i,edad,edmayor=0,DNIP;
	char C[2];
	
		do{
			cout<<"tecle su DNI\n";
			cin>>DNI;
			cout<<"teclee su edad\n";
			cin>>edad;
			 if(edad>edmayor) {
			 	edmayor=edad; 
			 	DNIP=DNI;
			
			 }
			
			
			cout<<"\n introducir Datos (S/N)  \n";
			cin>>C;
			} while(strcmp(C,"S")==0);
			
			cout<<"La edad mayor es:"<<edmayor<< " y su DNI es: "<<DNIP<< endl; 
			
		
	
	cout<<"\nprograma creado por Laura Mercado";
	getch ( );
	return 0;
}
