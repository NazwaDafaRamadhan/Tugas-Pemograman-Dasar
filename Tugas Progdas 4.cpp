//* Program Menghitung Deret Bilangan Berpangkat Tiga*//
/* Tugas Progdas 4*/
/* Nazwa Dafa Ramadhan (20051397023) */


#include<iostream>
#include<math.h> 

using namespace std;
main() {
int a,kuadrat,jumkuadrat;

cout <<"Program Menghitung Deret Bilangan Berpangkat Tiga"<<endl;
cout <<"Tentukan Jumlah 6 Suku Pertama Deret Bilangan Berikut : 1^3,2^3,3^3...."<<endl;
cout <<endl;

for (a=1;a<=6;a++) {
kuadrat=pow(a,3);
jumkuadrat = jumkuadrat+kuadrat;
cout << a <<" pangkat 3 = "<<kuadrat<<endl;
}
cout <<"=================================="<<endl;
cout <<"Jumlah Dari 6 Suku Pertama Pada Deret Tersebut Adalah = "<<jumkuadrat<<endl; 
return 0;
} 
