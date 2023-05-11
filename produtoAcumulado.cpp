/* produto acumulado dos numeros inseridos pelo usuario */

#include <iostream>

using namespace std;

int main()
{
	int n, produto, contador, numeroLido;
	
	contador = 0;
	produto = 1;
	
	cout << "Digite de quantos numeros quer calcular o produto: " << endl;
	cin >> n;
	
	cout << "Digite os numeros: " << endl;
	
	while (contador < n) 
	{
		cin >> numeroLido;
		contador = contador + 1;
		produto = produto * numeroLido;
	}
	
	cout << "O produto dos numeros digitados é: " << produto;
	
	
	return 0;
}
