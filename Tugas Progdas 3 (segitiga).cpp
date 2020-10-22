	//*Program menghitung bangun datar*//
	/* Tugas Progdas 3*/
	/*Nazwa Dafa Ramadhan (20051397023)*/

#include <iostream>
#include <math.h>
using namespace std;

main()
{
int alas,tinggi,menu,panjang_sisi_miring,luas,hasil_akar,sisi_miring,keliling;

cout <<"Program Menghitung Bangun Datar Segitiga"<<endl;
cout <<"Tugas Progdas 3"<<endl;
cout <<"Nazwa Dafa Ramadhan (20051397023)"<<endl;
cout <<endl;

	cout <<"Masukkan Alas Segitiga			: "; cin>>alas;
	cout <<"Masukkan Tinggi Segitiga		: "; cin>>tinggi;
	cout <<endl;
	
	cout <<"Pilihan Menu :"<<endl;
	cout <<"1. Hitung Panjang Sisi Miring Segitiga"<<endl;
	cout <<"2. Hitung Luas Segitiga"<<endl;
	cout <<"3. Hitung Keliling Segitiga"<<endl;
	cout <<"4. Keluar Program"<<endl;
	cout <<endl;
	cout <<"Masukkan Pilihan Menu 			:"; cin>>menu;
	cout <<endl;
	cout <<endl;
	
	//operasi hitung
	panjang_sisi_miring = pow(alas,2)+pow(tinggi,2);
	hasil_akar = sqrt(panjang_sisi_miring);	
	luas = float (1)/2*alas*tinggi;
	keliling = alas+tinggi+hasil_akar;
	
switch (menu) {
	case 1 :	cout <<"Panjang Sisi Miring Segitiga adalah "<<hasil_akar<<endl;
			break;
				
	case 2 :	cout <<"Luas Segitiga adalah "<<luas<<endl;
			break;
		
	case 3 :	cout <<"Keliling Segitiga adalah "<<keliling<<endl;
			break;
				
	case 4 :	cout <<"Anda Telah Keluar Dari Program"<<endl;
			return 0;
}
return 0;		
}
