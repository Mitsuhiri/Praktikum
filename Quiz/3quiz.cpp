#include<iostream>
using namespace std;

int bank(int n){

    if(n % 5 == 0){
        return bank(n - 1) / 5;

    } else if(n % 2 == 0){
        return 2 * bank(n - 1) - 3;

    } else if(n == 1){
        return 15;

    } 
    return bank(n - 1);
}

int main(){

    int duit = 15;

    int hari1;
    int hari2;

    cout << "masukan prediksi hari-1 : ";
    cin >> hari1;
    cout << "masukan prediksi hari-2 : ";
    cin >> hari2;

    cout << "jumlah prediksi hari ke-" << hari1 << " dan hari ke-" << hari2 << " : ";
    cout << bank(hari1) + bank(hari2);

    return 0;
}