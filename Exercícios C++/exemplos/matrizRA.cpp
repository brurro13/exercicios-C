#include <iostream>
#include <cstdlib>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a[4], b[4][10], aux = 0;
	
	
	for (int i = 0; i <= 3; i ++)
	{
		for (int j = 0; j <= 9; j++)
		{
			a[i] = 0;
			b[i][j] = 0;
		}
	}
	
	cout << "insira os quatro ultimos numeros do seu RA:\n";
	for (int i = 0; i <= 3; i ++)
    {
		cin >> a[i];
	}
	
	for (int i = 0; i <= 3; i ++)
    {
	    for (int j = 0; j <= 9; j ++)
	    {
		    b[i][j] = a[i]; 
		}
    }
    

    for (int i = 0; i <= 3; i ++)
    {
    	for (int j = 1; j <= 9; j++)
    	{
    		
			  aux +=  a[i];
			  b[i][j] = b[i][j - 1] + aux;
		 	
		}
		aux = 0;
	}
	
	cout << "\nos valores do vetor A sao:\n";
	for (int i = 0; i <= 3; i ++)
	{
		cout << a[i]<< ". ";
	}
	
	cout << "\nos val	ores da matriz B sao:\n";
		for (int i = 0; i <= 3; i ++)
	{
		for (int j = 0; j <= 9; j ++)
		{
			cout << b[i][j] << "\t";
		}
		cout << "\n";
	}

	return 0;
}
