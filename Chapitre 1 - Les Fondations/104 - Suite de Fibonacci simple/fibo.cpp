#include <iostream>

int main(){
	int a = 0, b = 1;
	int n;
	std::cin >> n;
	
	for(int i=0;i<n;i++){
		int temp = b;
		b = a+b;
		a = temp;
	}

	std::cout << b;
	return 0;
}