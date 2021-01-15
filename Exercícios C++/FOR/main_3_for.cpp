#include <cstdlib>
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a = 0;
	
	cout << "digite um valor inteiro positivo: ";
	cin >> a;
	
	while (a <= 0)
	{
		cout << "valor invalido, digite novamente: ";
		cin >> a;
	}
	
	for (int i = a; i >= a; i -= 1)
	{
		cout << (a % 2);
	}
	
	return 0;
}
