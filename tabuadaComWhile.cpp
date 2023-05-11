/* tabuada de n de 1 até 10 usando while */

#include <iostream>

using namespace std;

int main ()
{	
	int cont, n, resultado;
	
	cout << "Digite um numero inteiro para ver sua tabuada: " << endl;
	cin >> n;
	
	cont = 0;
	
	while (cont < 10)
	{
		cont = cont + 1;
		resultado = cont * n;
		cout << cont << " x " << n << " = " << resultado << endl;
	}
	
	return 0;
}
