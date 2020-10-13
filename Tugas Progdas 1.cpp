	//* Program Billing Warnet Manual *//
	/* Tugas Progdas 1 */
	/* Nazwa Dafa Ramadhan (20051397023) */
#include <iostream>
using namespace std;

main ()
{
int jMulai,mMulai,dMulai,jSelesai,mSelesai,dSelesai,total_detik_mulai,total_detik_selesai,jam_pemakaian,menit_pemakaian,detik_pemakaian,durasi,total_bayar,sisa;
mulai :
selesai :
	cout <<"					*****	Billing Warnet HydranTz.Net	*****"<<endl;
	cout <<"Nazwa Dafa Ramadhan"<<endl;
	cout <<"NIM 20051397023"<<endl;
	cout <<"\n"<<endl;

cout <<"Waktu Mulai Penggunaan"<<endl;
	cout <<"Jam 		: ";cin>>jMulai;
	if (jMulai > 24){
	printf ("\nJam yang anda masukkan tidak ada \nSilahkan masukkan ulang waktu penggunaan .");
	system("pause");
   	system("cls");
   	goto mulai;
   }
	cout <<"Menit		: ";cin>>mMulai;
	if (mMulai > 60){
	printf ("\nMenit yang anda masukkan tidak ada \nSilahkan masukkan ulang waktu penggunaan .");
	system("pause");
   	system("cls");
   	goto mulai;
   }
   cout <<"Detik		: ";cin>>dMulai;
   if (dMulai > 60){
	printf ("\nDetik yang anda masukkan tidak ada \nSilahkan masukkan ulang waktu penggunaan .");
	system("pause");
   	system("cls");
   	goto mulai;
   }	
	// menggunakan operator perkalian dan penjumlahan
	total_detik_mulai=(jMulai*3600)+(mMulai*60)+dMulai;
	cout <<"\n"<<endl;
	
	
cout <<"Waktu Selesai Penggunaan"<<endl;
  	cout <<"Jam		: ";cin>>jSelesai;
	if (jSelesai > 24 ||jSelesai < jMulai){
	printf ("\nJam yang anda masukkan tidak ada \nSilahkan masukkan ulang waktu penggunaan .");
	system("pause");
   	system("cls");
   	goto selesai;
   }
	cout <<"Menit		: ";cin>>mSelesai;
	if (mSelesai > 60){
	printf ("\nMenit yang anda masukkan tidak ada \nSilahkan masukkan ulang waktu penggunaan .");
	system("pause");
   	system("cls");
   	goto selesai;
   }
   cout <<"Detik		: ";cin>>dSelesai;
   if (dSelesai > 60){
	printf ("\nDetik yang anda masukkan tidak ada \nSilahkan masukkan ulang waktu penggunaan .");
	system("pause");
   	system("cls");
   	goto selesai;
   }
	// menggunakan operator perkalian dan penjumlahan
	total_detik_selesai = (jSelesai*3600) + (mSelesai*60) + dSelesai;
	// menggunakan operator pengurangan
	durasi = total_detik_selesai - total_detik_mulai;


// menggunakan operasi perkalian dan pembagian
total_bayar=durasi*5000/3600;
// menggunakan operasi pembagian
jam_pemakaian=durasi/3600;
// menggunakan operator sisa bagi
sisa=durasi%3600;
// menggunakan operator pembagian
menit_pemakaian=sisa/60;
// menggunakan operator sisa bagi
detik_pemakaian=sisa%60;
cout <<"\n \n";

	
cout <<"Lama Pemakaian :"<<endl;
cout <<"= "<<jam_pemakaian<<" jam"<<endl;
cout <<"= "<<menit_pemakaian<<" menit"<<endl;
cout <<"= "<<detik_pemakaian<<" detik"<<endl;
cout <<"\n \n";

	
cout <<"Tarif Warnet = Rp.5000/jam"<<endl;
cout <<"Total Pembayaran = Rp."<<total_bayar<<endl;
cout <<"\n"<<endl;
cout <<"					*****	TERIMA KASIH ATAS KUNJUNGANNYA	*****"<<endl;
cout <<"								DAN"<<endl;
cout <<"					*****	SEMOGA HARI ANDA MENYENANGKAN :)*****"<<endl;	
return 0;
}	
