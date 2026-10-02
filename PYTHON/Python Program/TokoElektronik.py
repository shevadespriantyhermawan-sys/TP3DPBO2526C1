from SmartPhoneResmi import SmartPhoneResmi

# ============================================================================
# CONTAINER CLASS: TokoElektronik
# Memiliki relasi COMPOSITION dan mengelola Array/List of Objects.
# ============================================================================
class TokoElektronik:
    def __init__(self, nama_toko: str):
        self.nama_toko = nama_toko
        self.daftar_produk = []  # Composition & Array/List of Objects

    # Method menambah produk ke daftar toko
    def tambah_produk(self, produk: SmartPhoneResmi):
        self.daftar_produk.append(produk)

    # Method menampilkan katalog toko
    def tampilkan_semua_produk(self):
        print("\n========================================")
        print(f"     KATALOG PRODUK: {self.nama_toko}")
        print("========================================")
        if not self.daftar_produk:
            print("(Katalog Masih Kosong)")
            return
        for i, produk in enumerate(self.daftar_produk, 1):
            print(f"\n[ Item #{i} ]")
            produk.cetak_rincian_pembayaran()
        print(f"\nTotal Produk Tersedia: {len(self.daftar_produk)} item.")