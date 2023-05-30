#include <iostream>

using namespace std;

const int size = 3;

void read(int vet[], int size){
	int i;
	for (i=0; i < size; i++){
		cin >> vet[i];
	}
}


int main(){
	int vetA[size], vetB[size], vetC[size];
	int i;
	
	cout << "Digite três numeros inteiros para cada vetor: " << endl;
	cout << "Vetor 1: " << endl;
	read(vetA, size);
	cout << "Vetor 2: " << endl;
	read(vetB, size);
	
	for (i = 0; i < size; i++){
		vetC[i] = vetA[i] + vetB[i];
		cout << "soma de: " << vetA[i] << " + " << vetB[i] << " = " << vetC[i] << endl;
	}	
	
return 0;		
}
