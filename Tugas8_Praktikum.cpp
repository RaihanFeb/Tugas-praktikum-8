#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int bulan, tanggal;
    char inputsalah, ramalan, tiperamalan;
    char nama[20];

 start1:
     system ("cls");
     cout<<"Masukkan Nama Anda: ";
     cin>>nama;
     cout<<"Bulan Lahir(1-12): ";
     cin>>bulan;
     cout<<"Tanggal Lahir: ";
     cin>>tanggal;

if((tanggal>=21 && bulan==3) || (tanggal<=19 && bulan==4))
    cout<<"Zodiak Anda Aries \n";
else if((tanggal>=20 && bulan==4) || (tanggal<=20 && bulan==5))
    cout<<"Zodiak Anda Taurus \n";
else if((tanggal>=21 && bulan==5) || (tanggal<=20 && bulan==6))
    cout<<"Zodiak Anda Gemini \n";
else if((tanggal>=21 && bulan==6) || (tanggal<=22 && bulan==7))
    cout<<"Zodiak Anda Cancer \n";
else if((tanggal>=23 && bulan==7) || (tanggal<=22 && bulan==8))
    cout<<"Zodiak Anda Leo \n";
else if((tanggal>=23 && bulan==8) || (tanggal<=22 && bulan==9))
    cout<<"Zodiak Anda Virgo \n";
else if((tanggal>=23 && bulan==9) || (tanggal<=22 && bulan==10))
    cout<<"Zodiak Anda Libra \n";
else if((tanggal>=23 && bulan==10) || (tanggal<=21 && bulan==11))
    cout<<"Zodiak Anda Scorpio \n";
else if((tanggal>=22 && bulan==11) || (tanggal<=21 && bulan==12))
    cout<<"Zodiak Anda Sagitarius \n";
else if((tanggal>=20 && bulan==1) || (tanggal<=19 && bulan==1))
    cout<<"Zodiak Anda Capricorn \n";
else if((tanggal>=23 && bulan==8) || (tanggal<=18 && bulan==2))
    cout<<"Zodiak Anda Aquarius \n";
else if((tanggal>=19 && bulan==2) || (tanggal<=20 && bulan==3))
    cout<<"Zodiak Anda Capricorn \n";
}

