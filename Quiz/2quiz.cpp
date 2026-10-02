#include<iostream>
using namespace std;

void segitiga(int tinggi){
    for(int i = tinggi; i >= 1; i--){
        for(int j = 1; j <= tinggi - i; j++){
            cout << "  ";
        }

        for(int k = 1 ; k <= 2 * i - 1 ; k++){
            cout << "* ";
        }

        cout << "\n";

    }
}

int main(){
    int tinggi;

    cout << "tinggi : ";
    cin >> tinggi;

    segitiga(tinggi);

    return 0;
}
