
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string menu[5] = {"soto", "rawon", "pecel", "es teh", "kopi"};
    string ulang;
    int harga[5] = {15000, 20000, 10000, 3000, 5000};
    int t;
    int posi[5];
    int total[5];
    int all;

    do {
        for (t = 0; t < 1; t++) {
            cout << "---------- MENU MAKANAN ----------" << endl;
            cout << "1. ";
            cout << menu[0] << endl;
            cout << "2. ";
            cout << menu[1] << endl;
            cout << "3. ";
            cout << menu[2] << endl;

            cout << "---------- MENU MINUMAN ----------" << endl;
            cout << "4. ";
            cout << menu[3] << endl;
            cout << "5. ";
            cout << menu[4] << endl << endl;
        }

        cout << "==================================" << endl;
        cout << "Menu :";
        cout << menu[0] << endl;
        cout << "Harga :";
        cout << harga[0] << endl;
        cout << "Masukkan Porsi :";
        cin >> posi[0];
        total[0] = harga[0] * posi[0];
        cout << "Totalnya: ";
        cout << total[0] << endl;

        cout << "==================================" << endl;
        cout << "Menu :";
        cout << menu[1] << endl;
        cout << "Harga :";
        cout << harga[1] << endl;
        cout << "Masukkan Porsi :";
        cin >> posi[1];
        total[1] = harga[1] * posi[1];
        cout << "Totalnya: ";
        cout << total[1] << endl;

        cout << "==================================" << endl;
        cout << "Menu :";
        cout << menu[2] << endl;
        cout << "Harga :";
        cout << harga[2] << endl;
        cout << "Masukkan Porsi :";
        cin >> posi[2];
        total[2] = harga[2] * posi[2];
        cout << "Totalnya: ";
        cout << total[2] << endl;

        cout << "==================================" << endl;
        cout << "Menu :";
        cout << menu[3] << endl;
        cout << "Harga :";
        cout << harga[3] << endl;
        cout << "Masukkan Porsi :";
        cin >> posi[3];
        total[3] = harga[3] * posi[3];
        cout << "Totalnya: ";
        cout << total[3] << endl;

        cout << "==================================" << endl;
        cout << "Menu :";
        cout << menu[4] << endl;
        cout << "Harga :";
        cout << harga[4] << endl;
        cout << "Masukkan Porsi :";
        cin >> posi[4];
        total[4] = harga[4] * posi[4];
        cout << "Totalnya: ";
        cout << total[4] << endl;


        all = total[0] + total[1] + total[2]
            + total[3] + total[4];

        cout << "-------- DETAIL PESANAN --------" << endl;
        cout << "Total Keseluruhan: ";
        cout << all << endl;
        cout << endl;

        cout << "Apakah Anda Mau Pesan Lagi? Tekan b/B: ";
        cin >> ulang;

    } while (ulang == "b" || ulang == "B");

    system("pause");
    return 0;
}

