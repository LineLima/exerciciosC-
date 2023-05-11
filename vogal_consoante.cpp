/*verificador de vogal ou consoante */

#include <iostream>

using namespace std;

int main()
{
	char letra;
	
	cout << "Digite uma letra para saber se é vogal ou consoante: " << endl;
	cin >> letra;
	
	if ( letra =='a' || letra =='e' || letra =='i' || letra =='o' || letra =='u')
	{
		cout << "A letra lida é uma vogal" << endl;
	}
	else 
	{
		cout << "A letra lida é uma consoante" << endl;
	}
	
	return 0;
}
