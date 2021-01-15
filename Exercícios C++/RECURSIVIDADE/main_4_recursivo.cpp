#include <cstdlib>
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int somatoria(int n, int a);
int consistir(int n);
int soma = 0;



int main(int argc, char** argv) 
{
	int termo = 0, cont = 0;
	
	cout << "digite o valor: ";
	cin >> termo;
	termo = consistir(termo);
	somatoria(termo, cont);
	cout << "\n" << soma;
	
	return 0;
}

int consistir(int n)
{
	while (n <= 0)
	{
		cout << "valor invalido, digite novamente: ";
		cin >> n;
	}
	
	return (n);
}

int somatoria(int n, int a)
{
	
	if (a > n)
	{
		return n;
	}
	else
	{
	 cout << a << ". ";
	 soma = soma + a;
	 return somatoria( n, a + 1);   
	}
}

