//12. Visualizar el producto de los números pares e impares por separado desde
//el 1 hasta cada uno de los números que se tecleen, hasta que sea cero el
//número tecleado.

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int n,i,pares=1,impares=1;
		do{
		cout<<"teclee un numero\n";
		cin>>n;
		if (n!=0){
			if (n%2 ==0){
			pares*=n;
		
		}else{
			impares*=n;
		}
			
		}
						
		}while(n!=0);
		
		cout<<"la multiplicacion de los numeros pares es: " << pares <<endl;
		cout<<"la multiplicacion de los numeros imapres es:" <<impares <<endl;
		
		cout<<"\nPROGRAMA CREADO POR MERCADO LAURA";
		getch ( );
	return 0;
}
