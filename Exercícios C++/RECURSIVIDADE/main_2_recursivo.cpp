#include <cstdlib>
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int pares(int n, int a);
int consistir(int n);



int main(int argc, char** argv) 
{
	int num = 0, cont = 0;
	
	cout << "digite o valor: ";
	cin >> num;
	num = consistir(num);
	pares(num, cont);
	
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

int pares(int n, int a)
{
	
	if (a > n)
	{
		return n;
	}
	else
	{
		cout << a << ". ";
		return pares( n, a + 2);
	}
}

