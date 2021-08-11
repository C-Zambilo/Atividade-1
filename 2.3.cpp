#include<iostream>
int main () {
	
	int f= 0;
	int c= 0;
	
	std::cout<<"Insira a temperatura em fahrenheit: ";
	std::cin>> f;
	
	c=((f-32)*5)/9;
	
	std::cout<< "Temperatura em celcius: " << c;
	
	
}
