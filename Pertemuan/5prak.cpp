#include<iostream>
using namespace std;
// Fungsi untuk menginput Stats karakter
void inputStats(string &nama,int &atk, float &critRate,float &critDamage,char &kelas){

    cout << "=============================\n";
    cout << "RPG STATS\n";
    cout << "=============================\n";
    cout << "Masukkan Nama Karakter\t: ";
    cin >> nama;
    cout << "Masukkan ATK\t\t: ";
    cin >> atk;
    cout << "Masukkan Crit Rate\t: ";
    cin >> critRate;
    cout << "Masukkan Crit Damage\t: ";
    cin >> critDamage;
    cout << "Masukkan Tipe Kelas\t: ";
    cin >> kelas;
}
// Fungsi untuk menghitung attack dengan crit damage
void totalCrit(int &atk, float &critRate,float &critDamage,char &kelas){
    if(critRate >= 80){
        atk = atk * critDamage;
    } else{
        if(kelas == 'w' || kelas == 'a'){
            atk = atk * 1.5;
        } else if(kelas == 'w'){
            atk = atk * 2;
        }
    }
}
// Fungsi untuk Output Status yang sudah dihitung atknya
void status(string &nama,int &atk,char &kelas){
    cout << "--------------------------------------------\n";
    cout << "Nama Karakter\t: " << nama << "\n";
    cout << "ATK\t\t: " << atk << "\n";
    if(kelas == 'w'){
        cout << "Tipe Kelas\t: Warrior" ;
    } else if(kelas = 'm'){
        cout << "Tipe Kelas\t: Mage";
    } else if(kelas = 'a'){
        cout << "Tipe Kelas\t: Archer";
    } else {
        cout << "Tipe Kelas\t: Manusia Hitam";
    }
}
// Fungsi Utama untuk menjalankan fungsi lain lainnya
int main(){

    string nama;
    int atk;
    float critRate,critDamage;
    char kelas;

    inputStats(nama,atk,critRate,critDamage,kelas);
    totalCrit(atk,critRate,critDamage,kelas);
    status(nama,atk,kelas);
    return 0;
}

