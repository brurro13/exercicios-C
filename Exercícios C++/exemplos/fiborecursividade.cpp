#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fibo(int termo);


int main(int argc, char** argv) {
	int termo=0;
	int num=0;
	
	cin >> termo;
	cout << fibo(termo) << ". ";
	
	
	return 0;
}

 int fibo(int termo)
 {
 	
 	
 	if(termo==1 || termo==2)
 	{
 		return 1;
	 }
	 else
	 {
	 	
	 	return (fibo(termo-1) + fibo(termo-2));
	 }
	 
 }
