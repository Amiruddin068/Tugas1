/*Program Billing Warnet*/
/*Warnet Java Script*/
#include <iostream>
#include <stdio.h>
#include<cstdlib>
using namespace std;
int main (void)
{
    int menit;int jam;int detik;int w;
    int jmlW;
    int jmlJ;
    int JMlM;
    int jmlD;
    cout<<"===========================================================  "<<endl;
    cout<<"                      WELCOME TO                  "<<endl;
    cout<<"                  WARNET JAVA SCRIPT              "<<endl;
    cout<<"===========================================================  "<<endl;
    int j1, m1, d1, j2, m2, d2, lama1, lama2, lama3;
    cout<<"JAM MULAI PADA PUKUL : "<<endl;
    cout<<"Jam      = ";
    cin>>j1;
    cout<<"Menit    = ";
    cin>>m1;
    cout<<"Detik    = ";
    cin>>d1;
    cout<<"JAM MULAI PADA PUKUL = "<<j1<<":"<<m1<<":"<<d1<<"WIB"<<endl;
    cout<<endl;
    cout<<"JAM SELESAI PADA PUKUL : "<<endl;
    cout<<"Jam      = ";
    cin>>j2;
    cout<<"Menit    = ";
    cin>>m2;
    cout<<"Detik    = ";
    cin>>d2;       
    cout<<"JAM SELESAI PADA PUKUL = "<<j2<<":"<<m2<<":"<<d2<<"WIB"<<endl;
    cout<<endl;
    cout<<"LAMA BERMAIN = "<<j2-j1<<":"<<m2-m1<<":"<<d2-d1<<"WIB"<<endl;
    cout<<"==========================================================="<<endl;
    jmlD=((j2-j1)*3600)+((m2-m1)*60)+((d2-d1));
    jmlW=jmlD*5000/3600;
    cout<<"Anda Harus Membayar Sebesar : Rp."<<jmlW<<",-"<<endl;
}
