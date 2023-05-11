/*positivo-negativo-par-impar */

#include <iostream>

using namespace std;

int main(){
	int num;
	
	cout <<"Digite um numero inteiro: " << endl;
	cin >> num;
	
	if (num >= 0)
	{
		if (num % 2 == 0)
		{
			cout << "o numero é par e positivo";
		} else 
		{
			cout << "o numero é impar e positivo";
		}
	}
	else
	{ 
		if (num % 2 == 0)
		{
			cout << "o numero é par e negativo";
		} else 
		{
			cout << "o numer é impar e negativo";
		}		
	}
	return 0;
}
