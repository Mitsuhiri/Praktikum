#include<iostream>
using namespace std;

int main (){

    int student = 1;
    int nilaiA, nilaiB;

    for(int i = 1;i <= student; i++){
        cout << "Murid ke-" << i <<"\n";
        cout << "Masukan Nilai Ujian A : ";
        cin >> nilaiA;

        if(nilaiA == 100){
            cout << "Murid Ditemukan!";
            break;
        } else if(nilaiA >= 80){
            cout << "Masukan Nilai Ujian B : ";
            cin >> nilaiB;

            if(nilaiB > 90){
                cout << "Murid Ditemukan!";
                break;
            } else{
                "Murid belum memenuhi persyaratan";
            } 
        } else{
            cout << "Tidak memenuhi";
            continue;
        }
    }
    return 0;
}