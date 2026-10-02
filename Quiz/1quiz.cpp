#include<iostream>
using namespace std;

int parkir(int waktu, int tarif){

    if(waktu % 60 > 0){
        waktu = waktu + 60 - (waktu % 60);
    }

        if(waktu <= 60){
            return tarif = 5000;

        } else if(waktu <= 1440){
            return tarif = 5000 + (((waktu - 60) / 60) * 2000);

        }
    return tarif = 51000 + (((waktu - 1440) / 60) * 4000);
}

int main(){
    int waktu;
    int tarif;

    cout << "waktu(menit) : ";
    cin >> waktu;
    
    cout << parkir(waktu, tarif);

    return 0;
}
