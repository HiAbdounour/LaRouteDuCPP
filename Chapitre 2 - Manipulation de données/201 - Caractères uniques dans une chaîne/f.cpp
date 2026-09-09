#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<char> v){
	cout << "[ ";
	for(int i=0;i<v.size();i++){
		cout << v.at(i) << ' ';
	}
	cout << ']' << endl;
}

bool notin(char elem,vector<char> v){
	for(int j=0;j<v.size();j++){
		if(v.at(j)==elem){return false;}
	}
	return true;
}

int main(){
	vector<char> v = {};
	string s = "";
	
	cout << "Entrez votre texte :";
	cin>>s;
	
	for(int i=0;i<s.length();i++){
		if(notin(s.at(i),v)){v.push_back(s.at(i));}
	}
	
	print_vector(v);
	return 0;
}