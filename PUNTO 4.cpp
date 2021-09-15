// Visualizar el resultado de una operación tecleada (suma, resta, producto,
// división) sobre 2 números tecleados. El programa debe solicitar operación y
//2 números cada vez que se responda ‘S’ a la pregunta “Hacer operación (S/N)?”.

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main ( ){	
		system("color 5F");//color de pantalla

		char ope[10], C[2];			
		float  n1,n2;
	do{
		cout<<"escriba 2 numeros\n";
		cin>>n1;
		cin>>n2;
		cout<<"digite el  tipo de operacion:\n";
		cin>>ope;
		
		     // strcmp(a,b)=0 = compaaracion de nombres
		     
		if (strcmp(ope,"suma")==0|| strcmp(ope,"SUMA")==0 ){
			cout <<"el resultado de la suma es " << n1+n2<<"\n";
		} else{
			if(strcmp(ope,"resta")==0|| strcmp(ope,"RESTA")==0){
					cout <<"el resultado de la resta es " << n1-n2<<"\n";
			}else{
				if (strcmp(ope,"multiplicacion")==0|| strcmp(ope,"MULTIPLICACION")==0){
				cout<<"el resultado de la multiplicacion es:"<<n1*n2<<endl;
				}else{
					if (strcmp(ope,"DIVISION")==0|| strcmp(ope,"division")==0){
						cout<<"el resultado de la division es: "<<n1/n2<<endl;
						
					}else {
						cout<<"verifique lo que escribio"<<endl;
					}
				}
			}
		}
						cout<<"\nHacer operación (S/N)  \n";
						cin>>C;
						
					}while(strcmp(C,"S")==0);
					
					
 	cout<<"\nPROGRAMA CREADO POR MERCADO LAURA";
	getch ( );
	return 0;
}
