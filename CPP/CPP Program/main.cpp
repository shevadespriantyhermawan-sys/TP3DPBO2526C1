#include <iostream>
#include "TokoElektronik.cpp"

using namespace std;

// ============================================================================
// MAIN FUNCTION: Alur Eksekusi Program C++
// ============================================================================
int main() {
    // Inisialisasi Objek Toko
    TokoElektronik toko("Toko Official Gadget");

    // 1. Kondisi awal sebelum ada data
    cout << "==========================================" << endl;
    cout << "  1. KONDISI AWAL (SEBELUM TAMBAH DATA)   " << endl;
    cout << "==========================================" << endl;
    toko.tampilkan_semua_produk();

    // Inisialisasi 2 produk awal
    SmartPhoneResmi sp1("iPhone 15 Pro", 18500000, 0.4f, 25000, 2);
    SmartPhoneResmi sp2("Samsung Galaxy S24 Ultra", 21000000, 0.5f, 30000, 1);

    toko.tambah_produk(sp1);
    toko.tambah_produk(sp2);

    cout << "\n==========================================" << endl;
    cout << "  2. KONDISI SETELAH 2 DATA AWAL MASUK    " << endl;
    cout << "==========================================" << endl;
    toko.tampilkan_semua_produk();

    // 2. Penambahan data baru (SESUDAH)
    SmartPhoneResmi sp3("Xiaomi 14 Ultra", 14000000, 0.45f, 20000, 3);
    cout << "\n>>> [SISTEM] Menambahkan produk baru: " << sp3.getNama() << " <<<" << endl;
    toko.tambah_produk(sp3);

    cout << "\n==========================================" << endl;
    cout << "  3. KONDISI AKHIR (SESUDAH TAMBAH DATA)  " << endl;
    cout << "==========================================" << endl;
    toko.tampilkan_semua_produk();

    return 0;
}