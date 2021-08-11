#include<iostream>

int main () {
	
	int k= 0;
	int c= 0;
	
	std::cout<<"Insira a temperatura em celcius: ";
	std::cin>> c;
	
	k=c+273.15;
	
	std::cout<< "Temperatura em Kelvin: "<< k;
	
	
	
	return 0;
}
