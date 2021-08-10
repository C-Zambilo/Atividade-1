#include<iostream>

int main () {
	
	int numeroA= 0;
	int numeroB= 0;
	int soma= 0;
	int soma1= 0;
	int sub= 0;
	
	
	std::cout <<"De valor ao numero A ";
	std::cin >> numeroA;
	std::cout<< "De valor ao numero B ";
	std::cin >> numeroB;
	
	soma = numeroA + numeroB;
	 
	// Eu havia colocado cin
		if (soma > 20) {
		soma1 = soma + 8;
		std::cout<< soma1;
	}
	if (soma <= 20) {
		
		sub= soma - 5;
		std::cout<< sub;
	}
		
	
	return 0;
}