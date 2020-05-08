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
} data;

int main() {
    cout << "Nama Pelanggan = ";
    cin >> data.namaPelanggan07066;
    cout << "Nama Buku = ";
    cin >> data.namaBuku07066;
    cout << "Jumlah Buku = ";
    cin >> data.jumlahBuku07066;
    cout << "Harga Buku = ";
    cin >> data.hargaBuku07066;
    cout << "Harga Total = " << data.jumlahBuku07066*data.hargaBuku07066 << endl;
    return 0;
}
