#include <iostream>
using namespace std;

int main (){
	int a, b;
	cout <<"Tabel Perkalian 1-10 \n";
	cout <<"\n";
	for (a = 1; a <= 10; a++){
		for (b = 1; b <= 10; b++){
			cout << a*b <<"\t";
		}
		cout <<"\n";
	}
	return 0;
}
