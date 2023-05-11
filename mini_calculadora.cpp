/*calculadora de operações basicas*/

#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	char op;
	
	cout << "Digite um numero seguido de uma operação (+,-,*,/) e outro numero"<<endl;
	cin >> num1 >> op >> num2;
	
	if (op == '+') 
	{
		cout <<"adicao: " << num1 << " + " << num2 << " = " << num1 + num2;
	}
	 else if (op == '-')
	{
		cout << "subtracao: " << num1 << " - " << num2 << " = " << num1 - num2;
	}
	 else if (op == '*')
	{
		cout << "multiplicacao: " << num1 << " * " << num2 << " = " << num1 * num2;
	} 
	else if (op == '/')
	{
		if (num2 == 0)
		{
			cout << "O segundo numero deve ser diferente de 0" << endl;		
		}
		else 
		{
			cout << "divisao: " << num1 << " / " << num2 << " = " << num1/num2;
		}
	}
    else 
	{
		cout << "operador invalido" << endl;
	}
	
return 0;

}
