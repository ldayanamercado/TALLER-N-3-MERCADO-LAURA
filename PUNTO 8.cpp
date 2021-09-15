// Teclear el nombre y las 11 notas de una serie de alumnos, hasta que se
//responda ‘N’ a la pregunta “Teclear alumno (S/N)?”. Deberá visualizarse el
//nombre y la nota media para cada alumno.

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main ( ){	
		string nombre;
		char C[2];			
		float  nota[10],media;
		int i,suman=0,suma=0;
	do{
		cout<<"escriba el nombre\n";
		cin>>nombre;
			
			for(i=0;i<=10;i++){
				cout<<"escriba la nota N " << i+1<<endl;
				cin>>nota[i];
			suman+=nota[i];
			suma=suman+nota[i];
	
		}	
		media=suma/11;
		cout<<"la nota media es : "<< media <<endl;
		
		     // strcmp(a,b)=0 = compaaracion de nombres
	
						cout<<"\nHacer operación (S/N)  \n";
						cin>>C;
						
					}while(strcmp(C,"S")==0);
					
 	cout<<"\nPROGRAMA CREADO POR MERCADO LAURA";
	getch ( );
	return 0;
}
