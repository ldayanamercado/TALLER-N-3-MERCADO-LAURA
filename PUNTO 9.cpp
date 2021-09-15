//Teclear números hasta que se responda ‘N’ a la pregunta “Teclear
//número(S/N)?”. Visualizar si es primo cada número tecleado.
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
		system("color 5F");//color de pantalla
	
	int num;
	char C[2];
	
	do{
		cout<<"teclee un numero\n";
		cin>>num;
		
			if((num%2 !=0 && num%3 !=0 && num%5 !=0 && num%7 !=0  && num%11 !=0) || (num==2 || num ==3 || num == 5 || num ==7 || num ==11)) {
				cout<<" el numero " <<num<< "es PRIMO\n";
			}else{
				cout<<" el numero " <<num<< " NO es PRIMO\n";	
			}
		cout<<"\nHacer operación (S/N)  \n";
						cin>>C;
						
					}while(strcmp(C,"S")==0);

	cout<<"\nPROGRAMA CREADO POR MERCADO LAURA";	
	getch ( );
	return 0;
}


