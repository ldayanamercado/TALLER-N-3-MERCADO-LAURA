//Visualizar la suma de los n�meros del 1 al 1000. Modificar este programa
//para que funcione desde el 1 hasta un n�mero tecleado.

#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	 int n,i,sum=0;
	 
	 cout<<" digite hasta que numero desea sumar:";
	 cin>>n;
	 
	 for(i=1;i<=n;i++){
	 	sum=sum+i;
	 }
	cout<<"la suma es: " << sum<<endl;
	
	
	getch ( );
	return 0;
}
