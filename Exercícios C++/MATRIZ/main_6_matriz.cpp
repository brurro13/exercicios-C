#include <iostream>
#include <cstdlib>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int A[10];
	int B[10][10];
	int l = 0;
	
	
	for (int i = 0; i <= 9; i += 1)
	{
		for (int j = 0; j <= 9; j += 1)
		{
			A[i]= 0;
			B[i][j] = 0;
		}
	}
	
	for (int i = 0; i <= 9; i += 1)
	{	
	    cout << "insira um valor na casa " << i + 1 << " do vetor A: ";
			cin >> A[i];
		 while ((A[i]< 0) or (A[i] > 10 ))
			{
				cout << "numero invalido, digite novamente: ";
				cin >> A[i];
			}
		
	}
	
		for (int i = 0; i <= 9; i += 1)
	{
		for (int j = 0; j <= 9; j += 1)
		{
			B[i][j] = A[i] * (j + 1);
		}
		    
		
		
		
	}
	
	cout << "\nos valores do vetor A sao: ";
	for (int i = 0; i <= 9; i += 1)
	{
			cout << A[i]<< ". ";
		
	}
	
	cout << "\nos valores da matriz B sao:\n";
		for (int i = 0; i <= 9; i += 1)
	{
		for (int j = 0; j <= 9; j += 1)
		{
			cout << B[i][j] << ". ";
		}
		cout << "\n";
	}

	return 0;
}
