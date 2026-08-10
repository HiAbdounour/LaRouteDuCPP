#include <iostream>
using namespace std;

int main(){
	char mov[10] = {'p','c','f','f','c','p','c','f','p','c'};
	int pos = 0;
	
	char x,y;
	int v = 0,vtot = 0;
	bool running = 1;
	do{
		cout << "Jouer ? (j) ";
		cin>>x;
		
		if(x=='j'){
			cout << "Pierre (p), feuille (f) ou ciseaux (c) ? ";
			cin >> x;
			
			y = mov[pos];
			if(x==y){cout << "Egalite : " << x << " vs " << y << endl;}
			else if((x=='c'&&y=='f')||(x=='p'&&y=='c')||(x=='f'&&y=='p')){
				cout << "Vous gagnez cette manche : " << x << " vs " << y << endl;
				v++;
			}
			else{
				cout << "Vous perdez cette manche : " << x << " vs " << y << endl;
			}
			vtot++;
			pos++;
			if(pos==10){pos=0;}
		}
		else{running = 0;}
	}while(running);
	
	cout<<"Vous avez gagne "<<v<<" manches sur "<<vtot<<endl;
	
	return 0;
}