#include <iostream>
using namespace std;


int main (){
	int a,b,c;
	cout <<"Masukkan Tinggi Segitiga : "; cin >> c;
	for (b = 1; b <= c; b++){
		for (a = 1; a <= b; a++){
			cout <<"*";
		}
		cout <<"\n";
	}
	for (b = c; b > 1; b--){
		for (a = b; a > 1; a--){
			cout <<"*";
		}
		cout <<"\n";
	}
return 0;
}

