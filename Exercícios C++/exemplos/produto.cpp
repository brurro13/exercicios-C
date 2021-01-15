#include <cstdlib>
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int prod(int a, int b);
int consistir(int num);



int main(int argc, char** argv) 
{
	int a = 0, b = 0;
	
	cout << "digite o primeiro valor: ";
	cin >> a;
	a = consistir(a);
	cout << "digite o segundo valor: ";
	cin >> b;
	b = consistir(b);
	cout << "o produto entre " << a << " e " << b << " eh " << prod(a, b);
	
	return 0;
}

int consistir(int num)
{
	while (num <= 0)
	{
		cout << "valor invalido, digite novamente: ";
		cin >> num;
	}
	
	return (num);
}

int prod(int a, int b)
{
		if (a==b)
		{
			return (a);
		}
		else
		{
			if(a>b)
			{
				return(prod(b,a));
			}
			else
			{
				return(a*prod(a+1,b));
			}
		}
}

