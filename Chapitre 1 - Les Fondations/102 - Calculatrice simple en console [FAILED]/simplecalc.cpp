#include <iostream>
using namespace std;

int addition(int a,int b){
	return a+b;
}
int soustraction(int a,int b){
	return a-b;
}
int multiplication(int a,int b){
	return a*b;
}
int division(int a,int b){
	return a/b;
}

int select(int a,char op,int b){
	if(op=='+'){return addition(a,b);}
	else if(op=='-'){return soustraction(a,b);}
	else if(op=='*'){return multiplication(a,b);}
	else if(op=='/'){
		if(b!=0){return division(a,b);}
		else{
			cout << "ERREUR : Ne peut pas diviser par zéro !" << endl;
			return -1;
		}
	}
	else{return -1;}
}

int main(){
	int a,b;char op;
	char c=' ';
	while(c!='q'){
		cin >> a >> op >> b;
		cout << endl << select(a,op,b) << endl;
		cout << "Opération suivante (q pour stop) : ";
		cin >> c; cout << endl;
	}
	return 0;
}