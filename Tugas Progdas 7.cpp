#include <iostream>
using namespace std;


int main (){
	int a,b,c;
	cout <<"Masukkan Tinggi Segitiga Angka : "; cin >> c;
	for (b = 1; b <= c; b++){
		for (a = 1; a <= b; a++){
			cout << a;
			}
		cout <<"\n";
		}		
	for (b = c-1; b >= 1; b--){
		for (a = 1; a <= b; a++){
			cout << a;
			}
		cout <<"\n";
		}
return 0;
}

