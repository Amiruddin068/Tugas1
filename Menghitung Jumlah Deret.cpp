/* Menghitung Jumlah deret */
/* Muhammad Imam Amiruddin */
/* 20051397068 */
/* 2020B */


#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;

int main()
{
	int a=0, b, c, jumlah=0, i, n;
	
	cout << "Menghitung Jumlah Deret Bilangan";
	cout <<"------------------------------------ \n";
	cout << "Masukkan Bilangan Awal : ";
	cin>>a;
	cout << "Masukkan Beda : ";
	cin >>b;
	cout << "Masukkan jumlah sampai deret ke-n : ";
	cin>>n;
	
	
	cout <<"Deret ke-"<<n<<" : ";
    cout<<a<<",";
    jumlah=jumlah+a;
    for(i=0; i<n-1; i++)
	{
    	     c=a+b;
    	     a=c;
    	     cout<<c<<",";
    	     
	}
	
	
	cout<<"\nJumlah deret ke-"<<n<<" : ";
	cout<<jumlah;
	
	getch();
	return 0;

}
