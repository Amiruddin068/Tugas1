/* Penghitungan Gaji Karyawan */
/* Muhammad Imam Amiruddin */
/* 20051397068 */
/* 2020B */

#include <iostream>

using namespace std;

int main ()
{
	char Nama[95],Golongan;
	int jamkerja,jamlibur,jamlembur,gajimingguan,gajilembur,totalgaji,gajijam;
	cout << "Menghitung Gaji Karyawan" << endl;
	cout << "===============================" << endl;
	cout << "Muhammad Imam Amiruddin" << endl;
	cout << "================================" << endl;
	cout << "Masukkan Nama Karyawan : ";
	cin >> Nama;
	cout << "Masukkan Golongan (A/B/C/D) : ";
	cin >> Golongan;
	cout << "Masukkan Jumlah Jam Kerja : ";
	cin >> jamkerja;
	
	switch (Golongan) 
	{
	
	case 'A' :
		{
			gajijam = 5000;
			break;
		}
	case 'B' :
		{
			gajijam = 7000;
			break; 
		}
	case 'C' :
		{
			gajijam = 8000;
			break; 
		}
	case 'D' :
		{
			gajijam = 10000;
			break; 
		}
	default:
		{
			gajijam = 0;
			break;
		}
	}
	
	
	if  (jamkerja > 48 )
	{
		jamlembur = jamkerja - 48;
		cout << "Terdapat Jam Lembur  : << jamlembur" ;
		cout << endl;
		gajimingguan = (gajijam * 48);
		gajilembur = (jamlembur * 4000);
		totalgaji = (gajimingguan + gajilembur);
	}
	
	
	else if (jamkerja < 48)
	{
		cout << "Tidak Terdapat Jam Lembur : ";
		cout << endl;
		gajimingguan = (gajijam * jamkerja);
		totalgaji = (gajimingguan) ;
	}
	
	
	
	cout << "============================" <<endl;
	cout << "Karyawan Yang Bernama ";
	cout << Nama <<endl;
	cout << "Gaji Mingguan Anda Adalah Rp. ";
	cout << totalgaji << endl;
}
