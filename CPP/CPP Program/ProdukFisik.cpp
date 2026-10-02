#pragma once
#include "Produk.cpp"

// ============================================================================
// CHILD CLASS 1: ProdukFisik (Hierarchical Inheritance)
// Menggunakan 'virtual public Produk' untuk mencegah Diamond Problem.
// ============================================================================
class ProdukFisik : virtual public Produk {
protected:
    float berat_kg;             // Berat produk fisik (dalam Kg)
    float tarif_ongkir_per_kg;  // Tarif biaya pengiriman per Kg

public:
    // Konstruktor Default
    ProdukFisik() : Produk(), berat_kg(0.0), tarif_ongkir_per_kg(0.0) {}

    // Konstruktor Parameter
    ProdukFisik(string nama, float harga_dasar, float berat_kg, float tarif_ongkir_per_kg)
        : Produk(nama, harga_dasar), berat_kg(berat_kg), tarif_ongkir_per_kg(tarif_ongkir_per_kg) {}

    // Getter & Setter Berat
    float getBerat() const { return berat_kg; }
    void setBerat(float berat_kg) { this->berat_kg = berat_kg; }

    // Getter & Setter Tarif Ongkir
    float getTarifOngkirPerKg() const { return tarif_ongkir_per_kg; }
    void setTarifOngkirPerKg(float tarif) { this->tarif_ongkir_per_kg = tarif; }

    // Kalkulasi Ongkos Kirim = Berat x Tarif per Kg
    float hitung_ongkir() const {
        return berat_kg * tarif_ongkir_per_kg;
    }
};