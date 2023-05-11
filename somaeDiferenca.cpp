/*calcula a soma e a diferenã entre os numeros digitados*/
#include <iostream>
#include <cmath>

using namespace std;

void somaDiferenca(int a, int b, int& soma, int& diferenca)
{
	soma = a + b;
	diferenca = a - b;	
}

int main()
{	
	int x, y, som, dif;
	
	cout << "Digite dois numeros: " << endl;
	cin >> x >> y;
	
	somaDiferenca(x,y,som,dif);
	cout << "soma de " << x <<" + " << y << " = " << som << endl;
	cout << "diferenca de " << x << " - " << y << " = " << dif << endl;
	
	return 0;
}
