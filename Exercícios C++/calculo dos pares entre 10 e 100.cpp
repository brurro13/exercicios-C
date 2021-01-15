#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n1 = 10, n2 = 0 ;
	cout << "calculo dos pares entre 10 e 100\n";
	while (n1 <= 100)
   {
   	  n2 = n2 + n1;
   	  cout << n1 << " ";
   	  n1 = n1 + 2;
   }	
	cout << "\no resultado da soma dos pares e: " << n2 << "\n";
	system ("PAUSE");
	return 0;
}
