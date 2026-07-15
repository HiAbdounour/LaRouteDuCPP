#include <iostream>
// on n'active pas le namespace std aujourd'hui


std::string IMC(float val){
	if(val<18.5) return "Insuffisance ponderale";
	else if(val<25) return "Poids normal";
	else if(val<30) return "Signe avant-coureur de surpoids";
	else if(val<35) return "Obesite de niveau 1";
	else if(val<40) return "Obesite de niveau 2";
	else return "Obesite de niveau 3";
}

int main(){
	std::cout << "Calculateur d'IMC" << std::endl;
	
	float weight,size;
	std::cout << "Entrez votre taille (en metres) : ";
	std::cin >> size; //std::cout<<std::endl;
	std::cout << "Entrez votre poids (en kgs) : ";
	std::cin >> weight;
	
	std::cout << "Votre IMC est : " << IMC(weight/(size*size)) << std::endl;
	return 0;
}