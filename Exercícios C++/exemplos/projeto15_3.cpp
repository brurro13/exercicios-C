#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int consistir();
int numimpar(int termo, int cont, int aux);


int main(int argc, char** argv) {
	int termo = 0;
	int cont = 0;
	int aux = 0;
	
	cout << "Exibe numeros impares multiplos de 3, de 0 ateh o termo informado \n";
	termo = consistir();
	cout << "\nOs numeros impares multiplos de 3 sao: ";
	numimpar(termo, cont, aux);
	
	
	return 0;
}

int consistir()
{
	int termo = 0;
	do
	{
		cout << "Insira o numero ateh o qual deseja ver os impares multiplos de 3: ";
		cin >> termo;
	}
	while(termo<=0);
	return termo;
}

int numimpar(int termo, int cont, int aux)
{
	if(cont>termo)
	{
		cout << "\n\nA soma dos impares multiplos de 3 eh: " << aux;
		return aux;
	}
	if(((cont % 2)!=0) && ((cont % 3)==0))
	{
			cout  << "\n" << cont;
			aux = aux + cont;
			numimpar(termo, 1+cont, aux);
	}
	else
	{
		numimpar(termo, ++cont, aux);
	}
		
		
}
