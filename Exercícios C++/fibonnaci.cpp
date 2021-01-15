#include <cstdlib>
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n1 = 0, n2 = 1, prox = 0, termo = 0;
	cout << "fibonacci\n";
	cout << "digite quantidade de termos: ";
	cin >> termo;
	while (termo <= 3)
    {
	    cout << "valor invalido, digite novamente: ";
	    cin >> termo;
    }
	while (termo > 0)
	{
		cout << n2 << " ";
		prox = n1 + n2;
		n1 = n2;
		n2 = prox;
		termo -= 1;	
		
	}
	system ("pause");
	return 0;
}
