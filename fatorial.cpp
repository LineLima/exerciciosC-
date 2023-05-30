#include <iostream>

using namespace std;

int fatorial(int n){
	int resultado;
	resultado =1;
	
	for (int i = 1; i <= n; i++){
		resultado *= i;
	}
	
	return resultado;
	
}

int main(){
	int result, a;
	cout << "Digite um numero para descobrir seu fatorial: " << endl;
	cin >> a;
	
	result = fatorial(a);
	cout << "O fatorial de " << a << " é: " << result;	
	
	return 0;
}
