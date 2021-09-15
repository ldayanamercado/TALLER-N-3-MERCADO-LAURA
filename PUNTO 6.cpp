// Teclear el nombre de alumno y su nota entera (0 a 10) para 10 alumnos.
//Para cada alumno deberá visualizarse la nota de la forma: Muy
//Deficiente(0,1,2); Insuficiente (3,4); Suficiente (5); Bien (6); Notable (7,8);
//Sobresaliente (9,10).
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	string nombre[9];
	int nota[9],i;
	
	for (i=0;i<=9;i++){
	
	cout<<"\ndigite el nombre del alumno " << i+1<<endl;
	cin>>nombre[i];
	cout<<"\ndigite la nota del alumno\n";
	cin>>nota[i];
	
	if (nota[i]>=0 && nota[i]<= 2){
		cout<<" Muy Deficiente\n";
	}else{
		if  (nota[i]>=3 && nota[i]<=4){
			cout<<"Insuficiente";
		}else{
			if (nota[i]==5){
				cout<<"Suficiente";
			}else{
				if (nota[i]==6){
					cout<<"Bien";
				}else{
					if (nota[i]>=7 && nota[i]<=8){
						cout<<"Notable";
					}else{
						if(nota[i]>=9 && nota[i]<=10){
							cout<<"Sobresaliente";
						}else{
							cout<<" las notas van de (0 a 10)  ";
						}
					}
				}
			}
		}
	}
	}
	
	cout<<"\nPROGRAMA CREADO POR MERCADO LAURA";
	getch ( );
	return 0;
}
