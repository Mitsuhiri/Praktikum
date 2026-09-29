/*
Program Kasir
Untuk Menghitung Total Harga Belanjaan + Pajaknya
*/

#include <iostream>
using namespace std;

int main(){
    string Namatoko = "Toko Buah Segar";
    string Namakasir = "Andi";
    char Kodekasir = 'A';
    int Hargaapel = 15500;
    int Hargajeruk = 12750;
    float Beratminimum = 0.5;
    float pajak = 11.5;
    bool buka = true;

    string nama;
    float Beratjeruk;
    float Beratapel;


    cout<<"Nama Toko   :"<< Namatoko <<endl;
    cout<<"Kasir       :"<< Namakasir <<endl<<endl;
    cout<<"Input Transaksi"<<endl;
    cout<<"Nama Pembeli     :";
    cin>> nama;
    cout<<"Berat Apel (kg)  :";
    cin>> Beratapel;
    cout<<"Berat Jeruk (kg) :";
    cin>> Beratjeruk;
    cout<<" "<<endl;

    float subjeruk = Beratjeruk * Hargajeruk;
    float subapel = Beratapel * Hargaapel;
    float totbel = subjeruk + subapel;
    float totalpajak = totbel / pajak / 100;
    float grand = totbel + totalpajak;

    cout<<"Struk Belanja"<<endl;
    cout<<"Pembeli  :"<< nama <<endl;
    cout<<"Apel     :"<< Beratapel <<endl;
    cout<<"Jeruk    :"<< Beratjeruk <<endl<<endl;
    cout<<"Perhitungan"<<endl;
    cout<<"Subtotal Apel     : Rp."<<subapel<<endl;
    cout<<"Subtotal jeruk    : Rp."<<subjeruk<<endl;  
    cout<<"Total Belanja     : Rp."<<totbel<<endl;  
    cout<<"Pajak (11.5%)     : Rp."<<totalpajak<<endl; 
    cout<<"Grand Total       : Rp."<<grand<<endl;  

    return 0;
}   