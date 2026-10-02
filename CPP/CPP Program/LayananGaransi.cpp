#pragma once
#include "Produk.cpp"

// ============================================================================
// CHILD CLASS 2: LayananGaransi (Hierarchical Inheritance)
// Menggunakan 'virtual public Produk' untuk penanganan Diamond Problem.
// ============================================================================
class LayananGaransi : virtual public Produk {
protected:
    int durasi_tahun;  // Lama periode garansi (dalam Tahun)

public:
    // Konstruktor Default
    LayananGaransi() : Produk(), durasi_tahun(0) {}

    // Konstruktor Parameter
    LayananGaransi(string nama, float harga_dasar, int durasi_tahun)
        : Produk(nama, harga_dasar), durasi_tahun(durasi_tahun) {}

    // Getter & Setter Durasi
    int getDurasiTahun() const { return durasi_tahun; }
    void setDurasiTahun(int durasi_tahun) { this->durasi_tahun = durasi_tahun; }

    // Biaya Garansi dihitung 5% dari harga dasar per tahun durasi
    float hitung_biaya_garansi() const {
        return durasi_tahun * (0.05f * harga_dasar);
    }
};