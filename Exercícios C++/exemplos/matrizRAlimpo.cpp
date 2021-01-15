#include <iostream>
#include <cstdlib>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int vetor[4];
	int matriz[4][10];
	int num = 0;
	
	for (int i = 0; i <= 3; i ++)
	{
		vetor[i] = 0;
	}
	for (int i = 0; i <= 3; i ++)
	{
		for (int j = 0; j <= 9; j++)
		{
		
			matriz[i][j] = 0;
		}
	}
	
	cout << "insira os quatro ultimos numeros do seu RA:\n";
	for (int i = 0; i <= 3; i ++)
    {
		cin >> vetor[i];
	}
	
	for (int i = 0; i <= 3; i ++)
    {
	    for (int j = 0; j <= 9; j ++)
	    {
		    matriz[i][j] = vetor[i]; 
		}
    }
    

    for (int i = 0; i <= 3; i ++)
    {
    	for (int j = 1; j <= 9; j++)
    	{
    		if (i == 0)
			{
			  num += 2;
			  matriz[i][j] = matriz[i][j - 1] + num;
		 	}
		 	else if (i == 1)
			{
			  num += 1;
			  matriz[i][j] = matriz[i][j -1] + num;
		 	}
		 	else if (i == 2)
			{
			  num += 4;
			  matriz[i][j] = matriz[i][j - 1] + num;
		 	}
		 	else if (i == 3)
			{
			  num += 3;
			  matriz[i][j] = matriz[i][j - 1] + num;
		 	}
		}
		num = 0;
	}
	
	cout << "\nos valores do vetor A sao:\n";
	for (int i = 0; i <= 3; i ++)
	{
		cout << vetor[i]<< ". ";
	}
	
	cout << "\nos valores da matriz B sao:\n";
		for (int i = 0; i <= 3; i ++)
	{
		for (int j = 0; j <= 9; j ++)
		{
			cout << matriz[i][j] << "\t";
		}
		cout << "\n";
	}

	return 0;
}
