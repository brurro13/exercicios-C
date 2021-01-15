#include <iostream>
#include <cstdlib>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int vendas [3][5];
	int i = 0, j = 0, s = 1, v = 0;
	
	cout << "controle de vendas\n\n";
	for (i = 0; i <= 2; i += 1)
	{
		v += 1;
		
		for (j = 0; j <= 4; j += 1)
		{
			if (s >= 6)
			{
			 s=2;
			}
			else
			{
			
			 s += 1;
		    }
			cout << "vendedor-" << v <<", " << s << "-" << "feira: " ;
			cin >> vendas [i][j];
		}
	}
	
	cout << "\nResultado\n\n";
	v = 0;
	for (i = 0; i <= 2; i += 1)
	{
		v += 1;
		for (j = 0; j <= 4; j += 1)
		{
			if (s >= 6)
			{
			 s=2;
			}
			else
			{
			
			 s += 1;
		    }
			cout << "O vendedor-" << v << " vendeu na " << s << "-" << "feira a quantia de: " << vendas [i][j] << "\n";
		}
		cout << "\n";
	}
	return 0;
}
