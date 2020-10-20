	//*Program Administrasi Gaji Mingguan Karyawan*//
	/*Tugas Progdas 2*/
	/*Nazwa Dafa Ramadhan (20051397023*/
#include <iostream>
#include <string.h>
using namespace std;

main ()
{
int jam_kerja,
	total_jam_kerja,
	jam_lembur,
	upah_lembur = 4000,
	gol_upah,
	gol_1 = 5000, 
	gol_2 = 7000, 
	gol_3 = 8000, 
	gol_4 = 10000,
	total_upah;
string nama;
cout <<"Program Administrasi Gaji Karyawan"<<endl;
cout <<"Tugas Progdas 2"<<endl;
cout <<"Nazwa Dafa Ramadhan"<<endl;
cout <<"NIM : 20051397023"<<endl;
cout <<"\n"<<endl;

cout <<"Masukkan Nama Karyawan : "; getline (cin,nama); cout <<endl;
cout <<"Kategori Upah Karyawan :"<<endl;
	cout <<"	1 = Rp 5.000/jam kerja"<<endl;
	cout <<"	2 = Rp 7.000/jam kerja"<<endl;
	cout <<"	3 = Rp 8.000/jam kerja"<<endl;
	cout <<"	4 = Rp 10.000/jam kerja"<<endl;
cout <<"Masukkan Golongan Upah Karyawan : "; cin>>gol_upah;
switch (gol_upah) {
	case 1 : 	cout <<"Upah Mingguan Karyawan Tersebut = 5.000/jam kerja"<<endl;
				//operasi persamaan//
				gol_upah = gol_1;
				break;
	case 2 :	cout <<"Upah Mingguan Karyawan Tersebut = 7.000/jam kerja"<<endl;
				//operasi persamaan//
				gol_upah = gol_2;
				break;
	case 3 :	cout <<"Upah Mingguan Karyawan Tersebut = 8.000/jam kerja"<<endl;
				//operasi persamaan//
				gol_upah = gol_3;
				break;
	case 4 :	cout <<"Upah Mingguan Karyawan Tersebut = 10.000/jam kerja"<<endl;
				//operasi persamaan//
				gol_upah = gol_4;
				break;									
}

cout <<"		----------------------------------------------------------------------------"<<endl;
cout <<"Masukkan Jumlah Jam Kerja Karyawan : "; cin>>jam_kerja; cout<<endl;

// operasi hitungannya	
if (jam_kerja < 48){
	total_upah = jam_kerja*gol_upah;
	}
else if (jam_kerja > 48){
	jam_lembur = jam_kerja-48;
	total_upah = (48*gol_upah) + (jam_lembur*4000);
	}
cout <<"Karyawan Atas Nama : "<<nama<<endl;
cout <<"Upah Yang Diterima : Rp. "<<total_upah<<endl;
cout <<"Terima Kasih"<<endl;

return 0;
}
