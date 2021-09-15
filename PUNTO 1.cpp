// Teclear el nombre de un alumno, su especialidad y sus 11 notas,
//visualizando a continuación su nota media.
#include <iostream>
#include <conio.h>

using namespace std;
int main (){
			system("color 5F");//color de pantalla

	
int i,nota[11],suman=0,suma=0;
char nombre[20], esp[50];
float media;

		cout<<"digite el nombre del estudiante N : "<<i+1<<endl;
		cin>>nombre;
		cout<<"digite la especialidad del estudiante: \n";
		cin>>esp;
		
		
		for (i=0;i<=10;i++){	
			cout<<"digite la nota N : "<<i+1<<endl;
			cin>> nota[i];	
			suman+=nota[i];
			suma=suman+nota[i];
	
		}	
		media=suma/11;
	
		cout<<"la nota media es : "<< media <<endl;
	cout<<"\nPROGRAMA CREADO POR MERCADO LAURA";

	
	getch ( );
	return 0;
}
