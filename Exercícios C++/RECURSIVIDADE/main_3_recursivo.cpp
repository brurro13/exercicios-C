#include <cstdlib>
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int impares(int n, int a);
int consistir(int n);
int soma = 0;



int main(int argc, char** argv) 
{
	int num = 0, cont = 1;
	
	cout << "digite o valor: ";
	cin >> num;
	num = consistir(num);
	impares(num, cont);
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

int impares(int n, int a)
{
	
	if (a > n)
	{
		return n;
	}
	else
	{
		if (a % 3 == 0)
		{
		 cout << a << ". ";
		 soma = soma + a;
	    }
	    else
	    {
		}
	 return impares( n, a + 2);   
	}
}

