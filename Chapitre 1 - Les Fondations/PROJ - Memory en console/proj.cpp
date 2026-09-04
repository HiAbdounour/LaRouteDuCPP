#include <iostream>
using namespace std;

/*
	Cards (16 tuples meaning 8 different patterns)
	☺ ☻ ♥ ♦ ♣ ♠ ◘ ○
*/

/*
	Hardcoded solution
*/
int matrix[16] = {'☻','♠','○','○','☺','◘','♥','♦','♣','♥','☺','◘','♦','☻','♠','♣'};
bool found[16] = {false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false};

//============ Design =================

void blank(){
	cout<<endl<<endl<<endl;
}

void print_grid(){
	cout << endl << "-----------------" << endl << "|";
	for(int i=0;i<16;i++){
		cout<<' ';
		if(found[i]){cout << matrix[i];}
		else{cout << ' ';}
		cout << " |";
		if((i+1)%4==0 && i!=15){
			cout << endl << "-----------------" << endl << "|";
		}
	}
	cout << endl << "-----------------" << endl;
}

//============ Core =================

bool game_finished(){
	for(int i=0;i<16;i++){
		if(!found[i]){return false;}
	}
	return true;
}

bool is_correct_index(int nb){
	return 0<=nb && nb<16;
}

bool check_cards(int a,int b){
	if(matrix[a]==matrix[b]){return true;}
	else{
		found[a] = false; //reset
		found[b] = false; //reset
		return false;
	}
}

bool user_turn(){
	print_grid();
	int a,b;
	cout << "Select a first square (from 1 to 16) :";cin>>a;
	if(!is_correct_index(a-1)){
		cout << "ERROR : Bad value" << endl;
		return false;
	}
	found[a-1] = true;
	print_grid();
	cout << "Select a second square (from 1 to 16) :";cin>>b;
	if((!is_correct_index(b-1)) || (a==b)){
		cout << "ERROR : Bad value" << endl;
		found[a-1] = false;
		return false;
	}
	found[b-1] = true;
	print_grid();
	check_cards(a-1,b-1);
	return game_finished();
}


//============ Main function =================
int main(){
	cout << "Welcome to Memory" << endl << endl;
	bool finished = false;
	while(!finished){
		finished = user_turn();
	}
	cout << "Congratulations ! You beat the game !";
	return 0;
}