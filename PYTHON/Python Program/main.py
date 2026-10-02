from TokoElektronik import TokoElektronik
from SmartPhoneResmi import SmartPhoneResmi

# ============================================================================
# MAIN DRIVER: Alur Eksekusi Program Python
# ============================================================================
if __name__ == "__main__":
    # Inisialisasi Toko
    toko = TokoElektronik("Toko Official Gadget")

    # 1. Tampilan Sebelum Penambahan Data
    print("==========================================")
    print("  1. KONDISI AWAL (SEBELUM TAMBAH DATA)   ")
    print("==========================================")
    toko.tampilkan_semua_produk()

    # Inisialisasi produk awal
    sp1 = SmartPhoneResmi("iPhone 15 Pro", 18500000, 0.4, 25000, 2)
    sp2 = SmartPhoneResmi("Samsung Galaxy S24 Ultra", 21000000, 0.5, 30000, 1)

    toko.tambah_produk(sp1)
    toko.tambah_produk(sp2)

    print("\n==========================================")
    print("  2. KONDISI SETELAH 2 DATA AWAL MASUK    ")
    print("==========================================")
    toko.tampilkan_semua_produk()

    # 2. Penambahan Data Baru (Sesudah)
    sp3 = SmartPhoneResmi("Xiaomi 14 Ultra", 14000000, 0.45, 20000, 3)
    print(f"\n>>> [SISTEM] Menambahkan produk baru: {sp3.get_nama()} <<<")
    toko.tambah_produk(sp3)

    # Tampilan akhir setelah penambahan data baru
    print("\n==========================================")
    print("  3. KONDISI AKHIR (SESUDAH TAMBAH DATA)  ")
    print("==========================================")
    toko.tampilkan_semua_produk()