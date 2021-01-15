#include <iostream>
#include <conio.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int consistir();
int numpar(int termo,int cont);


int main(int argc, char** argv) {
	int termo = 0;
	int cont = 0;
	
	cout << "Exibe numeros pares de 0 ateh o termo informado \n";
	termo = consistir); 
	numpar(termo, cont);
	
	
	return 0;
}

int consistir()
{
	int termo = 0;
	do
	{
		cout << "Insira o numero ateh o qual deseja ver os pares: ";
		cin >> termo;
	}
	while(termo<=0);
	return termo;
}

int numpar(int termo, int cont)
{
	
	
	if(cont>termo)
	{
		return termo;
	}
	if((cont % 2)==0)
	{
			cout << cont << "\n";
			numpar(termo, 1+cont);
	}
	else
	{
		numpar(termo, ++cont);
	}
		
		
}
