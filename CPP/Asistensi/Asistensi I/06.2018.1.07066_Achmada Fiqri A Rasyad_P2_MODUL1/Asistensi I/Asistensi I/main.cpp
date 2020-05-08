//
//  main.cpp
//  Praktikum I
//
//  Created by Achmada Fiqri A Rasyad on 06/05/20.
//  Copyright © 2020 Achmada Fiqri A Rasyad. All rights reserved.
//

#include <iostream>

using namespace std;

struct pelanggan07066{
    char namaPelanggan07066[20];
    char namaBuku07066[20];
    int jumlahBuku07066;
    int hargaBuku07066;
    int totalBuku07066;
    int input;
} data;

int main() {
    
    
    cout << "Nama Pelanggan = ";
    cin.getline(data.namaPelanggan07066, 20);
    cout << "Jumlah Buku = ";
    cin >> data.input;
    for (int output=1; output <= data.input; output++) {
        cin.ignore();
        cout << "==================" <<endl;
        cout << "Nama Buku ke-" << output << " = ";
        cin.getline(data.namaBuku07066, 20);
        cout << "Jumlah Buku ke-" << output << " = ";
        cin >> data.jumlahBuku07066;
        cout << "Harga Buku ke-" << output << " = ";
        cin >> data.hargaBuku07066;
        data.totalBuku07066 = data.jumlahBuku07066*data.hargaBuku07066;
        cout << "Harga Total = " << data.totalBuku07066 << endl;
        cout << "==================\n";
        }
    
    
    
    return 0;
}
