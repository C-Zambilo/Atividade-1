#include<iostream>

int main () {
	
	int numero=0;
	
	std::cout<< "Insira um numero inteiro: ";
	std::cin>> numero;
	
	if (numero < 0) {
		numero = numero* -1;
	}
	
	std::cout<< numero;
	
	
	return 0;
}
