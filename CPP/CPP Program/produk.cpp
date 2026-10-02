#pragma once
#include <string>

using namespace std;

// ============================================================================
// BASE CLASS: Produk
// Kelas induk paling atas dalam silsilah pewarisan.
// ============================================================================
class Produk {
protected:
    string nama;          // Atribut protected: Nama barang/produk
    float harga_dasar;    // Atribut protected: Harga pokok sebelum ongkir & garansi

public:
    // Konstruktor Default
    Produk() : nama(""), harga_dasar(0.0) {}

    // Konstruktor Parameterized
    Produk(string nama, float harga_dasar) : nama(nama), harga_dasar(harga_dasar) {}

    // Getter & Setter Atribut nama
    string getNama() const { return nama; }
    void setNama(string nama) { this->nama = nama; }

    // Getter & Setter Atribut harga_dasar
    float getHargaDasar() const { return harga_dasar; }
    void setHargaDasar(float harga_dasar) { this->harga_dasar = harga_dasar; }
};