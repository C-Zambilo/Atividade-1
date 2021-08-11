#include<iostream>

int main () {
	
	int tempo= 0;
	int vm= 0;
	int distancia= 0;
	int litros= 0;
	
	std::cout << "Insira o tempo da viagem: ";
	std::cin >> tempo;
	std::cout <<"Insira a velocidade media: ";
	std::cin>> vm;
	
	distancia = tempo * vm;
	litros = distancia/12;
	
	std::cout<< "Velocidade media: " << vm << "\nTempo: "<< tempo << "\nDistancia: "<< distancia << "\nLitors: "<< litros;
}
