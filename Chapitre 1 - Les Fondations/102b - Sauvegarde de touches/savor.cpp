#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Choisis la longueur de ta serie : ";
	cin>>n;
	cout<<endl;
	
	// Voici comment on construit un tableau
	char tab[n];
	
	int b = 0;
	while(b<n){
		cin>>tab[b];
		b++;
	}
	
	cout<<endl<<"Votre serie est : ";
	b=0;
	while(b<n){
		cout<<tab[b];
		b++;}
	cout<<endl;
	return 0;
}