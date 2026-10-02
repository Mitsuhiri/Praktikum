/*
Program penghitung nilai akhir praktikan
*/
#include <iostream>
using namespace std;

int main(){

    string nama;
    int npm;
    float tugas,uts,uas;

    cout<<"Nama lu          : \n";
    cin>>nama;
    cout<<"3 digit NPM lu   : \n";
    cin>>npm;
    cout<<"Nilai Tugas lu   : \n";
    cin>>tugas;
    cout<<"Nilai UTS lu     : \n";
    cin>>uts;
    cout<<"Nilai UAS lu     : \n";
    cin>>uas;
    
    float akhir = (tugas * 0.3) + (uts * 0.3) + (uas * 0.4);
    float kkm = 60 + ((npm * 2) % 15);

    cout<<"Nama lu          :"<<nama<<endl;
    cout<<"3 digit NPM lu   :"<<npm<<endl;
    cout<<"Nilai Tugas lu   :"<<tugas<<endl;
    cout<<"Nilai UTS lu     :"<<uts<<endl;
    cout<<"Nilai UAS lu     :"<<uas<<endl<<endl;
    cout<<"Hasil Pehitungan"<<endl;
    cout<<"Nilai Akhir lu   :"<<akhir<<endl;
    cout<<"KKM Unik lu      :"<<kkm<<endl;

    if(akhir >= kkm && akhir > 85){
        cout<<"CUMLAUDE";
    } else if(akhir >= kkm){
        cout<<"LULUS";
    } else {
        cout<<"Tidak LULUS";
    }
    return 0;
}