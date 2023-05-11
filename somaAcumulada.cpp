/* soma acumulada dos valores inseridos pelo usuario */ 

#include <iostream>

using namespace std;

int main ()
{	
	int n, contador, soma, n1;
	
	cout << "Insira a quantidade de numeros a serem somados: " << endl;
	cin >> n; 
	
	contador = 0;
	soma = 0;
	
	cout << "Insira os numeros que quer somar: " << endl;
	
	while (contador < n) 
	{
		cin >> n1;
		contador = contador + 1;
		soma = soma + n1;
	}
	
	cout << "A soma dos numeros digitados é: " << soma << endl;
	
	
	
	return 0;
}
