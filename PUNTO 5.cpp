//Teclear una serie de n�meros enteros, hasta que se teclee un cero, y
//visualizar cu�ntos han sido pares y cu�ntos impares.

#include <iostream>
#include "conio.h"
using namespace std;
int main (){
	int n,i,pares=0,impares=0;
		do{
		cout<<"escriba un numero\n";
		cin>>n;
		if (n!=0){
			if (n%2 ==0){
			pares=pares+1;
		}else{
			impares=impares+1;
		}
			
		}
		
	
						
		}while(n!=0);
		
		cout<<pares << " han sido numeros pares\n";
		cout<<impares << " han sido numeros impares\n";

	
	
	
	cout<<"\nPROGRAMA CREADO POR MERCADO LAURA";
	getch ( );
	return 0;
}
