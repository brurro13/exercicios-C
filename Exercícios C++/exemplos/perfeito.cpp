#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a = 0, b = 0, c = 0, aux = 0;
	
	cout << "insira termo: ";
	cin >> a;
	

	for (int i = 0; i <= a; i++)
	{
		if (a % i == 0)
			{
			 aux += i;
			}
		
		if (aux == c)
		{
			cout << "numero " << aux << " e perfeito\n";
		}
		aux = 0;
	}
	return 0;
}
