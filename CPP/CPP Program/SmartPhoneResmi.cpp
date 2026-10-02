#pragma once
#include <iostream>
#include <iomanip>
#include "ProdukFisik.cpp"
#include "LayananGaransi.cpp"

// ============================================================================
// HYBRID / MULTIPLE INHERITANCE CLASS: SmartPhoneResmi
// Menggabungkan ProdukFisik DAN LayananGaransi sekaligus secara simultan.
// ============================================================================
class SmartPhoneResmi : public ProdukFisik, public LayananGaransi {
public:
    // Konstruktor Default
    SmartPhoneResmi() : Produk(), ProdukFisik(), LayananGaransi() {}

    // Konstruktor Parameter
    SmartPhoneResmi(string nama, float harga_dasar, float berat_kg, float tarif_ongkir, int durasi_garansi)
        : Produk(nama, harga_dasar),
          ProdukFisik(nama, harga_dasar, berat_kg, tarif_ongkir),
          LayananGaransi(nama, harga_dasar, durasi_garansi) {}

    // Cetak rincian total pembayaran gabungan (Harga Dasar + Ongkir + Garansi)
    void cetak_rincian_pembayaran() const {
        float ongkir = hitung_ongkir();               // Method dari ProdukFisik
        float biaya_garansi = hitung_biaya_garansi(); // Method dari LayananGaransi
        float total = harga_dasar + ongkir + biaya_garansi;

        cout << "----------------------------------------" << endl;
        cout << "Nama Produk         : " << nama << endl;
        cout << "Harga Dasar         : Rp " << fixed << setprecision(2) << harga_dasar << endl;
        cout << "Berat Produk        : " << berat_kg << " kg" << endl;
        cout << "Tarif Ongkir / kg   : Rp " << tarif_ongkir_per_kg << endl;
        cout << "Total Biaya Ongkir  : Rp " << ongkir << endl;
        cout << "Durasi Garansi      : " << durasi_tahun << " Tahun" << endl;
        cout << "Total Biaya Garansi : Rp " << biaya_garansi << endl;
        cout << "----------------------------------------" << endl;
        cout << "TOTAL PEMBAYARAN    : Rp " << total << endl;
        cout << "----------------------------------------" << endl;
    }
};