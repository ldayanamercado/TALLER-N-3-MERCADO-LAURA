//Teclear DNI, nombre y edad de alumnos, hasta que el DNI tecleado sea
//cero. Visualizar para cada alumno si es mayor de edad o no.
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	
	int edad,DNI;
	string nombre;
	
	do{
		cout<<"digite el DNI\n";
		cin>>DNI;
		cout<<"digite el nombre\n";
		cin>>nombre;
		cout<<"digite la edad\n";
		cin>>edad;
		
		if (edad>=18){
			cout<<"el alumno es mayor de edad\n";
		}else{
			cout<<"el alumno es menor de edad\n";
		}
		
		
	}while(DNI!=0);
	
	cout<<"\nPROGRAMA CREADO POR MERCADO LAURA";
	getch ( );
	return 0;
}
