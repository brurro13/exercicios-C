#include <cstdlib>
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fibonacci(int n);
int consistir(int y);



int main(int argc, char** argv) 
{
	int termo = 0;
	
	cout << "digite o valor: ";
	cin >> termo;
	termo = consistir(termo);
	cout << fibonacci(termo);
	
	return 0;
}

int consistir(int y)
{
	while (y <= 0)
	{
		cout << "valor invalido, digite novamente: ";
		cin >> y;
	}
	
	return (y);
}

int fibonacci(int n)
{
	
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
	  return fibonacci(n - 1) + fibonacci(n - 2);   
	}
}

