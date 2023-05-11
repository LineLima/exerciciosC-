#include <iostream>

using namespace std;

int main()
{
	int i, n; 
	double a, b, media;
	
	cout << "Escreva quantos pares quer saber a media: " << endl;
	cin >> n;
	
	for (i=0; i < n; i++)
	{	
		cout << "Digite a e b para saber a média entre os dois: " << endl;
		cin >> a >> b;
		media = (a+b)/2;
		cout << "media de " << a << " e " << b << " = " << media << endl;
	}
	
	return 0;
}
