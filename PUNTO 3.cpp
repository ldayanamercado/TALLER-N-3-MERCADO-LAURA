//Visualizar el producto de 10 números tecleados.

#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	 int n[9],i,prod=1,multi=0;
	 
	 	
		for (i=0;i<=9;i++){	
			cout<<"digite numero: "<<endl;
			cin>>n[i];	
			prod*=n[i];
	
		}
	 
	 
	cout<<"el producto es: " << prod <<endl;
	
	cout<<"\nPROGRAMA CREADO POR MERCADO LAURA";
	getch ( );
	return 0;
}
