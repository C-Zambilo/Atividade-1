#include<iostream>

int main () {
	
	int numero1= 0;
	int numero2= 0;
	int soma= 0;
	
	std:: cout << "digite valor inteiro 1 ";
	std:: cin >> numero1;
	//faltou ;
	std:: cout << "digite valor inteiro 2 ";
	std:: cin >> numero2;
	
	soma= numero1 + numero2;
	
	if (soma>10) {
		std::cout << soma;
	}
	
	// Esqueci o return 0;
	return 0;
}