//Teclear números hasta que se teclee un cero y visualizar los divisores de
//cada número tecleado.
#include "iostream"
#include <conio.h>
#include <iostream>

using namespace std;
main()

{
	int num1,r,i;
	do{
		cout<<"ingrese un numero: ";
		    cin>>num1;
		    
		    if (num1!=0){
		    		cout<<"los divisores del numero son\n ";
			for(i=1; i<=num1;i++){
				r=(num1)%i;
				if(r==0){
					cout<<i<<endl;
				}
			} 
		    	
			}else {
				cout<<"fin del programa....\n";
			}
		
		}while (num1!=0);
	
	cout<<"\nPROGRAMA CREADO POR MERCADO LAURA";
	getch ( );
	return 0;
	}
