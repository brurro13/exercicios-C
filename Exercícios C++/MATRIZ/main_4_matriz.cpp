#include <iostream>
#include <cstdlib>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int A[3][3];
	int B[3];
	int l = 0;
	
	
	for (int i = 0; i <= 2; i += 1)
	{
		for (int j = 0; j <= 2; j += 1)
		{
			A[i][j]= 0;
			B[i] = 0;
		}
	}
	
	for (int i = 0; i <= 2; i += 1)
	{
	   for (int j = 0; j <= 2; j += 1)
	   {
	   
	    cout << "insira um valor na matriz A: ";
		cin >> A[i][j];
	   }
	}
	
		for (int i = 0; i <= 2; i += 1)
	{
		for (int j = 0; j <= 2; j += 1)
		{
			B[i] = A[i][j];
		}
	}
	
	cout << "os valores da matriz A sao: ";
	for (int i = 0; i <= 2; i += 1)
	{
		for (int j = 0; j <= 2; j+= 1)
		{
		 cout << A[i][j]<< ". ";
	    }
	}
	
	cout << "os valores do vetor B sao: ";
		
	for (int i = 0; i <= 2; i += 1)
	{
	  cout << B[i] << ". ";
	}  

	return 0;
}
