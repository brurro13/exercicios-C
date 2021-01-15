#include <cstdlib>
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fatorial(int n);

int main(int argc, char** argv) 
{
	int num = 0;
	
	cout << "digite o valor a ser fatorado: ";
	cin >> num;
	cout << fatorial(num);
	
	return 0;
}

int fatorial(int n)
{
	if (n == 0)
	{
	return 1;
	}
	else
	{
		return (n * fatorial(n-1));
	}
}
