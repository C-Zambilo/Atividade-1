#include<iostream>

int main () {
	
	int c=0;
	int k=0;
	int f= 0;
	
	std::cout<<"Insira a temperatura em fahenheit: ";
	std::cin>> f;
	
	c=((f-32)*5)/9;
	k=c+273.15;
	
	std::cout<< "Temperatura em Kelvin: " << k;
	
	
	
	return 0;
}
