/* calcula as raizes reais de uma equação de segundo grau */
#include <iostream>
#include <cmath>

using namespace std;

void eqSegundoGrau (int a, int b, int c, float& x1, float& x2) 
{
	float delta;
	delta = (b*b) - 4 * a * c;
	
	if (a == 0)
	{
		cout << "O coeficiente a deve ser diferente de 0" << endl;
	}
	else if (delta<0)
	{
		cout << "A equacao nao possui raizes reais" << endl; 
	}
	else 
	{
	x1= (-b + sqrt(delta)) / (2 * a);
	x2= (-b - sqrt(delta)) / (2 * a);
	}
	
}

int main()
{
	int a, b, c;
	float x1, x2;
	cout << "Digite os valores de a, b, c" << endl;
	cin >> a >> b >> c;
	
	eqSegundoGrau(a,b,c,x1,x2);
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
	
	return 0;
}
