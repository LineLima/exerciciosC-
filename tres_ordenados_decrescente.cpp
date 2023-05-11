/*tres numeros ordenados em ordem decrescente*/
#include <iostream>

using namespace std;

int main()

{
	int num1, num2, num3, aux;
	
	cout << "Digite tres numeros para serem ordenados em ordem decrescente" << endl ;
	cin >> num1 >> num2 >> num3;
	
	if ( num1 < num2)
	{
		aux = num1;
		num1 = num2;
		num2 = aux;
	}
	
	if ( num2 < num3 )
	{
		aux = num2;
		num2 = num3;
		num3 = aux;
	}
	
	if ( num1 < num2)
	{
		aux = num1;
		num1 = num2;
		num2 = aux;
	}
	
	cout << "Os numeros em ordem decrescente são: " << num1 <<" "<< num2 << " "<< num3;
	return 0; 
}
