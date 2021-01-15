#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n=0;
	cout << "contagem ate cem\n";
	while (n <= 100)
   {
   	  cout << n << " ";
   	  n = n + 1;
	}	
	system ("PAUSE");
	return 0;
}
