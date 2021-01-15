#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int termo = 0, cont = 1, divisor = 1, perfeito = 0;
	while (termo < 1)
	{
		cout << "digite o termo: ";
		cin >> termo;
	}
	while (cont <= termo)
	{
		while (divisor < cont)
		{
			if ((cont % divisor)==0)
			{
				perfeito = perfeito + divisor;
			}
			divisor++;
		}
		if (perfeito == cont)
		{
			cout << cont << " " << "numero perfeito\n";
		}
		cont++;
		divisor = 1;
		perfeito = 0;
	}
	system ("PAUSE");
	return 0;
}
