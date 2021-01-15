#include <iostream>
#include <cstdlib>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int A[2][2];
	
	for (int i = 0; i <= 1; i += 1)
	{
		for (int j = 0; j <= 1; j += 1)
		{
			cout << "insira um valor na linha " << i + 1 << " da coluna " << j + 1 << " na matriz A: ";
			cin >> A[i][j];
		}
	}
	cout << "os valores sao: ";
	for (int i = 0; i <= 1; i += 1)
	{
		for (int j = 0; j <= 1; j += 1)
		{
			cout << A[i][j] << ". ";
		}
	}
	return 0;
}
