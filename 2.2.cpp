#include<iostream>

int main () {
	
	int f=0;
	int c=0;
	
	std::cout<< "Insira a temperatura em celcius: ";
	
	// esqueci o ;
	std:: cin>> c;
	
	f=(9*c+160)/5;
	
	std::cout<<"Temperatura em Fahrenheit: "<<f;
	
	
	return 0;
}
