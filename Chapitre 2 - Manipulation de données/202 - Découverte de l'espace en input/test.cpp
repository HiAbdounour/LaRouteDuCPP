#include <iostream>
#include <string>

int main(){
    std::string saving;
	std::cout << "Ceci est un test grandeur nature : ";
	std::getline(std::cin,saving);
	
	std::cout << "Vous avez ecrit : " << saving;
	return 0;
}