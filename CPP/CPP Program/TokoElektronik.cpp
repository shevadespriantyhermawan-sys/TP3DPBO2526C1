#pragma once
#include <vector>
#include "SmartPhoneResmi.cpp"

// ============================================================================
// CONTAINER CLASS: TokoElektronik
// Mengatur COMPOSITION (memiliki daftar_produk) & Array of Objects (vector).
// ============================================================================
class TokoElektronik {
private:
    string nama_toko;
    vector<SmartPhoneResmi> daftar_produk; // Relasi Composition & Array of Objects

public:
    // Konstruktor toko
    TokoElektronik(string nama) : nama_toko(nama) {}

    // Menambahkan objek SmartPhoneResmi ke dalam vector
    void tambah_produk(const SmartPhoneResmi& sp) {
        daftar_produk.push_back(sp);
    }

    // Menampilkan katalog toko beserta detail barang
    void tampilkan_semua_produk() const {
        cout << "\n========================================" << endl;
        cout << "     KATALOG PRODUK: " << nama_toko << endl;
        cout << "========================================" << endl;
        if (daftar_produk.empty()) {
            cout << "(Katalog Masih Kosong)" << endl;
            return;
        }
        for (size_t i = 0; i < daftar_produk.size(); ++i) {
            cout << "\n[ Item #" << (i + 1) << " ]" << endl;
            daftar_produk[i].cetak_rincian_pembayaran();
        }
        cout << "\nTotal Produk Tersedia: " << daftar_produk.size() << " item." << endl;
    }
};