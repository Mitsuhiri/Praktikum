/*
Program Pembuat Bangun Datar
Persegi, Segitiga Siku-Siku, Segitiga Sama Kaki
*/

#include<iostream>
using namespace std;

int main(){
    int pilihan;

    do {
        cout << "===================================\n";
        cout << "   E-LEARNING BANGUN DATAR PAHMI\n";
        cout << "   Designer: Pahmi\n";
        cout << "===================================\n";
        cout << "1. Persegi\n";
        cout << "2. Segitiga Siku-Siku\n";
        cout << "3. Segitiga Sama Kaki\n";
        cout << "4. X\n";
        cout << "5. Diamond(Belah Ketupat)\n";
        cout << "6. Hentikan Program\n";
        cout << "-----------------------------------\n";
        cout << "Pilih Menu (1-6) : ";
        cin >> pilihan;

        if (pilihan == 1){

            int baris;
            int kolom;
            char simbol;

            cout << "Kolom : ";
            cin >> kolom;
            cout << "Baris : ";
            cin >> baris;
            cout << "Simbol : ";
            cin >> simbol;

            for(int i = 1; i <= baris; i++){
                for(int j = 1; j <= kolom; j++){
                cout << simbol;
                }
                cout << "\n";
            }
        } else if (pilihan == 2){

            int tinggi;
            char simbol;

            cout << "Tinggi : ";
            cin >> tinggi;
            cout << "Simbol : ";
            cin >> simbol;

            for(int i = 1; i <= tinggi; i++){
                for(int j = tinggi - 1; j >= i; j--){
                    cout << " ";
                }
                for(int k = 1; k <= i; k++){
                    cout << simbol;
                }
                cout << "\n";
            }
        } else if (pilihan == 3){

            int tinggi;
            char simbol;

            cout << "Tinggi : ";
            cin >> tinggi;
            cout << "Simbol : ";
            cin >> simbol;

            for(int i = 1; i <= tinggi; i++){
                for(int j = tinggi - 1; j >= i; j--){
                    cout << " ";
                }
                for(int k = 1; k <= 2 * i - 1; k++){
                    cout << simbol;
                }
                cout << "\n";
            }
        } else if (pilihan == 4) {
            int tinggi;
            char simbol;

            cout << "Tinggi : ";
            cin >> tinggi;
            cout << "Simbol : ";
            cin >> simbol;

            for(int i = 1; i <= tinggi; i ++){
                for(int j = 1; j <= tinggi; j++){
                    if(i == j || (i + j) == (tinggi + 1)){
                        cout << simbol;
                    } else{
                        cout << " ";
                    }
                }
            cout << "\n";
            } 
        } else if (pilihan == 5){
            int ukuran;
            char simbol;

            cout << "Ukuran : ";
            cin >> ukuran;
            cout << "Simbol : ";
            cin >> simbol;
            
            for(int i = 1; i <= ukuran; i++){
                for(int j = 1; j <= ukuran - i; j++){
                    cout << " ";
                }
                for(int k = 1; k <= 2 * i - 1; k++){
                    cout << simbol;
                }
                cout << "\n";
            }
            for(int i = ukuran - 1; i >= 1; i--){
                for(int j = 1; j <= ukuran - i; j   ++){
                    cout << " ";
                }
                for(int k = 1; k <= 2 * i - 1; k++){
                    cout << simbol;
                }
                cout << "\n";
            }
        }
    } while (pilihan != 6);
        cout << "Program dihentikan.\n";
    return 0;
}