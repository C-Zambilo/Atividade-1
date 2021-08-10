#include<iostream>

int main () {
	
	int numeroN= 0;
	
	std::cout<< "Digite um numero inteiro ";
	std:: cin>> numeroN;
	
	if (numeroN < 0) {
		std::cout << "Negativo";
	}
	if (numeroN > 0) {
		std::cout << "Positivo";
	}
	// Usei = ao invés de ==
	if (numeroN == 0) {
		std::cout<< "Nulo";
	}
	
	
	return 0;
	
}