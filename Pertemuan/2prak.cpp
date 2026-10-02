/*----------------------------------------------------
    Nama Program    : laprak.cpp
    Nama            : Muhammad Fahmi Algifari
    NPM             : 140810260088
    Tanggal buat    : Kamis, 03 September 2026
    Deskripsi       : Menghitung NPM
----------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {

    string nama1;
    string nama2;
    string nama3;

    int npm1;
    int npm2;
    int npm3;

    cout<<"========================== Absensi =========================="<<endl;
    cout<<"Nama Panggilan Saya                      : ";
    cin>> nama1;
    cout<<"3 NPM Akhir Saya                         : ";
    cin>> npm1;
    cout<<"Nama Panggilan Teman Laki-Laki           : ";
    cin>> nama2;
    cout<<"3 NPM Akhir Teman Laki-Laki              : ";
    cin>> npm2;
    cout<<"Nama Panggilan Teman Perempuan           : ";
    cin>> nama3;
    cout<<"3 NPM Akhit Teman Perempuan              : ";
    cin>> npm3;

    int npmA = npm2 + ((npm1 * 5) % 4);
    int npmB = npm3 + ((npm1 * 5) % 4);

    cout<<"====================== NPM Yang Dicari ======================"<<endl;
    cout<<"NPM Orang Lain 1 : "<< npmA <<endl;
    cout<<"NPM Orang Lain 2 : "<< npmB <<endl;
    
    return 0;
}