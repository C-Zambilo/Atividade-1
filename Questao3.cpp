#include<iostream>

int main () {
	
	int numeroN= 0;
	
	std::cout<< "Digite um numero inteiro ";
	std:: cin>> numeroN;
	
	//faltou o 2 após o %
	if (numeroN %2 == 0)
	{std::cout<< "Par";
	}
	else {std::cout<< "Impar";
	}
	
	
	return 0;
	
}