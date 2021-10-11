#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char Nama [30],*Kategori;
    int Umur;

        cout << "masukan nama : ";
        cin >> Nama;
        cout << "masukan umur : ";
        cin >> Umur;

            if (Umur<=1) {Kategori = "Bayi";}
            else if(Umur>1&&Umur<=3)
                {Kategori = "Balita";}
            else if(Umur>3&&Umur<=5)
                {Kategori = "Balita";}
            else if(Umur>5&&Umur<=12)
                {Kategori = "Anak-anak";}
            else if(Umur>12&&Umur<=17)
                {Kategori = "Remaja";}
            else if(Umur>17&&Umur<=30)
                {Kategori = "Pemuda";}
            else if(Umur>30&&Umur<=60)
                {Kategori = "Dewasa";}
            else if(Umur>60&&Umur<=100)
                {Kategori = "Lansia";}

        cout<<"==============================";
        cout<<"\nNama : "<<Nama;
        cout<<"\nUmur : "<<Umur;
        cout<<"\nKategori Usia : "<<Kategori;
        cout<<"\n==============================";

    getch();
}
