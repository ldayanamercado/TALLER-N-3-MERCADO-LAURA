//Introducir una serie de caracteres hasta que se pulse la tecla “Escape” y
//visualizar cuántas veces se ha tecleado cada una de las vocales.
#include <conio.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
	
	char c;
	int contA=0,contE=0,contI=0,contO=0,contU=0;

	do{
	
		cout<<"\ndigite un caracter\n";	
		c = getche();
		cout<<"    ";
		switch(c) {
			case 'a':
				contA+=1;
				break;	
			case 'e':
				contE+=1;
				break;
			case 'i':
				contI+=1;
				break;		
			case 'o':
				contO+=1;
				break;	
			case 'u':
				contU+=1;
				break;	
			default:
			 cout<<"Presione cualquier tecla para continuar ESC para salir\n";
			 break;
		}
		 	
	}while((c = getch()) !=27);
	
			cout <<"la cantidad de a que se han tecleado son :"<< contA<<endl ;
			cout <<"la cantidad de e  que se han tecleado son :"<< contE<<endl ;
			cout <<"la cantidad de i  que se han tecleado son :"<< contI<<endl ;
			cout <<"la cantidad de o  que se han tecleado son :"<< contO<<endl ;
			cout <<"la cantidad de u  que se han tecleado son :"<< contU<<endl ;
	
	cout<<"\nPROGRAMA CREADO POR LAURA MERCADO";
	getch ();
	return 0;
}
