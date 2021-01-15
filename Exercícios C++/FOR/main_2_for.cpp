#include <cstdlib>
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a = 0, b = 0;
	
	cout << "os impares de 10 ate 80 sao: ";
	for (a = 11; a <= 80; a += 2)
	{
		b += a;
		cout << a << " ";
	}
	
	cout << "\na somatoria dos impares de 10 ate 80 eh: " << b;
	
	return 0;
}
