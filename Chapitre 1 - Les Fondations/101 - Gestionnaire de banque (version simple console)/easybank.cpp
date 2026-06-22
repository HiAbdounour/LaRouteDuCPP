#include <iostream>
using namespace std;

// Global account
float account = 0.f;

// Credit
void credit(){
	float n;
	cout << "Crediter une somme de ";
	cin >> n; cout<<endl;
	
	account = account+n;
	cout << n << " euros ont ete ajoutes a votre compte." << endl;
	cout << "Vous possedez desormais " << account << " euros." << endl;
}

// Debit
void debit(){
	float n;
	cout << "Debiter une somme de ";
	cin >> n; cout<<endl;
	
	if(account>=n){
		account = account-n;
		cout << n << " euros ont ete retires de votre compte." << endl;
		cout << "Vous possedez desormais " << account << " euros." << endl;
	}
	else{
		cout << "Pas assez d'argent dans votre compte." << endl;
	}
}



int main(){

	char c;
	do{
		
		cout << "Crediter (c), debiter (d) ou quitter (q)" << endl;
		cin >> c;
		
		if(c=='c'){
			credit();
		}
		else if(c=='d'){
			debit();
		}
		cout << endl;
		
		
	} while(c!='q');
	
	cout << "FIN" << endl;
	return 0;
}